/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f50c84; end: 107f50cfb;  */

bool FUN_107f50c84(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  
  bVar5 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar5) {
    uVar1 = (ulong)bVar5;
  }
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar2 = (ulong)bVar6;
  }
  if (uVar1 < uVar2) {
    return false;
  }
  plVar3 = (long *)*param_1;
  if (-1 < (char)bVar5) {
    plVar3 = param_1;
  }
  lVar7 = (uVar1 - uVar2) + (long)plVar3;
  plVar4 = (long *)*param_2;
  if (-1 < (char)bVar6) {
    plVar4 = param_2;
  }
  _memcmp(lVar7,plVar4,(long)plVar3 + (uVar1 - lVar7));
  return (int)lVar7 == 0;
}



/* Entry: 107f50cfc; end: 107f50d67;  */

undefined8 FUN_107f50cfc(byte *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  
  bVar2 = param_1[0x17];
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (param_2 - 1U < uVar1) {
    pbVar4 = *(byte **)param_1;
    if (-1 < (char)bVar2) {
      pbVar4 = param_1;
    }
    do {
      uVar3 = *pbVar4 - 0x61 >> 1;
      if (((uVar3 & 0x7f | (*pbVar4 - 0x61) * 0x80 & 0xff) < 0xd) &&
         ((0x1495U >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
        return 1;
      }
      param_2 = param_2 + -1;
      pbVar4 = pbVar4 + 1;
    } while (param_2 != 0);
  }
  return 0;
}



/* Entry: 107f50d68; end: 107f50db7;  */

long FUN_107f50d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 107f50db8; end: 107f50e07;  */

long FUN_107f50db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 107f50e08; end: 107f50e57;  */

long FUN_107f50e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 107f50e58; end: 107f50ea7;  */

long FUN_107f50e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 107f50ea8; end: 107f50eff;  */

long FUN_107f50ea8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838(param_1,&DAT_10f46481a);
  func_0x00010002b838(lVar1 + 0x18,&UNK_10f4665b0);
  return param_1;
}



/* Entry: 107f50f00; end: 107f50f4f;  */

long FUN_107f50f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 107f50f50; end: 107f50f9f;  */

long FUN_107f50f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 107f50fa0; end: 107f50fef;  */

long FUN_107f50fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 107f50ff0; end: 107f5103f;  */

long FUN_107f50ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 107f51040; end: 107f5108f;  */

long FUN_107f51040(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 107f51090; end: 107f510df;  */

long FUN_107f51090(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 107f510e0; end: 107f5112f;  */

long FUN_107f510e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 107f51130; end: 107f51187;  */

long FUN_107f51130(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838(param_1,&UNK_10f46666d);
  func_0x00010002b838(lVar1 + 0x18,&DAT_10f3f2df2);
  return param_1;
}



/* Entry: 107f51188; end: 107f511df;  */

long FUN_107f51188(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838(param_1,&UNK_10f466674);
  func_0x00010002b838(lVar1 + 0x18,&DAT_10f3f2df2);
  return param_1;
}



/* Entry: 107f511e0; end: 107f51237;  */

long FUN_107f511e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838(param_1,&UNK_10f466645);
  func_0x00010002b838(lVar1 + 0x18,"");
  return param_1;
}



/* Entry: 107f51238; end: 107f5128f;  */

long FUN_107f51238(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838(param_1,&UNK_10f4666a4);
  func_0x00010002b838(lVar1 + 0x18,"");
  return param_1;
}



/* Entry: 107f51290; end: 107f51317;  */

long * FUN_107f51290(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_107f52b58(param_1 + 0x11);
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 107f51318; end: 107f5149b;  */

undefined8 FUN_107f51318(undefined8 param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 **ppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined **appuStack_160 [2];
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  undefined1 uStack_41;
  
  if ((long)*(char *)((long)param_2 + 0x17) < 0) {
    plVar4 = (long *)*param_2;
    plVar3 = (long *)((long)plVar4 + param_2[1]);
  }
  else {
    plVar3 = (long *)((long)param_2 + (long)*(char *)((long)param_2 + 0x17));
    plVar4 = param_2;
  }
  for (; plVar4 != plVar3; plVar4 = (long *)((long)plVar4 + 1)) {
    uVar2 = (undefined1)*plVar4;
    ___tolower();
    *(undefined1 *)plVar4 = uVar2;
  }
  func_0x000105680760(appuStack_160);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (&ppuStack_178,param_2,0,0x32,&uStack_41);
  pppuVar1 = (undefined8 ***)ppuStack_178;
  if (-1 < (char)bStack_161) {
    uStack_170 = (ulong)bStack_161;
    pppuVar1 = &ppuStack_178;
  }
  func_0x0001003abe34(&ppuStack_150,pppuVar1,uStack_170);
  if ((char)bStack_161 < '\0') {
    __ZdlPv(ppuStack_178);
  }
  FUN_107f5149c(param_1,appuStack_160);
  appuStack_160[0] = &PTR_DAT_1108a5a38;
  ppuStack_150 = &PTR_DAT_1108a5a60;
  appuStack_e0[0] = &PTR_DAT_1108a5a88;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_160,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  return param_1;
}



/* Entry: 107f5149c; end: 107f5171f;  */

bool FUN_107f5149c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  lVar1 = 0x210;
  __Znwm();
  FUN_107f52bdc();
  plVar2 = (long *)param_1[1];
  param_1[1] = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar3 = (long *)0x40;
  __Znwm();
  lVar1 = param_1[1];
  *plVar3 = (long)&PTR_DAT_110a145f8;
  *(undefined4 *)(plVar3 + 1) = 0;
  plVar3[2] = (long)PTR___ZNSt3__14cerrE_110346738;
  FUN_107f57400(plVar3 + 3);
  plVar3[6] = lVar1;
  plVar3[7] = (long)param_1;
  plVar2 = (long *)*param_1;
  *param_1 = (long)plVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    plVar3 = (long *)*param_1;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return (int)plVar3 == 0;
}



/* Entry: 107f51720; end: 107f5177b;  */

void FUN_107f51720(long param_1)

{
  long lVar1;
  
  FUN_107f52b58(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  lVar1 = param_1;
  FUN_107f52a50(param_1);
  FUN_107f52a88(param_1,lVar1);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x48);
  return;
}



/* Entry: 107f5177c; end: 107f51887;  */

void FUN_107f5177c(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_2c0 [48];
  long *plStack_290;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined **appuStack_248 [2];
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined1 auStack_228 [56];
  undefined8 uStack_1f0;
  char cStack_1d9;
  undefined **appuStack_1c8 [19];
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined4 *)(param_1 + 2);
  uStack_68 = (undefined4)param_1[4];
  uStack_64 = (undefined4)((ulong)param_1[4] >> 0x20);
  uStack_70 = (undefined4)param_1[3];
  uStack_6c = (undefined4)((ulong)param_1[3] >> 0x20);
  uStack_58 = (undefined4)param_1[6];
  uStack_54 = (undefined4)((ulong)param_1[6] >> 0x20);
  uStack_60 = (undefined4)param_1[5];
  uStack_5c = (undefined4)((ulong)param_1[5] >> 0x20);
  lVar14 = param_1[8];
  uStack_48 = (undefined4)lVar14;
  uStack_50 = (undefined4)param_1[7];
  uStack_4c = (undefined4)((ulong)param_1[7] >> 0x20);
  lVar12 = param_1[9];
  plVar7 = (long *)0x88;
  __Znwm();
  *(undefined4 *)(plVar7 + 2) = uVar3;
  lVar13 = param_1[0x11];
  plVar7[0x10] = param_1[0x10];
  *(ulong *)((long)plVar7 + 0x1c) = CONCAT44(uStack_68,uStack_6c);
  *(ulong *)((long)plVar7 + 0x14) = CONCAT44(uStack_70,uStack_74);
  *(ulong *)((long)plVar7 + 0x2c) = CONCAT44(uStack_58,uStack_5c);
  *(ulong *)((long)plVar7 + 0x24) = CONCAT44(uStack_60,uStack_64);
  *(ulong *)((long)plVar7 + 0x3c) = CONCAT44(uStack_48,uStack_4c);
  *(ulong *)((long)plVar7 + 0x34) = CONCAT44(uStack_50,uStack_54);
  lVar16 = param_1[0xb];
  lVar15 = param_1[10];
  lVar18 = param_1[0xd];
  lVar17 = param_1[0xc];
  plVar7[9] = lVar12;
  plVar7[8] = lVar14;
  plVar7[0xb] = lVar16;
  plVar7[10] = lVar15;
  lVar14 = param_1[0xf];
  lVar12 = param_1[0xe];
  plVar7[0xd] = lVar18;
  plVar7[0xc] = lVar17;
  plVar7[0xf] = lVar14;
  plVar7[0xe] = lVar12;
  *plVar7 = lVar13;
  plVar7[1] = (long)(param_1 + 0x11);
  *(long **)(lVar13 + 8) = plVar7;
  param_1[0x11] = plVar7;
  param_1[0x13] = param_1[0x13] + 1;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  puVar10 = param_1;
  FUN_107f52a50();
  puVar8 = param_1;
  FUN_107f52a88();
  param_1[0xb] = param_1[4];
  param_1[10] = param_1[3];
  param_1[0xd] = param_1[6];
  param_1[0xc] = param_1[5];
  param_1[0xf] = param_1[8];
  param_1[0xe] = param_1[7];
  param_1[0x10] = param_1[9];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078d8678(appuStack_248);
  uStack_278 = puVar8[4];
  uStack_280 = puVar8[3];
  uStack_268 = puVar8[6];
  uStack_270 = puVar8[5];
  uStack_258 = puVar8[8];
  uStack_260 = puVar8[7];
  uStack_250 = puVar8[9];
  func_0x000100151db4(auStack_2c0,&UNK_10f46672b,0);
  uVar2 = puVar10[1];
  puVar9 = (undefined8 *)*puVar10;
  if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)puVar10 + 0x17);
    puVar9 = puVar10;
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_10f = 0;
  uStack_117 = 0;
  uStack_110 = 0;
  func_0x0001001535a4(puVar9,(long)puVar9 + uVar2,&lStack_130,auStack_2c0,0);
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  plVar7 = plStack_290;
  if (plStack_290 != (long *)0x0) {
    plVar1 = plStack_290 + 1;
    do {
      lVar13 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_290 + 0x10))(plStack_290);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  __ZNSt3__16localeD1Ev(auStack_2c0);
  if ((int)puVar9 == 0) {
    func_0x000100151db4(auStack_2c0,&UNK_10f466745,0);
    uVar2 = puVar10[1];
    puVar9 = (undefined8 *)*puVar10;
    if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)puVar10 + 0x17);
      puVar9 = puVar10;
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    lStack_128 = 0;
    lStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_10f = 0;
    uStack_117 = 0;
    uStack_110 = 0;
    func_0x0001001535a4(puVar9,(long)puVar9 + uVar2,&lStack_130,auStack_2c0,0);
    if (lStack_130 != 0) {
      lStack_128 = lStack_130;
      __ZdlPv();
    }
    plVar7 = plStack_290;
    if (plStack_290 != (long *)0x0) {
      plVar1 = plStack_290 + 1;
      do {
        lVar13 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_290 + 0x10))(plStack_290);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    __ZNSt3__16localeD1Ev(auStack_2c0);
    if ((int)puVar9 == 0) {
      func_0x000100151db4(auStack_2c0,&UNK_10f466764,0);
      uVar2 = puVar10[1];
      puVar9 = (undefined8 *)*puVar10;
      if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
        uVar2 = (ulong)*(byte *)((long)puVar10 + 0x17);
        puVar9 = puVar10;
      }
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      lStack_128 = 0;
      lStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_10f = 0;
      uStack_117 = 0;
      uStack_110 = 0;
      func_0x0001001535a4(puVar9,(long)puVar9 + uVar2,&lStack_130,auStack_2c0,0);
      if (lStack_130 != 0) {
        lStack_128 = lStack_130;
        __ZdlPv();
      }
      if (plStack_290 != (long *)0x0) {
        plVar7 = plStack_290 + 1;
        do {
          lVar13 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_290 + 0x10))(plStack_290);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_290);
        }
      }
      __ZNSt3__16localeD1Ev(auStack_2c0);
      if ((int)puVar9 == 0) {
        puVar10 = (undefined8 *)0x10;
        ___cxa_allocate_exception();
        func_0x00010002b838(&lStack_130,&UNK_10f46677a);
        __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                  (puVar10,&lStack_130);
        *puVar10 = &PTR_FUN_110a14458;
        ___cxa_throw(puVar10,&PTR_DAT_110a14418,FUN_107f51e10);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x107f51c44);
        (*pcVar6)();
      }
      FUN_107f51cd8(appuStack_248,&uStack_280,&UNK_10f46676e);
    }
    else {
      FUN_107f51cd8(appuStack_248,&uStack_280,&UNK_10f46675c);
    }
  }
  else {
    FUN_107f51cd8(appuStack_248,&uStack_280,&UNK_10f46673e);
    uStack_280 = uStack_280 & 0xffffffff;
  }
  FUN_107f51e14(puVar8,uStack_278 & 0xffffffff,uStack_280._4_4_);
  appuStack_248[0] = &PTR_DAT_1108a5a38;
  ppuStack_238 = &PTR_DAT_1108a5a60;
  appuStack_1c8[0] = &PTR_DAT_1108a5a88;
  ppuStack_230 = &PTR_DAT_11088d7b0;
  if (cStack_1d9 < '\0') {
    __ZdlPv(uStack_1f0);
  }
  ppuStack_230 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_228);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_248,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_1c8);
  return;
}



/* Entry: 107f51888; end: 107f51cd7;  */

void FUN_107f51888(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_240 [48];
  long *plStack_210;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined **appuStack_1c8 [2];
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 auStack_1a8 [56];
  undefined8 uStack_170;
  char cStack_159;
  undefined **appuStack_148 [19];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001078d8678(appuStack_1c8,param_2,0x18);
  uStack_1f8 = *(ulong *)(param_1 + 0x20);
  uStack_200 = *(ulong *)(param_1 + 0x18);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x30);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x28);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x40);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x48);
  func_0x000100151db4(auStack_240,&UNK_10f46672b,0);
  uVar3 = param_2[1];
  puVar7 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar7 = param_2;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_8f = 0;
  uStack_97 = 0;
  uStack_90 = 0;
  func_0x0001001535a4(puVar7,(long)puVar7 + uVar3,&lStack_b0,auStack_240,0);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  plVar2 = plStack_210;
  if (plStack_210 != (long *)0x0) {
    plVar1 = plStack_210 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_210 + 0x10))(plStack_210);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  __ZNSt3__16localeD1Ev(auStack_240);
  if ((int)puVar7 == 0) {
    func_0x000100151db4(auStack_240,&UNK_10f466745,0);
    uVar3 = param_2[1];
    puVar7 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar7 = param_2;
    }
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    lStack_a8 = 0;
    lStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_8f = 0;
    uStack_97 = 0;
    uStack_90 = 0;
    func_0x0001001535a4(puVar7,(long)puVar7 + uVar3,&lStack_b0,auStack_240,0);
    if (lStack_b0 != 0) {
      lStack_a8 = lStack_b0;
      __ZdlPv();
    }
    plVar2 = plStack_210;
    if (plStack_210 != (long *)0x0) {
      plVar1 = plStack_210 + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_210 + 0x10))(plStack_210);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    __ZNSt3__16localeD1Ev(auStack_240);
    if ((int)puVar7 == 0) {
      func_0x000100151db4(auStack_240,&UNK_10f466764,0);
      uVar3 = param_2[1];
      puVar7 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar7 = param_2;
      }
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      lStack_a8 = 0;
      lStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_8f = 0;
      uStack_97 = 0;
      uStack_90 = 0;
      func_0x0001001535a4(puVar7,(long)puVar7 + uVar3,&lStack_b0,auStack_240,0);
      if (lStack_b0 != 0) {
        lStack_a8 = lStack_b0;
        __ZdlPv();
      }
      if (plStack_210 != (long *)0x0) {
        plVar2 = plStack_210 + 1;
        do {
          lVar8 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_210 + 0x10))(plStack_210);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_210);
        }
      }
      __ZNSt3__16localeD1Ev(auStack_240);
      if ((int)puVar7 == 0) {
        puVar7 = (undefined8 *)0x10;
        ___cxa_allocate_exception();
        func_0x00010002b838(&lStack_b0,&UNK_10f46677a);
        __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                  (puVar7,&lStack_b0);
        *puVar7 = &PTR_FUN_110a14458;
        ___cxa_throw(puVar7,&PTR_DAT_110a14418,FUN_107f51e10);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x107f51c44);
        (*pcVar6)();
      }
      FUN_107f51cd8(appuStack_1c8,&uStack_200,&UNK_10f46676e);
    }
    else {
      FUN_107f51cd8(appuStack_1c8,&uStack_200,&UNK_10f46675c);
    }
  }
  else {
    FUN_107f51cd8(appuStack_1c8,&uStack_200,&UNK_10f46673e);
    uStack_200 = uStack_200 & 0xffffffff;
  }
  FUN_107f51e14(param_1,uStack_1f8 & 0xffffffff,uStack_200._4_4_);
  appuStack_1c8[0] = &PTR_DAT_1108a5a38;
  ppuStack_1b8 = &PTR_DAT_1108a5a60;
  appuStack_148[0] = &PTR_DAT_1108a5a88;
  ppuStack_1b0 = &PTR_DAT_11088d7b0;
  if (cStack_159 < '\0') {
    __ZdlPv(uStack_170);
  }
  ppuStack_1b0 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_1a8);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_1c8,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_148);
  return;
}



/* Entry: 107f51cd8; end: 107f51e0f;  */

long * FUN_107f51cd8(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  uint uStack_48;
  char cStack_41;
  
  puVar2 = auStack_50;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b(&cStack_41,param_1,0);
  if (cStack_41 == '\x01') {
    uStack_48 = 0;
    __ZNKSt3__18ios_base6getlocEv(auStack_50,(long)param_1 + *(long *)(*param_1 + -0x18));
    __ZNKSt3__16locale9use_facetERNS0_2idE
              (auStack_50,
               PTR___ZNSt3__18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE_110346900
              );
    __ZNSt3__16localeD1Ev(auStack_50);
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    lVar3 = param_3;
    _strlen(param_3);
    __ZNKSt3__18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE3getES4_S4_RNS_8ios_baseERjP2tmPKcSC_
              (puVar2,uVar4,0,lVar1,&uStack_48,param_2,param_3,param_3 + lVar3);
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | uStack_48);
  }
  return param_1;
}



/* Entry: 107f51e10; end: 107f51e13;  */

void FUN_107f51e10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 107f51e14; end: 107f51ebf;  */

void FUN_107f51e14(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  puVar5 = &uStack_a0;
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uStack_8c = *(undefined8 *)(param_1 + 0x2c);
  uStack_94 = *(undefined8 *)(param_1 + 0x24);
  uStack_84 = *(undefined8 *)(param_1 + 0x34);
  uStack_7c = (undefined4)*(undefined8 *)(param_1 + 0x3c);
  uStack_70 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = (undefined4)*(undefined8 *)(param_1 + 0x40);
  uStack_74 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (param_3 != -1) {
    iVar1 = param_3;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (param_2 != -1) {
    iVar2 = param_2;
  }
  uStack_54 = *(undefined8 *)(param_1 + 0x2c);
  uStack_5c = *(undefined8 *)(param_1 + 0x24);
  uStack_4c = *(undefined8 *)(param_1 + 0x34);
  uStack_44 = (undefined4)*(undefined8 *)(param_1 + 0x3c);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = (undefined4)*(undefined8 *)(param_1 + 0x40);
  uStack_3c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  puVar4 = &uStack_68;
  uStack_68 = uVar3;
  iStack_64 = iVar1;
  iStack_60 = iVar2;
  _mktime(puVar4);
  FUN_107f52a88(param_1,puVar4);
  uStack_a0 = uVar3;
  iStack_9c = iVar1;
  iStack_98 = iVar2;
  _mktime(&uStack_a0);
  FUN_107f5297c(param_1,puVar5);
  return;
}



/* Entry: 107f51ec0; end: 107f51ff7;  */

void FUN_107f51ec0(long param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  
  puVar5 = &uStack_b0;
  if (param_4 < 100) {
    FUN_107f51ff8(&uStack_78,param_1);
    param_4 = param_4 + ((iStack_64 + 0x7b2) / 100) * 100;
  }
  uStack_b0 = *(undefined8 *)(param_1 + 0x18);
  uStack_a8 = *(undefined4 *)(param_1 + 0x20);
  uStack_84 = *(undefined8 *)(param_1 + 0x44);
  uStack_8c = *(undefined8 *)(param_1 + 0x3c);
  uStack_7c = *(undefined4 *)(param_1 + 0x4c);
  uStack_70 = *(undefined4 *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x24);
  if (param_3 != -1) {
    iVar1 = param_3;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (param_2 != -1) {
    iVar2 = param_2 + -1;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  if (param_4 != 0xffffffff) {
    iVar3 = param_4 - 0x76c;
  }
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = 0xffffffffffffffff;
  uStack_58 = 0xffffffff;
  uStack_4c = *(undefined8 *)(param_1 + 0x44);
  uStack_54 = *(undefined8 *)(param_1 + 0x3c);
  uStack_44 = *(undefined4 *)(param_1 + 0x4c);
  puVar4 = &uStack_78;
  iStack_6c = iVar1;
  iStack_68 = iVar2;
  iStack_64 = iVar3;
  _mktime(puVar4);
  FUN_107f52a88(param_1,puVar4);
  uStack_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffff;
  iStack_a4 = iVar1;
  iStack_a0 = iVar2;
  iStack_9c = iVar3;
  _mktime(&uStack_b0);
  FUN_107f5297c(param_1,puVar5);
  return;
}



/* Entry: 107f51ff8; end: 107f520db;  */

void FUN_107f51ff8(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_107f52a50();
  puVar2 = &uStack_38;
  uStack_38 = param_2;
  _localtime_r(puVar2,param_1);
  if (puVar2 != (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x00010002b838(auStack_50,&UNK_10f4667c6);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (puVar2,auStack_50);
  *puVar2 = &PTR_FUN_110a14458;
  ___cxa_throw(puVar2,&PTR_DAT_110a14418,FUN_107f51e10);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107f520a4);
  (*pcVar1)();
}



/* Entry: 107f520dc; end: 107f521d7;  */

void FUN_107f520dc(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined8 uStack_25c;
  undefined8 uStack_254;
  undefined8 uStack_24c;
  undefined8 uStack_244;
  undefined4 uStack_23c;
  ulong uStack_230;
  long lStack_228;
  undefined8 **ppuStack_220;
  code *pcStack_218;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int iStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  uint uStack_1ec;
  undefined4 uStack_1e8;
  undefined8 uStack_1e4;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  long lStack_1b8;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = *(undefined4 *)(param_1 + 0x20);
  uVar11 = *(undefined4 *)(param_1 + 0x58);
  uStack_58 = *(undefined8 *)(param_1 + 100);
  uStack_60 = *(undefined8 *)(param_1 + 0x5c);
  uStack_50 = *(undefined8 *)(param_1 + 0x6c);
  uStack_48 = (undefined4)*(undefined8 *)(param_1 + 0x74);
  uStack_3c = *(undefined8 *)(param_1 + 0x80);
  uStack_44 = (undefined4)*(undefined8 *)(param_1 + 0x78);
  uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  uVar12 = param_2 - 1;
  if (uVar12 < 8) {
    uStack_90 = *(undefined4 *)(&UNK_10dee8748 + (ulong)uVar12 * 4);
    uVar11 = *(undefined4 *)(&UNK_10dee8768 + (ulong)uVar12 * 4);
  }
  uStack_98 = 0;
  uStack_84 = *(undefined8 *)(param_1 + 0x2c);
  uStack_8c = *(undefined8 *)(param_1 + 0x24);
  uStack_7c = *(undefined8 *)(param_1 + 0x34);
  uStack_74 = (undefined4)*(undefined8 *)(param_1 + 0x3c);
  uStack_68 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x40);
  uStack_6c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  puVar13 = &uStack_98;
  _mktime(puVar13);
  FUN_107f52a88(param_1,puVar13);
  uStack_98 = 0;
  uStack_84 = uStack_58;
  uStack_8c = uStack_60;
  uStack_74 = uStack_48;
  uStack_7c = uStack_50;
  uStack_68 = uStack_3c;
  uStack_70 = uStack_44;
  uStack_6c = uStack_40;
  iVar18 = (int)&uStack_98;
  uStack_90 = uVar11;
  _mktime();
  FUN_107f5297c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_107f521d8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_148 = *(int *)(param_1 + 0x18);
  iStack_144 = *(int *)(param_1 + 0x1c);
  iStack_140 = *(int *)(param_1 + 0x20);
  iStack_13c = *(int *)(param_1 + 0x24);
  iStack_138 = *(int *)(param_1 + 0x28);
  iStack_134 = *(int *)(param_1 + 0x2c);
  iVar19 = *(int *)(param_1 + 0x50);
  iVar20 = *(int *)(param_1 + 0x54);
  iVar21 = *(int *)(param_1 + 0x58);
  iVar22 = *(int *)(param_1 + 0x5c);
  iVar23 = *(int *)(param_1 + 0x60);
  iVar24 = *(int *)(param_1 + 100);
  uStack_108 = *(undefined8 *)(param_1 + 0x7c);
  uStack_110 = *(undefined8 *)(param_1 + 0x74);
  uStack_100 = *(undefined4 *)(param_1 + 0x84);
  if (param_3 < 4) {
    if (param_3 == 1) {
      iStack_148 = iStack_148 + iVar18;
      iVar19 = iVar19 + iVar18;
    }
    else if (param_3 == 2) {
      iStack_144 = iStack_144 + iVar18;
      iVar20 = iVar20 + iVar18;
    }
    else if (param_3 == 3) {
      iStack_140 = iStack_140 + iVar18;
      iVar21 = iVar21 + iVar18;
    }
  }
  else if (param_3 < 6) {
    if (param_3 == 4) {
      iStack_13c = iStack_13c + iVar18;
      iVar22 = iVar22 + iVar18;
    }
    else if (param_3 == 5) {
      iStack_13c = iStack_13c + iVar18 * 7;
      iVar22 = iVar22 + iVar18 * 7;
    }
  }
  else if (param_3 == 6) {
    iStack_138 = iStack_138 + iVar18;
    iVar23 = iVar23 + iVar18;
  }
  else if (param_3 == 7) {
    iStack_134 = iStack_134 + iVar18;
    iVar24 = iVar24 + iVar18;
  }
  uStack_130 = 0xffffffffffffffff;
  uStack_128 = 0xffffffff;
  uStack_11c = *(undefined8 *)(param_1 + 0x44);
  uStack_124 = *(undefined8 *)(param_1 + 0x3c);
  uStack_114 = *(undefined4 *)(param_1 + 0x4c);
  piVar14 = &iStack_148;
  puStack_b0 = &stack0xfffffffffffffff0;
  _mktime(piVar14);
  FUN_107f52a88(param_1,piVar14);
  uStack_130 = 0xffffffffffffffff;
  uStack_128 = 0xffffffff;
  uStack_11c = uStack_108;
  uStack_124 = uStack_110;
  uStack_114 = uStack_100;
  iVar18 = (int)&iStack_148;
  iStack_148 = iVar19;
  iStack_144 = iVar20;
  iStack_140 = iVar21;
  iStack_13c = iVar22;
  iStack_138 = iVar23;
  iStack_134 = iVar24;
  _mktime();
  FUN_107f5297c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_107f52384;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar24 = *(int *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  iVar22 = *(int *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  uVar9 = *(undefined4 *)(param_1 + 0x54);
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  iVar19 = *(int *)(param_1 + 0x5c);
  iVar21 = *(int *)(param_1 + 0x60);
  uVar10 = *(undefined4 *)(param_1 + 100);
  uVar5 = *(undefined4 *)(param_1 + 0x68);
  uVar12 = *(uint *)(param_1 + 0x6c);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x7c);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x74);
  uStack_1c0 = *(undefined4 *)(param_1 + 0x84);
  lVar15 = param_1;
  ppuStack_160 = &puStack_b0;
  if (iVar18 < 5) {
    if (iVar18 == 2) {
      uStack_208 = 0;
      uStack_1e8 = 0xffffffff;
      uStack_1dc = *(undefined8 *)(param_1 + 0x44);
      uStack_1e4 = *(undefined8 *)(param_1 + 0x3c);
      uStack_1d4 = *(undefined4 *)(param_1 + 0x4c);
      puVar16 = &uStack_208;
      uStack_204 = uVar6;
      uStack_200 = uVar1;
      iStack_1fc = iVar24;
      iStack_1f8 = uVar2;
      uStack_1f4 = uVar7;
      iStack_1f0 = iVar22;
      uStack_1ec = uVar8;
      _mktime(puVar16);
      FUN_107f52a88(param_1,puVar16);
      uStack_208 = 0x3b;
      uStack_1e8 = 0xffffffff;
      uStack_1dc = uStack_1c8;
      uStack_1e4 = uStack_1d0;
      uStack_1d4 = uStack_1c0;
      iVar18 = (int)&uStack_208;
      uStack_204 = uVar9;
      uStack_200 = uVar4;
      iStack_1fc = iVar19;
      iStack_1f8 = iVar21;
      uStack_1f4 = uVar10;
      iStack_1f0 = uVar5;
      uStack_1ec = uVar12;
      _mktime();
      FUN_107f5297c();
      goto LAB_107f52718;
    }
    if (iVar18 == 3) {
      uStack_204 = 0;
      uStack_1e8 = 0xffffffff;
      uStack_1dc = *(undefined8 *)(param_1 + 0x44);
      uStack_1e4 = *(undefined8 *)(param_1 + 0x3c);
      uStack_1d4 = *(undefined4 *)(param_1 + 0x4c);
      puVar16 = &uStack_208;
      uStack_208 = uVar11;
      uStack_200 = uVar1;
      iStack_1fc = iVar24;
      iStack_1f8 = uVar2;
      uStack_1f4 = uVar7;
      iStack_1f0 = iVar22;
      uStack_1ec = uVar8;
      _mktime(puVar16);
      FUN_107f52a88(param_1,puVar16);
      uStack_204 = 0x3b;
      uStack_1e8 = 0xffffffff;
      uStack_1dc = uStack_1c8;
      uStack_1e4 = uStack_1d0;
      uStack_1d4 = uStack_1c0;
      puVar16 = &uStack_208;
      uStack_208 = uVar3;
      uStack_200 = uVar4;
      iStack_1fc = iVar19;
      iStack_1f8 = iVar21;
      uStack_1f4 = uVar10;
      iStack_1f0 = uVar5;
      uStack_1ec = uVar12;
      _mktime(puVar16);
      FUN_107f5297c(param_1,puVar16);
      iVar18 = 2;
    }
    else {
      if (iVar18 != 4) goto LAB_107f52718;
      uStack_200 = 0;
      uStack_1e8 = 0xffffffff;
      uStack_1dc = *(undefined8 *)(param_1 + 0x44);
      uStack_1e4 = *(undefined8 *)(param_1 + 0x3c);
      uStack_1d4 = *(undefined4 *)(param_1 + 0x4c);
      puVar16 = &uStack_208;
      uStack_208 = uVar11;
      uStack_204 = uVar6;
      iStack_1fc = iVar24;
      iStack_1f8 = uVar2;
      uStack_1f4 = uVar7;
      iStack_1f0 = iVar22;
      uStack_1ec = uVar8;
      _mktime(puVar16);
      FUN_107f52a88(param_1,puVar16);
      uStack_200 = 0x17;
      uStack_1e8 = 0xffffffff;
      uStack_1dc = uStack_1c8;
      uStack_1e4 = uStack_1d0;
      uStack_1d4 = uStack_1c0;
      puVar16 = &uStack_208;
      uStack_208 = uVar3;
      uStack_204 = uVar9;
      iStack_1fc = iVar19;
      iStack_1f8 = iVar21;
      uStack_1f4 = uVar10;
      iStack_1f0 = uVar5;
      uStack_1ec = uVar12;
      _mktime(puVar16);
      FUN_107f5297c(param_1,puVar16);
      iVar18 = 3;
    }
  }
  else {
    if (iVar18 == 5) {
      iStack_1fc = iVar24 - iVar22;
      iVar18 = iStack_1fc + 6;
      iStack_1f0 = 0;
      uStack_1e8 = 0xffffffff;
      uStack_1dc = *(undefined8 *)(param_1 + 0x44);
      uStack_1e4 = *(undefined8 *)(param_1 + 0x3c);
      uStack_1d4 = *(undefined4 *)(param_1 + 0x4c);
      puVar16 = &uStack_208;
      uStack_208 = uVar11;
      uStack_204 = uVar6;
      uStack_200 = uVar1;
      iStack_1f8 = uVar2;
      uStack_1f4 = uVar7;
      uStack_1ec = uVar8;
      _mktime(puVar16);
      FUN_107f52a88(param_1,puVar16);
      iStack_1f0 = 6;
      iStack_1fc = iVar18;
    }
    else {
      if (iVar18 != 6) {
        if (iVar18 != 7) goto LAB_107f52718;
        iStack_1f8 = 0;
        uStack_1e8 = 0xffffffff;
        uStack_1dc = *(undefined8 *)(param_1 + 0x44);
        uStack_1e4 = *(undefined8 *)(param_1 + 0x3c);
        uStack_1d4 = *(undefined4 *)(param_1 + 0x4c);
        puVar16 = &uStack_208;
        uStack_208 = uVar11;
        uStack_204 = uVar6;
        uStack_200 = uVar1;
        iStack_1fc = iVar24;
        uStack_1f4 = uVar7;
        iStack_1f0 = iVar22;
        uStack_1ec = uVar8;
        _mktime(puVar16);
        FUN_107f52a88(param_1,puVar16);
        iStack_1f8 = 0xb;
        uStack_1e8 = 0xffffffff;
        uStack_1dc = uStack_1c8;
        uStack_1e4 = uStack_1d0;
        uStack_1d4 = uStack_1c0;
        puVar16 = &uStack_208;
        uStack_208 = uVar3;
        uStack_204 = uVar9;
        uStack_200 = uVar4;
        iStack_1fc = iVar19;
        uStack_1f4 = uVar10;
        iStack_1f0 = uVar5;
        uStack_1ec = uVar12;
        _mktime(puVar16);
        FUN_107f5297c(param_1,puVar16);
        iVar18 = 6;
        goto LAB_107f52714;
      }
      iVar18 = *(int *)(&UNK_10dee8718 + (long)iVar21 * 4);
      iStack_1fc = 1;
      uStack_1e8 = 0xffffffff;
      uStack_1dc = *(undefined8 *)(param_1 + 0x44);
      uStack_1e4 = *(undefined8 *)(param_1 + 0x3c);
      uStack_1d4 = *(undefined4 *)(param_1 + 0x4c);
      puVar16 = &uStack_208;
      uStack_208 = uVar11;
      uStack_204 = uVar6;
      uStack_200 = uVar1;
      iStack_1f8 = uVar2;
      uStack_1f4 = uVar7;
      iStack_1f0 = iVar22;
      uStack_1ec = uVar8;
      _mktime(puVar16);
      FUN_107f52a88(param_1,puVar16);
      iStack_1fc = iVar18;
      iStack_1f0 = uVar5;
    }
    uStack_1e8 = 0xffffffff;
    uStack_1dc = uStack_1c8;
    uStack_1e4 = uStack_1d0;
    uStack_1d4 = uStack_1c0;
    puVar16 = &uStack_208;
    uStack_208 = uVar3;
    uStack_204 = uVar9;
    uStack_200 = uVar4;
    iStack_1f8 = iVar21;
    uStack_1f4 = uVar10;
    uStack_1ec = uVar12;
    _mktime(puVar16);
    FUN_107f5297c(param_1,puVar16);
    iVar18 = 4;
  }
LAB_107f52714:
  FUN_107f52384();
LAB_107f52718:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  puVar16 = &uStack_270;
  puVar17 = &uStack_270;
  pcStack_218 = FUN_107f52754;
  uStack_244 = *(undefined8 *)(lVar15 + 0x44);
  uStack_24c = *(undefined8 *)(lVar15 + 0x3c);
  uStack_23c = *(undefined4 *)(lVar15 + 0x4c);
  iStack_260 = *(int *)(&UNK_10dee86e0 + (long)iVar18 * 4) + -1;
  uStack_268 = 0;
  uStack_264 = 1;
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_25c = CONCAT44(0xffffffff,*(undefined4 *)(lVar15 + 0x2c));
  uStack_254 = CONCAT44(0xffffffff,*(undefined4 *)(lVar15 + 0x34));
  uStack_230 = (ulong)uVar12;
  lStack_228 = param_1;
  ppuStack_220 = &ppuStack_160;
  _mktime(&uStack_270);
  FUN_107f52a88(lVar15,puVar16);
  uStack_254 = *(undefined8 *)(lVar15 + 0x34);
  uStack_25c = *(undefined8 *)(lVar15 + 0x2c);
  uStack_244 = *(undefined8 *)(lVar15 + 0x44);
  uStack_24c = *(undefined8 *)(lVar15 + 0x3c);
  uStack_23c = *(undefined4 *)(lVar15 + 0x4c);
  uStack_264 = *(undefined4 *)(lVar15 + 0x24);
  iStack_260 = *(int *)(lVar15 + 0x28) + 3;
  uStack_270 = 0xffffffff;
  uStack_26c = (undefined4)*(undefined8 *)(lVar15 + 0x1c);
  uStack_268 = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x1c) >> 0x20);
  _mktime(&uStack_270);
  FUN_107f5297c(lVar15,puVar17);
  return;
}



/* Entry: 107f521d8; end: 107f52383;  */

void FUN_107f521d8(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined8 uStack_1bc;
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  ulong uStack_190;
  long lStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int iStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  long lStack_118;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_a8 = *(int *)(param_1 + 0x18);
  iStack_a4 = *(int *)(param_1 + 0x1c);
  iStack_a0 = *(int *)(param_1 + 0x20);
  iStack_9c = *(int *)(param_1 + 0x24);
  iStack_98 = *(int *)(param_1 + 0x28);
  iStack_94 = *(int *)(param_1 + 0x2c);
  iVar18 = *(int *)(param_1 + 0x50);
  iVar19 = *(int *)(param_1 + 0x54);
  iVar20 = *(int *)(param_1 + 0x58);
  iVar21 = *(int *)(param_1 + 0x5c);
  iVar22 = *(int *)(param_1 + 0x60);
  iVar23 = *(int *)(param_1 + 100);
  uStack_68 = *(undefined8 *)(param_1 + 0x7c);
  uStack_70 = *(undefined8 *)(param_1 + 0x74);
  uStack_60 = *(undefined4 *)(param_1 + 0x84);
  if (param_3 < 4) {
    if (param_3 == 1) {
      iStack_a8 = iStack_a8 + param_2;
      iVar18 = iVar18 + param_2;
    }
    else if (param_3 == 2) {
      iStack_a4 = iStack_a4 + param_2;
      iVar19 = iVar19 + param_2;
    }
    else if (param_3 == 3) {
      iStack_a0 = iStack_a0 + param_2;
      iVar20 = iVar20 + param_2;
    }
  }
  else if (param_3 < 6) {
    if (param_3 == 4) {
      iStack_9c = iStack_9c + param_2;
      iVar21 = iVar21 + param_2;
    }
    else if (param_3 == 5) {
      iStack_9c = iStack_9c + param_2 * 7;
      iVar21 = iVar21 + param_2 * 7;
    }
  }
  else if (param_3 == 6) {
    iStack_98 = iStack_98 + param_2;
    iVar22 = iVar22 + param_2;
  }
  else if (param_3 == 7) {
    iStack_94 = iStack_94 + param_2;
    iVar23 = iVar23 + param_2;
  }
  uStack_90 = 0xffffffffffffffff;
  uStack_88 = 0xffffffff;
  uStack_7c = *(undefined8 *)(param_1 + 0x44);
  uStack_84 = *(undefined8 *)(param_1 + 0x3c);
  uStack_74 = *(undefined4 *)(param_1 + 0x4c);
  piVar13 = &iStack_a8;
  _mktime(piVar13);
  FUN_107f52a88(param_1,piVar13);
  uStack_90 = 0xffffffffffffffff;
  uStack_88 = 0xffffffff;
  uStack_7c = uStack_68;
  uStack_84 = uStack_70;
  uStack_74 = uStack_60;
  iVar17 = (int)&iStack_a8;
  iStack_a8 = iVar18;
  iStack_a4 = iVar19;
  iStack_a0 = iVar20;
  iStack_9c = iVar21;
  iStack_98 = iVar22;
  iStack_94 = iVar23;
  _mktime();
  FUN_107f5297c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_107f52384;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar23 = *(int *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar8 = *(undefined4 *)(param_1 + 0x2c);
  iVar21 = *(int *)(param_1 + 0x30);
  uVar9 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x50);
  uVar10 = *(undefined4 *)(param_1 + 0x54);
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  iVar18 = *(int *)(param_1 + 0x5c);
  iVar20 = *(int *)(param_1 + 0x60);
  uVar11 = *(undefined4 *)(param_1 + 100);
  uVar6 = *(undefined4 *)(param_1 + 0x68);
  uVar12 = *(uint *)(param_1 + 0x6c);
  uStack_128 = *(undefined8 *)(param_1 + 0x7c);
  uStack_130 = *(undefined8 *)(param_1 + 0x74);
  uStack_120 = *(undefined4 *)(param_1 + 0x84);
  lVar14 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (iVar17 < 5) {
    if (iVar17 == 2) {
      uStack_168 = 0;
      uStack_148 = 0xffffffff;
      uStack_13c = *(undefined8 *)(param_1 + 0x44);
      uStack_144 = *(undefined8 *)(param_1 + 0x3c);
      uStack_134 = *(undefined4 *)(param_1 + 0x4c);
      puVar15 = &uStack_168;
      uStack_164 = uVar7;
      uStack_160 = uVar2;
      iStack_15c = iVar23;
      iStack_158 = uVar3;
      uStack_154 = uVar8;
      iStack_150 = iVar21;
      uStack_14c = uVar9;
      _mktime(puVar15);
      FUN_107f52a88(param_1,puVar15);
      uStack_168 = 0x3b;
      uStack_148 = 0xffffffff;
      uStack_13c = uStack_128;
      uStack_144 = uStack_130;
      uStack_134 = uStack_120;
      iVar17 = (int)&uStack_168;
      uStack_164 = uVar10;
      uStack_160 = uVar5;
      iStack_15c = iVar18;
      iStack_158 = iVar20;
      uStack_154 = uVar11;
      iStack_150 = uVar6;
      uStack_14c = uVar12;
      _mktime();
      FUN_107f5297c();
      goto LAB_107f52718;
    }
    if (iVar17 == 3) {
      uStack_164 = 0;
      uStack_148 = 0xffffffff;
      uStack_13c = *(undefined8 *)(param_1 + 0x44);
      uStack_144 = *(undefined8 *)(param_1 + 0x3c);
      uStack_134 = *(undefined4 *)(param_1 + 0x4c);
      puVar15 = &uStack_168;
      uStack_168 = uVar1;
      uStack_160 = uVar2;
      iStack_15c = iVar23;
      iStack_158 = uVar3;
      uStack_154 = uVar8;
      iStack_150 = iVar21;
      uStack_14c = uVar9;
      _mktime(puVar15);
      FUN_107f52a88(param_1,puVar15);
      uStack_164 = 0x3b;
      uStack_148 = 0xffffffff;
      uStack_13c = uStack_128;
      uStack_144 = uStack_130;
      uStack_134 = uStack_120;
      puVar15 = &uStack_168;
      uStack_168 = uVar4;
      uStack_160 = uVar5;
      iStack_15c = iVar18;
      iStack_158 = iVar20;
      uStack_154 = uVar11;
      iStack_150 = uVar6;
      uStack_14c = uVar12;
      _mktime(puVar15);
      FUN_107f5297c(param_1,puVar15);
      iVar17 = 2;
    }
    else {
      if (iVar17 != 4) goto LAB_107f52718;
      uStack_160 = 0;
      uStack_148 = 0xffffffff;
      uStack_13c = *(undefined8 *)(param_1 + 0x44);
      uStack_144 = *(undefined8 *)(param_1 + 0x3c);
      uStack_134 = *(undefined4 *)(param_1 + 0x4c);
      puVar15 = &uStack_168;
      uStack_168 = uVar1;
      uStack_164 = uVar7;
      iStack_15c = iVar23;
      iStack_158 = uVar3;
      uStack_154 = uVar8;
      iStack_150 = iVar21;
      uStack_14c = uVar9;
      _mktime(puVar15);
      FUN_107f52a88(param_1,puVar15);
      uStack_160 = 0x17;
      uStack_148 = 0xffffffff;
      uStack_13c = uStack_128;
      uStack_144 = uStack_130;
      uStack_134 = uStack_120;
      puVar15 = &uStack_168;
      uStack_168 = uVar4;
      uStack_164 = uVar10;
      iStack_15c = iVar18;
      iStack_158 = iVar20;
      uStack_154 = uVar11;
      iStack_150 = uVar6;
      uStack_14c = uVar12;
      _mktime(puVar15);
      FUN_107f5297c(param_1,puVar15);
      iVar17 = 3;
    }
  }
  else {
    if (iVar17 == 5) {
      iStack_15c = iVar23 - iVar21;
      iVar21 = iStack_15c + 6;
      iStack_150 = 0;
      uStack_148 = 0xffffffff;
      uStack_13c = *(undefined8 *)(param_1 + 0x44);
      uStack_144 = *(undefined8 *)(param_1 + 0x3c);
      uStack_134 = *(undefined4 *)(param_1 + 0x4c);
      puVar15 = &uStack_168;
      uStack_168 = uVar1;
      uStack_164 = uVar7;
      uStack_160 = uVar2;
      iStack_158 = uVar3;
      uStack_154 = uVar8;
      uStack_14c = uVar9;
      _mktime(puVar15);
      FUN_107f52a88(param_1,puVar15);
      iStack_150 = 6;
      iStack_15c = iVar21;
    }
    else {
      if (iVar17 != 6) {
        if (iVar17 != 7) goto LAB_107f52718;
        iStack_158 = 0;
        uStack_148 = 0xffffffff;
        uStack_13c = *(undefined8 *)(param_1 + 0x44);
        uStack_144 = *(undefined8 *)(param_1 + 0x3c);
        uStack_134 = *(undefined4 *)(param_1 + 0x4c);
        puVar15 = &uStack_168;
        uStack_168 = uVar1;
        uStack_164 = uVar7;
        uStack_160 = uVar2;
        iStack_15c = iVar23;
        uStack_154 = uVar8;
        iStack_150 = iVar21;
        uStack_14c = uVar9;
        _mktime(puVar15);
        FUN_107f52a88(param_1,puVar15);
        iStack_158 = 0xb;
        uStack_148 = 0xffffffff;
        uStack_13c = uStack_128;
        uStack_144 = uStack_130;
        uStack_134 = uStack_120;
        puVar15 = &uStack_168;
        uStack_168 = uVar4;
        uStack_164 = uVar10;
        uStack_160 = uVar5;
        iStack_15c = iVar18;
        uStack_154 = uVar11;
        iStack_150 = uVar6;
        uStack_14c = uVar12;
        _mktime(puVar15);
        FUN_107f5297c(param_1,puVar15);
        iVar17 = 6;
        goto LAB_107f52714;
      }
      iVar23 = *(int *)(&UNK_10dee8718 + (long)iVar20 * 4);
      iStack_15c = 1;
      uStack_148 = 0xffffffff;
      uStack_13c = *(undefined8 *)(param_1 + 0x44);
      uStack_144 = *(undefined8 *)(param_1 + 0x3c);
      uStack_134 = *(undefined4 *)(param_1 + 0x4c);
      puVar15 = &uStack_168;
      uStack_168 = uVar1;
      uStack_164 = uVar7;
      uStack_160 = uVar2;
      iStack_158 = uVar3;
      uStack_154 = uVar8;
      iStack_150 = iVar21;
      uStack_14c = uVar9;
      _mktime(puVar15);
      FUN_107f52a88(param_1,puVar15);
      iStack_15c = iVar23;
      iStack_150 = uVar6;
    }
    uStack_148 = 0xffffffff;
    uStack_13c = uStack_128;
    uStack_144 = uStack_130;
    uStack_134 = uStack_120;
    puVar15 = &uStack_168;
    uStack_168 = uVar4;
    uStack_164 = uVar10;
    uStack_160 = uVar5;
    iStack_158 = iVar20;
    uStack_154 = uVar11;
    uStack_14c = uVar12;
    _mktime(puVar15);
    FUN_107f5297c(param_1,puVar15);
    iVar17 = 4;
  }
LAB_107f52714:
  FUN_107f52384();
LAB_107f52718:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  puVar15 = &uStack_1d0;
  puVar16 = &uStack_1d0;
  pcStack_178 = FUN_107f52754;
  uStack_1a4 = *(undefined8 *)(lVar14 + 0x44);
  uStack_1ac = *(undefined8 *)(lVar14 + 0x3c);
  uStack_19c = *(undefined4 *)(lVar14 + 0x4c);
  iStack_1c0 = *(int *)(&UNK_10dee86e0 + (long)iVar17 * 4) + -1;
  uStack_1c8 = 0;
  uStack_1c4 = 1;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1bc = CONCAT44(0xffffffff,*(undefined4 *)(lVar14 + 0x2c));
  uStack_1b4 = CONCAT44(0xffffffff,*(undefined4 *)(lVar14 + 0x34));
  uStack_190 = (ulong)uVar12;
  lStack_188 = param_1;
  ppuStack_180 = &puStack_c0;
  _mktime(&uStack_1d0);
  FUN_107f52a88(lVar14,puVar15);
  uStack_1b4 = *(undefined8 *)(lVar14 + 0x34);
  uStack_1bc = *(undefined8 *)(lVar14 + 0x2c);
  uStack_1a4 = *(undefined8 *)(lVar14 + 0x44);
  uStack_1ac = *(undefined8 *)(lVar14 + 0x3c);
  uStack_19c = *(undefined4 *)(lVar14 + 0x4c);
  uStack_1c4 = *(undefined4 *)(lVar14 + 0x24);
  iStack_1c0 = *(int *)(lVar14 + 0x28) + 3;
  uStack_1d0 = 0xffffffff;
  uStack_1cc = (undefined4)*(undefined8 *)(lVar14 + 0x1c);
  uStack_1c8 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x1c) >> 0x20);
  _mktime(&uStack_1d0);
  FUN_107f5297c(lVar14,puVar16);
  return;
}



/* Entry: 107f52384; end: 107f52753;  */

void FUN_107f52384(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  ulong uStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar9 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar10 = *(int *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar11 = *(undefined4 *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0x30);
  uVar12 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = *(undefined4 *)(param_1 + 0x50);
  uVar13 = *(undefined4 *)(param_1 + 0x54);
  uVar6 = *(undefined4 *)(param_1 + 0x58);
  iVar14 = *(int *)(param_1 + 0x5c);
  iVar7 = *(int *)(param_1 + 0x60);
  uVar15 = *(undefined4 *)(param_1 + 100);
  uVar8 = *(undefined4 *)(param_1 + 0x68);
  uVar16 = *(uint *)(param_1 + 0x6c);
  uStack_78 = *(undefined8 *)(param_1 + 0x7c);
  uStack_80 = *(undefined8 *)(param_1 + 0x74);
  uStack_70 = *(undefined4 *)(param_1 + 0x84);
  lVar17 = param_1;
  if (param_2 < 5) {
    if (param_2 == 2) {
      uStack_b8 = 0;
      uStack_98 = 0xffffffff;
      uStack_8c = *(undefined8 *)(param_1 + 0x44);
      uStack_94 = *(undefined8 *)(param_1 + 0x3c);
      uStack_84 = *(undefined4 *)(param_1 + 0x4c);
      puVar18 = &uStack_b8;
      uStack_b4 = uVar9;
      uStack_b0 = uVar2;
      iStack_ac = iVar10;
      iStack_a8 = uVar3;
      uStack_a4 = uVar11;
      iStack_a0 = iVar4;
      uStack_9c = uVar12;
      _mktime(puVar18);
      FUN_107f52a88(param_1,puVar18);
      uStack_b8 = 0x3b;
      uStack_98 = 0xffffffff;
      uStack_8c = uStack_78;
      uStack_94 = uStack_80;
      uStack_84 = uStack_70;
      param_2 = (int)&uStack_b8;
      uStack_b4 = uVar13;
      uStack_b0 = uVar6;
      iStack_ac = iVar14;
      iStack_a8 = iVar7;
      uStack_a4 = uVar15;
      iStack_a0 = uVar8;
      uStack_9c = uVar16;
      _mktime();
      FUN_107f5297c();
      goto LAB_107f52718;
    }
    if (param_2 == 3) {
      uStack_b4 = 0;
      uStack_98 = 0xffffffff;
      uStack_8c = *(undefined8 *)(param_1 + 0x44);
      uStack_94 = *(undefined8 *)(param_1 + 0x3c);
      uStack_84 = *(undefined4 *)(param_1 + 0x4c);
      puVar18 = &uStack_b8;
      uStack_b8 = uVar1;
      uStack_b0 = uVar2;
      iStack_ac = iVar10;
      iStack_a8 = uVar3;
      uStack_a4 = uVar11;
      iStack_a0 = iVar4;
      uStack_9c = uVar12;
      _mktime(puVar18);
      FUN_107f52a88(param_1,puVar18);
      uStack_b4 = 0x3b;
      uStack_98 = 0xffffffff;
      uStack_8c = uStack_78;
      uStack_94 = uStack_80;
      uStack_84 = uStack_70;
      puVar18 = &uStack_b8;
      uStack_b8 = uVar5;
      uStack_b0 = uVar6;
      iStack_ac = iVar14;
      iStack_a8 = iVar7;
      uStack_a4 = uVar15;
      iStack_a0 = uVar8;
      uStack_9c = uVar16;
      _mktime(puVar18);
      FUN_107f5297c(param_1,puVar18);
      param_2 = 2;
    }
    else {
      if (param_2 != 4) goto LAB_107f52718;
      uStack_b0 = 0;
      uStack_98 = 0xffffffff;
      uStack_8c = *(undefined8 *)(param_1 + 0x44);
      uStack_94 = *(undefined8 *)(param_1 + 0x3c);
      uStack_84 = *(undefined4 *)(param_1 + 0x4c);
      puVar18 = &uStack_b8;
      uStack_b8 = uVar1;
      uStack_b4 = uVar9;
      iStack_ac = iVar10;
      iStack_a8 = uVar3;
      uStack_a4 = uVar11;
      iStack_a0 = iVar4;
      uStack_9c = uVar12;
      _mktime(puVar18);
      FUN_107f52a88(param_1,puVar18);
      uStack_b0 = 0x17;
      uStack_98 = 0xffffffff;
      uStack_8c = uStack_78;
      uStack_94 = uStack_80;
      uStack_84 = uStack_70;
      puVar18 = &uStack_b8;
      uStack_b8 = uVar5;
      uStack_b4 = uVar13;
      iStack_ac = iVar14;
      iStack_a8 = iVar7;
      uStack_a4 = uVar15;
      iStack_a0 = uVar8;
      uStack_9c = uVar16;
      _mktime(puVar18);
      FUN_107f5297c(param_1,puVar18);
      param_2 = 3;
    }
  }
  else {
    if (param_2 == 5) {
      iStack_ac = iVar10 - iVar4;
      iVar4 = iStack_ac + 6;
      iStack_a0 = 0;
      uStack_98 = 0xffffffff;
      uStack_8c = *(undefined8 *)(param_1 + 0x44);
      uStack_94 = *(undefined8 *)(param_1 + 0x3c);
      uStack_84 = *(undefined4 *)(param_1 + 0x4c);
      puVar18 = &uStack_b8;
      uStack_b8 = uVar1;
      uStack_b4 = uVar9;
      uStack_b0 = uVar2;
      iStack_a8 = uVar3;
      uStack_a4 = uVar11;
      uStack_9c = uVar12;
      _mktime(puVar18);
      FUN_107f52a88(param_1,puVar18);
      iStack_a0 = 6;
      iStack_ac = iVar4;
    }
    else {
      if (param_2 != 6) {
        if (param_2 != 7) goto LAB_107f52718;
        iStack_a8 = 0;
        uStack_98 = 0xffffffff;
        uStack_8c = *(undefined8 *)(param_1 + 0x44);
        uStack_94 = *(undefined8 *)(param_1 + 0x3c);
        uStack_84 = *(undefined4 *)(param_1 + 0x4c);
        puVar18 = &uStack_b8;
        uStack_b8 = uVar1;
        uStack_b4 = uVar9;
        uStack_b0 = uVar2;
        iStack_ac = iVar10;
        uStack_a4 = uVar11;
        iStack_a0 = iVar4;
        uStack_9c = uVar12;
        _mktime(puVar18);
        FUN_107f52a88(param_1,puVar18);
        iStack_a8 = 0xb;
        uStack_98 = 0xffffffff;
        uStack_8c = uStack_78;
        uStack_94 = uStack_80;
        uStack_84 = uStack_70;
        puVar18 = &uStack_b8;
        uStack_b8 = uVar5;
        uStack_b4 = uVar13;
        uStack_b0 = uVar6;
        iStack_ac = iVar14;
        uStack_a4 = uVar15;
        iStack_a0 = uVar8;
        uStack_9c = uVar16;
        _mktime(puVar18);
        FUN_107f5297c(param_1,puVar18);
        param_2 = 6;
        goto LAB_107f52714;
      }
      iVar10 = *(int *)(&UNK_10dee8718 + (long)iVar7 * 4);
      iStack_ac = 1;
      uStack_98 = 0xffffffff;
      uStack_8c = *(undefined8 *)(param_1 + 0x44);
      uStack_94 = *(undefined8 *)(param_1 + 0x3c);
      uStack_84 = *(undefined4 *)(param_1 + 0x4c);
      puVar18 = &uStack_b8;
      uStack_b8 = uVar1;
      uStack_b4 = uVar9;
      uStack_b0 = uVar2;
      iStack_a8 = uVar3;
      uStack_a4 = uVar11;
      iStack_a0 = iVar4;
      uStack_9c = uVar12;
      _mktime(puVar18);
      FUN_107f52a88(param_1,puVar18);
      iStack_ac = iVar10;
      iStack_a0 = uVar8;
    }
    uStack_98 = 0xffffffff;
    uStack_8c = uStack_78;
    uStack_94 = uStack_80;
    uStack_84 = uStack_70;
    puVar18 = &uStack_b8;
    uStack_b8 = uVar5;
    uStack_b4 = uVar13;
    uStack_b0 = uVar6;
    iStack_a8 = iVar7;
    uStack_a4 = uVar15;
    uStack_9c = uVar16;
    _mktime(puVar18);
    FUN_107f5297c(param_1,puVar18);
    param_2 = 4;
  }
LAB_107f52714:
  FUN_107f52384();
LAB_107f52718:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar18 = &uStack_120;
  puVar19 = &uStack_120;
  pcStack_c8 = FUN_107f52754;
  uStack_f4 = *(undefined8 *)(lVar17 + 0x44);
  uStack_fc = *(undefined8 *)(lVar17 + 0x3c);
  uStack_ec = *(undefined4 *)(lVar17 + 0x4c);
  iStack_110 = *(int *)(&UNK_10dee86e0 + (long)param_2 * 4) + -1;
  uStack_118 = 0;
  uStack_114 = 1;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_10c = CONCAT44(0xffffffff,*(undefined4 *)(lVar17 + 0x2c));
  uStack_104 = CONCAT44(0xffffffff,*(undefined4 *)(lVar17 + 0x34));
  uStack_e0 = (ulong)uVar16;
  lStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  _mktime(&uStack_120);
  FUN_107f52a88(lVar17,puVar18);
  uStack_104 = *(undefined8 *)(lVar17 + 0x34);
  uStack_10c = *(undefined8 *)(lVar17 + 0x2c);
  uStack_f4 = *(undefined8 *)(lVar17 + 0x44);
  uStack_fc = *(undefined8 *)(lVar17 + 0x3c);
  uStack_ec = *(undefined4 *)(lVar17 + 0x4c);
  uStack_114 = *(undefined4 *)(lVar17 + 0x24);
  iStack_110 = *(int *)(lVar17 + 0x28) + 3;
  uStack_120 = 0xffffffff;
  uStack_11c = (undefined4)*(undefined8 *)(lVar17 + 0x1c);
  uStack_118 = (undefined4)((ulong)*(undefined8 *)(lVar17 + 0x1c) >> 0x20);
  _mktime(&uStack_120);
  FUN_107f5297c(lVar17,puVar19);
  return;
}



/* Entry: 107f52754; end: 107f52813;  */

void FUN_107f52754(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  puVar1 = &uStack_60;
  puVar2 = &uStack_60;
  uStack_34 = *(undefined8 *)(param_1 + 0x44);
  uStack_3c = *(undefined8 *)(param_1 + 0x3c);
  uStack_2c = *(undefined4 *)(param_1 + 0x4c);
  iStack_50 = *(int *)(&UNK_10dee86e0 + (long)param_2 * 4) + -1;
  uStack_58 = 0;
  uStack_54 = 1;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_4c = CONCAT44(0xffffffff,*(undefined4 *)(param_1 + 0x2c));
  uStack_44 = CONCAT44(0xffffffff,*(undefined4 *)(param_1 + 0x34));
  _mktime(&uStack_60);
  FUN_107f52a88(param_1,puVar1);
  uStack_44 = *(undefined8 *)(param_1 + 0x34);
  uStack_4c = *(undefined8 *)(param_1 + 0x2c);
  uStack_34 = *(undefined8 *)(param_1 + 0x44);
  uStack_3c = *(undefined8 *)(param_1 + 0x3c);
  uStack_2c = *(undefined4 *)(param_1 + 0x4c);
  uStack_54 = *(undefined4 *)(param_1 + 0x24);
  iStack_50 = *(int *)(param_1 + 0x28) + 3;
  uStack_60 = 0xffffffff;
  uStack_5c = (undefined4)*(undefined8 *)(param_1 + 0x1c);
  uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  _mktime(&uStack_60);
  FUN_107f5297c(param_1,puVar2);
  return;
}



/* Entry: 107f52814; end: 107f528ef;  */

void FUN_107f52814(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  
  puVar3 = &uStack_b0;
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uStack_44 = *(undefined4 *)(param_1 + 0x4c);
  uStack_70 = *(undefined4 *)(param_1 + 0x20);
  uStack_a8 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_4c = *(undefined8 *)(param_1 + 0x44);
  uStack_54 = *(undefined8 *)(param_1 + 0x3c);
  iVar4 = -8;
  if (param_2 <= *(int *)(param_1 + 0x30)) {
    iVar4 = -1;
  }
  iVar4 = ((*(int *)(param_1 + 0x24) + param_2) - *(int *)(param_1 + 0x30)) + iVar4;
  uStack_b0 = *(undefined8 *)(param_1 + 0x18);
  uStack_84 = *(undefined8 *)(param_1 + 0x44);
  uStack_8c = *(undefined8 *)(param_1 + 0x3c);
  uStack_7c = *(undefined4 *)(param_1 + 0x4c);
  uStack_60 = 0xffffffff;
  uStack_58 = 0xffffffff;
  puVar2 = &uStack_78;
  iStack_6c = iVar4;
  uStack_68 = uVar5;
  uStack_5c = uVar1;
  _mktime(puVar2);
  FUN_107f52a88(param_1,puVar2);
  uStack_98 = 0xffffffff;
  uStack_90 = 0xffffffff;
  iStack_a4 = iVar4;
  uStack_a0 = uVar5;
  uStack_94 = uVar1;
  _mktime(&uStack_b0);
  FUN_107f5297c(param_1,puVar3);
  return;
}



/* Entry: 107f528f0; end: 107f5297b;  */

void FUN_107f528f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_3c = *(undefined4 *)(param_1 + 0x34);
  uStack_2c = *(undefined8 *)(param_1 + 0x44);
  uStack_34 = *(undefined8 *)(param_1 + 0x3c);
  uStack_24 = *(undefined4 *)(param_1 + 0x4c);
  iStack_4c = (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x30)) + 6;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_40 = 6;
  uStack_38 = 0xffffffff;
  puVar1 = &uStack_58;
  _mktime(puVar1);
  FUN_107f52a88(param_1,puVar1);
  FUN_107f5297c(param_1,(long)puVar1 + 0x2a2ff);
  return;
}



/* Entry: 107f5297c; end: 107f52a4b;  */

void FUN_107f5297c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar2 = &uStack_38;
  uStack_38 = param_2;
  _localtime_r(puVar2,param_1 + 0x50);
  if (puVar2 != (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x00010002b838(auStack_50,&UNK_10f4667c6);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (puVar2,auStack_50);
  *puVar2 = &PTR_FUN_110a14458;
  ___cxa_throw(puVar2,&PTR_DAT_110a14418,FUN_107f51e10);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107f52a14);
  (*pcVar1)();
}



/* Entry: 107f52a4c; end: 107f52a4f;  */

void FUN_107f52a4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 107f52a50; end: 107f52a87;  */

void FUN_107f52a50(long param_1)

{
  long lVar1;
  long lStack_18;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  if (0 < lVar1) {
    return;
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  lStack_18 = lVar1;
  __ZNSt3__16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILl1ELl1000000EEEEEEE
            (&lStack_18);
  return;
}



/* Entry: 107f52a88; end: 107f52b57;  */

void FUN_107f52a88(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar2 = &uStack_38;
  uStack_38 = param_2;
  _localtime_r(puVar2,param_1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x00010002b838(auStack_50,&UNK_10f4667c6);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (puVar2,auStack_50);
  *puVar2 = &PTR_FUN_110a14458;
  ___cxa_throw(puVar2,&PTR_DAT_110a14418,FUN_107f51e10);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107f52b20);
  (*pcVar1)();
}



/* Entry: 107f52b58; end: 107f52bb3;  */

void FUN_107f52b58(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 107f52bb4; end: 107f52bdb;  */

void FUN_107f52bb4(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107f52bdc; end: 107f52c47;  */

undefined8 * FUN_107f52bdc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_107f54d1c(param_1,param_2,0);
  *puVar1 = &PTR_FUN_110a144a8;
  puVar1[0x40] = 0;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0x100000001;
  puVar1[2] = 0;
  puVar1[3] = 0x100000001;
  param_1[0x41] = puVar1;
  return param_1;
}



/* Entry: 107f52c48; end: 107f52c4b;  */

long * FUN_107f52c48(long *param_1)

{
  undefined8 uVar1;
  
  *param_1 = (long)&PTR_FUN_110a14548;
  if (param_1[0x38] != 0) {
    __ZdaPv();
  }
  _free(param_1[5]);
  if (param_1[0x35] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1[0x35] + param_1[0x33] * 8);
  }
  (**(code **)(*param_1 + 0x28))(param_1,uVar1);
  _free(param_1[0x35]);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(param_1 + 0x1b);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev(param_1 + 6);
  return param_1;
}



/* Entry: 107f52c4c; end: 107f52c5f;  */

void FUN_107f52c4c(void)

{
  FUN_107f54e58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107f52c60; end: 107f52de7;  */

void FUN_107f52c60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined4 uVar4;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 ***pppuStack_160;
  undefined8 ***pppuStack_158;
  undefined8 ***pppuStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ***pppuStack_140;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 ****ppppuStack_50;
  undefined8 ****ppppuStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppppuVar3 = &pppuStack_170;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  uStack_d8 = 0;
  uStack_d0 = 0;
  ppppuStack_50 = &ppppuStack_50;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0xffffffff;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  ppppuStack_48 = ppppuStack_50;
  func_0x00010002b838(auStack_f0,param_2);
  puVar1 = &uStack_d8;
  FUN_107f51318(puVar1,auStack_f0);
  if (cStack_d9 < '\0') {
    __ZdlPv(auStack_f0[0]);
  }
  if (((ulong)puVar1 & 1) != 0) {
    if (lStack_40 == 0) {
      pppuStack_100 = (undefined8 ****)0x0;
      pppuStack_118 = (undefined8 ****)0x0;
      pppuStack_120 = (undefined8 ****)0x0;
      pppuStack_108 = (undefined8 ****)0x0;
      pppuStack_110 = (undefined8 ****)0x0;
      pppuStack_128 = (undefined8 ****)0x0;
      pppuStack_130 = (undefined8 ****)0x0;
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)(ppppuStack_48 + 2);
      pppuStack_128 = ppppuStack_48[4];
      pppuStack_130 = ppppuStack_48[3];
      pppuStack_118 = ppppuStack_48[6];
      pppuStack_120 = ppppuStack_48[5];
      pppuStack_108 = ppppuStack_48[8];
      pppuStack_110 = ppppuStack_48[7];
      pppuStack_100 = ppppuStack_48[9];
    }
    *(undefined4 *)param_1 = uVar4;
    ppppuVar2 = &pppuStack_130;
    _mktime();
    param_1[1] = ppppuVar2;
    if (lStack_40 == 0) {
      pppuStack_140 = (undefined8 ****)0x0;
      pppuStack_158 = (undefined8 ****)0x0;
      pppuStack_160 = (undefined8 ****)0x0;
      pppuStack_148 = (undefined8 ****)0x0;
      pppuStack_150 = (undefined8 ****)0x0;
      pppuStack_168 = (undefined8 ****)0x0;
      pppuStack_170 = (undefined8 ****)0x0;
    }
    else {
      pppuStack_168 = ppppuStack_48[0xb];
      pppuStack_170 = ppppuStack_48[10];
      pppuStack_158 = ppppuStack_48[0xd];
      pppuStack_160 = ppppuStack_48[0xc];
      pppuStack_148 = ppppuStack_48[0xf];
      pppuStack_150 = ppppuStack_48[0xe];
      pppuStack_140 = ppppuStack_48[0x10];
    }
    _mktime();
    param_1[2] = ppppuVar3;
  }
  FUN_107f51290(&uStack_d8);
  return;
}



/* Entry: 107f52de8; end: 107f52def;  */

undefined8 FUN_107f52de8(void)

{
  return 1;
}



/* Entry: 107f52df0; end: 107f52e17;  */

undefined8 FUN_107f52df0(long *param_1)

{
  (**(code **)(*param_1 + 0x70))(param_1,&UNK_10f4667d7);
  return 0;
}



/* Entry: 107f52e18; end: 107f54ab7;  */

undefined8 FUN_107f52e18(long *param_1,long param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  long lVar14;
  undefined1 *puVar15;
  uint uVar16;
  char *pcVar17;
  long lVar18;
  undefined1 *puVar19;
  int iVar20;
  int iVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined1 *puVar25;
  long lVar26;
  byte *pbVar27;
  byte *pbVar28;
  undefined8 *puVar29;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  char cStack_61;
  
  if ((int)param_1[0x31] == 0) {
    *(undefined4 *)(param_1 + 0x31) = 1;
    if (*(int *)((long)param_1 + 0x18c) == 0) {
      *(undefined4 *)((long)param_1 + 0x18c) = 1;
    }
    plVar22 = param_1 + 6;
    lVar18 = (long)plVar22 + *(long *)(*plVar22 + -0x18);
    if ((*(byte *)(lVar18 + 0x20) & 5) != 0) {
      *(undefined8 *)(lVar18 + 0x28) =
           *(undefined8 *)
            (PTR___ZNSt3__13cinE_1103466b0 +
            *(long *)(*(long *)PTR___ZNSt3__13cinE_1103466b0 + -0x18) + 0x28);
      __ZNSt3__18ios_base5clearEj(lVar18,0);
    }
    lVar18 = (long)(param_1 + 0x1b) + *(long *)(param_1[0x1b] + -0x18);
    if ((*(byte *)(lVar18 + 0x20) & 5) != 0) {
      *(undefined8 *)(lVar18 + 0x28) =
           *(undefined8 *)
            (PTR___ZNSt3__14coutE_110346740 +
            *(long *)(*(long *)PTR___ZNSt3__14coutE_110346740 + -0x18) + 0x28);
      __ZNSt3__18ios_base5clearEj(lVar18,0);
    }
    if ((param_1[0x35] == 0) || (*(long *)(param_1[0x35] + param_1[0x33] * 8) == 0)) {
      FUN_107f54ab8(param_1);
      plVar23 = param_1;
      (**(code **)(*param_1 + 0x20))(param_1,plVar22,0x4000);
      *(long **)(param_1[0x35] + param_1[0x33] * 8) = plVar23;
    }
    func_0x000107f54b70(param_1);
  }
  plVar22 = param_1 + 0x30;
  param_1[0x40] = param_2;
LAB_107f52f7c:
  pbVar27 = (byte *)param_1[0x30];
  *pbVar27 = *(byte *)(param_1 + 0x2f);
  plVar23 = (long *)(ulong)*(uint *)((long)param_1 + 0x18c);
  pbVar28 = pbVar27;
LAB_107f52f90:
  do {
    uVar8 = (ulong)(byte)(&UNK_10dee883a)[*pbVar28];
    iVar20 = (int)plVar23;
    if (*(short *)(&UNK_10dee9a16 + (long)iVar20 * 2) != 0) {
      *(int *)(param_1 + 0x36) = iVar20;
      param_1[0x37] = (long)pbVar28;
    }
    lVar14 = (long)iVar20;
    lVar18 = (long)*(short *)(&UNK_10dee8de8 + lVar14 * 2) + uVar8;
    if (iVar20 != *(short *)(&UNK_10dee893a + lVar18 * 2)) {
      do {
        lVar26 = lVar14 * 2;
        lVar14 = (long)*(short *)(&UNK_10dee9186 + lVar26);
        if (0x1ca < lVar14) {
          uVar8 = (ulong)(byte)(&UNK_10dee9524)[uVar8];
        }
        lVar18 = (long)*(short *)(&UNK_10dee8de8 + lVar14 * 2) + uVar8;
      } while (*(short *)(&UNK_10dee893a + lVar18 * 2) != *(short *)(&UNK_10dee9186 + lVar26));
    }
    plVar23 = (long *)(long)*(short *)(&UNK_10dee954e + lVar18 * 2);
    pbVar28 = pbVar28 + 1;
  } while (*(short *)(&UNK_10dee8de8 + (long)plVar23 * 2) != 0x22e);
LAB_107f53088:
  sVar1 = *(short *)(&UNK_10dee9a16 + (long)(int)plVar23 * 2);
  if (sVar1 == 0) {
    pbVar28 = (byte *)param_1[0x37];
    sVar1 = *(short *)(&UNK_10dee9a16 + (long)(int)param_1[0x36] * 2);
  }
  param_1[1] = (long)pbVar27;
  iVar20 = (int)pbVar28;
  *(int *)(param_1 + 2) = iVar20 - (int)pbVar27;
  *(byte *)(param_1 + 0x2f) = *pbVar28;
  *pbVar28 = 0;
  param_1[0x30] = (long)pbVar28;
  if ((sVar1 == 0x46) && (uVar8 = (ulong)*(uint *)(param_1 + 2), 0 < (int)*(uint *)(param_1 + 2))) {
    pcVar17 = (char *)param_1[1];
    do {
      if (*pcVar17 == '\n') {
        *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
      }
      uVar8 = uVar8 - 1;
      pcVar17 = pcVar17 + 1;
    } while (uVar8 != 0);
  }
  iVar2 = (int)sVar1;
code_r0x000107f530f4:
  switch(iVar2) {
  case 0:
    goto code_r0x000107f52ffc;
  case 1:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    uVar5 = 0x102;
    break;
  case 2:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    uVar5 = 0x103;
    break;
  case 3:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    uVar5 = 0x104;
    break;
  case 4:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    uVar5 = 0x105;
    break;
  case 5:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    uVar5 = 0x106;
    break;
  case 6:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    uVar5 = 0x107;
    break;
  case 7:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    func_0x00010002b838(&uStack_78,"yesterday");
    puVar29 = &uStack_78;
    func_0x000100152bb8(puVar29,param_1[1]);
    if (cStack_61 < '\0') {
      __ZdlPv(uStack_78);
    }
    if ((int)puVar29 == 0) {
      func_0x00010002b838(&uStack_78,"today");
      puVar29 = &uStack_78;
      func_0x000100152bb8(puVar29,param_1[1]);
      if (cStack_61 < '\0') {
        __ZdlPv(uStack_78);
      }
      puVar12 = (undefined4 *)param_1[0x40];
      *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
      if ((int)puVar29 == 0) {
        uVar13 = 1;
        goto code_r0x000107f54a6c;
      }
      *puVar12 = 0;
    }
    else {
      puVar12 = (undefined4 *)param_1[0x40];
      *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
      uVar13 = 0xffffffff;
code_r0x000107f54a6c:
      *puVar12 = uVar13;
    }
    uVar5 = 0x116;
    break;
  case 8:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    func_0x00010002b838(&uStack_78,&UNK_10f46680b);
    puVar29 = &uStack_78;
    func_0x000100152bb8(puVar29,param_1[1]);
    if (cStack_61 < '\0') {
      __ZdlPv(uStack_78);
    }
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    if ((int)puVar29 == 0) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0xffffffff;
    }
    *puVar12 = uVar13;
    uVar5 = 0x114;
    break;
  case 9:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    func_0x00010002b838(&uStack_78,&UNK_10f466810);
    puVar29 = &uStack_78;
    func_0x000100152bb8(puVar29,param_1[1]);
    if (cStack_61 < '\0') {
      __ZdlPv(uStack_78);
    }
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    if ((int)puVar29 == 0) {
      uVar13 = 0xffffffff;
    }
    else {
      uVar13 = 1;
    }
    *puVar12 = uVar13;
    uVar5 = 0x115;
    break;
  case 10:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    uVar5 = 0x10a;
    break;
  case 0xb:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    uVar5 = 0x10b;
    break;
  case 0xc:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    uVar5 = 0x108;
    break;
  case 0xd:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    uVar5 = 0x109;
    break;
  case 0xe:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 1;
    goto code_r0x000107f5483c;
  case 0xf:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 2;
    goto code_r0x000107f5483c;
  case 0x10:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 3;
    goto code_r0x000107f5483c;
  case 0x11:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 4;
    goto code_r0x000107f5483c;
  case 0x12:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 5;
    goto code_r0x000107f5483c;
  case 0x13:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 6;
    goto code_r0x000107f5483c;
  case 0x14:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 7;
code_r0x000107f5483c:
    *puVar12 = uVar13;
    uVar5 = 0x112;
    break;
  case 0x15:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 1;
    goto code_r0x000107f547a4;
  case 0x16:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 2;
    goto code_r0x000107f547a4;
  case 0x17:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 3;
    goto code_r0x000107f547a4;
  case 0x18:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 4;
    goto code_r0x000107f547a4;
  case 0x19:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 5;
    goto code_r0x000107f547a4;
  case 0x1a:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 6;
    goto code_r0x000107f547a4;
  case 0x1b:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 7;
code_r0x000107f547a4:
    *puVar12 = uVar13;
    uVar5 = 0x113;
    break;
  case 0x1c:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar29 = (undefined8 *)param_1[0x40];
    func_0x00010002b838(&uStack_78,&UNK_10f466816);
    puVar29[3] = &PTR_DAT_1108a6308;
    if (cStack_61 < '\0') {
      func_0x000100033dac(puVar29,uStack_78,uStack_70);
      goto code_r0x000107f54a50;
    }
code_r0x000107f5462c:
    puVar29[2] = CONCAT17(cStack_61,uStack_68);
    puVar29[1] = uStack_70;
    *puVar29 = uStack_78;
    goto code_r0x000107f54a60;
  case 0x1d:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar29 = (undefined8 *)param_1[0x40];
    func_0x00010002b838(&uStack_78,&UNK_10f46681c);
    puVar29[3] = &PTR_DAT_1108a6308;
    if (-1 < cStack_61) goto code_r0x000107f5462c;
    func_0x000100033dac(puVar29,uStack_78,uStack_70);
    goto code_r0x000107f54a50;
  case 0x1e:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar29 = (undefined8 *)param_1[0x40];
    func_0x00010002b838(&uStack_78,param_1[1]);
    puVar29[3] = &PTR_DAT_1108a6308;
    if (-1 < cStack_61) {
      puVar29[2] = CONCAT17(cStack_61,uStack_68);
      puVar29[1] = uStack_70;
      *puVar29 = uStack_78;
      goto code_r0x000107f54a60;
    }
    func_0x000100033dac(puVar29,uStack_78,uStack_70);
code_r0x000107f54a50:
    if (cStack_61 < '\0') {
      __ZdlPv(uStack_78);
    }
code_r0x000107f54a60:
    uVar5 = 0x117;
    break;
  case 0x1f:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 1;
    goto code_r0x000107f5496c;
  case 0x20:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 2;
    goto code_r0x000107f5496c;
  case 0x21:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 3;
    goto code_r0x000107f5496c;
  case 0x22:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 4;
    goto code_r0x000107f5496c;
  case 0x23:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 5;
    goto code_r0x000107f5496c;
  case 0x24:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 6;
    goto code_r0x000107f5496c;
  case 0x25:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 7;
    goto code_r0x000107f5496c;
  case 0x26:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 8;
    goto code_r0x000107f5496c;
  case 0x27:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 9;
    goto code_r0x000107f5496c;
  case 0x28:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 10;
    goto code_r0x000107f5496c;
  case 0x29:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 0xb;
    goto code_r0x000107f5496c;
  case 0x2a:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 0xc;
code_r0x000107f5496c:
    *puVar12 = uVar13;
    uVar5 = 0x10c;
    break;
  case 0x2b:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 1;
    goto code_r0x000107f54590;
  case 0x2c:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 2;
    goto code_r0x000107f54590;
  case 0x2d:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 3;
    goto code_r0x000107f54590;
  case 0x2e:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 4;
    goto code_r0x000107f54590;
  case 0x2f:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 5;
    goto code_r0x000107f54590;
  case 0x30:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 6;
    goto code_r0x000107f54590;
  case 0x31:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 7;
code_r0x000107f54590:
    *puVar12 = uVar13;
    uVar5 = 0x10d;
    break;
  case 0x32:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 1;
    goto code_r0x000107f548d4;
  case 0x33:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 2;
    goto code_r0x000107f548d4;
  case 0x34:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 3;
    goto code_r0x000107f548d4;
  case 0x35:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 4;
    goto code_r0x000107f548d4;
  case 0x36:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 5;
    goto code_r0x000107f548d4;
  case 0x37:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 6;
    goto code_r0x000107f548d4;
  case 0x38:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 7;
    goto code_r0x000107f548d4;
  case 0x39:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 8;
    goto code_r0x000107f548d4;
  case 0x3a:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 9;
    goto code_r0x000107f548d4;
  case 0x3b:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 10;
    goto code_r0x000107f548d4;
  case 0x3c:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 0xb;
    goto code_r0x000107f548d4;
  case 0x3d:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 0xc;
code_r0x000107f548d4:
    *puVar12 = uVar13;
code_r0x000107f548d8:
    uVar5 = 0x10e;
    break;
  case 0x3e:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    uVar13 = (undefined4)param_1[1];
    _atoi();
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    *puVar12 = uVar13;
    goto code_r0x000107f548d8;
  case 0x3f:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    uVar13 = (undefined4)param_1[1];
    _atoi();
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    *puVar12 = uVar13;
    uVar5 = 0x10f;
    break;
  case 0x40:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && (long)iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    *(undefined1 *)(param_1[1] + (long)iVar2 + -2) = 0;
    puVar12 = (undefined4 *)param_1[0x40];
    uVar13 = (undefined4)param_1[1];
    _atoi();
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    *puVar12 = uVar13;
    uVar5 = 0x111;
    break;
  case 0x41:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 1;
    goto code_r0x000107f549bc;
  case 0x42:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 2;
    goto code_r0x000107f549bc;
  case 0x43:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 3;
    goto code_r0x000107f549bc;
  case 0x44:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    puVar12 = (undefined4 *)param_1[0x40];
    *(undefined **)(puVar12 + 6) = PTR___ZTIi_110346aa8;
    uVar13 = 4;
code_r0x000107f549bc:
    *puVar12 = uVar13;
    uVar5 = 0x110;
    break;
  case 0x45:
  case 0x46:
  case 0x47:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    goto LAB_107f52f7c;
  case 0x48:
    puVar29 = (undefined8 *)param_1[0x41];
    puVar29[1] = puVar29[3];
    *puVar29 = puVar29[2];
    iVar2 = (int)param_1[2];
    uVar16 = *(uint *)(param_1[0x41] + 0x1c);
    iVar20 = uVar16 + iVar2;
    if (uVar16 <= (uint)-iVar2 && iVar2 < 1) {
      iVar20 = 1;
    }
    *(int *)(param_1[0x41] + 0x1c) = iVar20;
    pcVar11 = *(code **)(*param_1 + 0x70);
    plVar23 = (long *)&UNK_10f466822;
    goto LAB_107f535d0;
  case 0x49:
    lVar18 = param_1[1];
    *pbVar28 = *(byte *)(param_1 + 0x2f);
    puVar29 = *(undefined8 **)(param_1[0x35] + param_1[0x33] * 8);
    if (*(int *)(puVar29 + 7) == 0) {
      iVar2 = *(int *)((long)puVar29 + 0x1c);
      *(int *)((long)param_1 + 0x17c) = iVar2;
      *puVar29 = *(undefined8 *)((long)param_1 + *(long *)(param_1[6] + -0x18) + 0x58);
      *(undefined4 *)(puVar29 + 7) = 1;
    }
    else {
      iVar2 = *(int *)((long)param_1 + 0x17c);
    }
    puVar10 = (undefined1 *)*plVar22;
    puVar25 = (undefined1 *)puVar29[1];
    plVar24 = param_1;
    plVar23 = param_1;
    plVar9 = plVar22;
    if (puVar25 + iVar2 < puVar10) {
      puVar19 = (undefined1 *)param_1[1];
      puVar15 = puVar19;
      if (puVar25 + iVar2 + 1 < puVar10) {
        (**(code **)(*param_1 + 0x70))(param_1,&UNK_10f466869);
        puVar29 = *(undefined8 **)(param_1[0x35] + param_1[0x33] * 8);
        puVar10 = (undefined1 *)param_1[0x30];
        puVar15 = (undefined1 *)param_1[1];
      }
      if (*(int *)((long)puVar29 + 0x34) == 0) {
        if ((long)puVar10 - (long)puVar15 != 1) {
          lVar14 = puVar29[1];
          goto code_r0x000107f53058;
        }
      }
      else {
        puVar10 = puVar10 + ~(ulong)puVar15;
        uVar16 = (uint)puVar10;
        if (0 < (int)uVar16) {
          do {
            *puVar25 = *puVar19;
            uVar6 = (int)puVar10 - 1;
            puVar10 = (undefined1 *)(ulong)uVar6;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          } while (uVar6 != 0);
          puVar29 = *(undefined8 **)(param_1[0x35] + param_1[0x33] * 8);
        }
        if (*(int *)(puVar29 + 7) == 2) {
          *(undefined4 *)((long)param_1 + 0x17c) = 0;
          *(undefined4 *)((long)puVar29 + 0x1c) = 0;
joined_r0x000107f53378:
          if (uVar16 == 0) {
            (**(code **)(*param_1 + 0x38))(param_1,param_1 + 6);
            iVar2 = *(int *)((long)param_1 + 0x17c);
            puVar29 = *(undefined8 **)(param_1[0x35] + param_1[0x33] * 8);
            iVar21 = 1;
          }
          else {
            iVar2 = 0;
            iVar21 = 2;
            *(undefined4 *)(puVar29 + 7) = 2;
          }
        }
        else {
          iVar2 = *(int *)(puVar29 + 3);
          uVar6 = iVar2 + ~uVar16;
          if ((int)uVar6 < 1) {
            lVar14 = *plVar22;
            do {
              lVar26 = puVar29[1];
              if (*(int *)(puVar29 + 4) == 0) {
                puVar29[1] = 0;
code_r0x000107f532b4:
                (**(code **)(*param_1 + 0x70))(param_1,&UNK_10f4668a1);
                lVar3 = puVar29[1];
              }
              else {
                iVar21 = iVar2 - ((uint)-iVar2 >> 3);
                if (0 < iVar2) {
                  iVar21 = iVar2 << 1;
                }
                *(int *)(puVar29 + 3) = iVar21;
                lVar3 = lVar26;
                _realloc(lVar26,(long)(iVar21 + 2));
                puVar29[1] = lVar3;
                if (lVar3 == 0) goto code_r0x000107f532b4;
              }
              lVar14 = lVar3 + ((int)lVar14 - (int)lVar26);
              param_1[0x30] = lVar14;
              puVar29 = *(undefined8 **)(param_1[0x35] + param_1[0x33] * 8);
              iVar2 = *(int *)(puVar29 + 3);
              uVar6 = iVar2 + ~uVar16;
            } while ((int)uVar6 < 1);
          }
          if (0x1fff < uVar6) {
            uVar6 = 0x2000;
          }
          plVar4 = param_1;
          (**(code **)(*param_1 + 0x60))(param_1,puVar29[1] + (long)(int)uVar16,uVar6);
          iVar2 = (int)plVar4;
          *(int *)((long)param_1 + 0x17c) = iVar2;
          if (iVar2 < 0) {
            (**(code **)(*param_1 + 0x70))(param_1,&UNK_10f4668cd);
            iVar2 = *(int *)((long)param_1 + 0x17c);
          }
          puVar29 = *(undefined8 **)(param_1[0x35] + param_1[0x33] * 8);
          *(int *)((long)puVar29 + 0x1c) = iVar2;
          if (iVar2 == 0) goto joined_r0x000107f53378;
          iVar21 = 0;
        }
        iVar7 = iVar2 + uVar16;
        if (*(int *)(puVar29 + 3) < iVar7) {
          iVar7 = iVar7 + (iVar2 >> 1);
          lVar14 = puVar29[1];
          _realloc(lVar14,(long)iVar7);
          puVar29 = *(undefined8 **)(param_1[0x35] + param_1[0x33] * 8);
          puVar29[1] = lVar14;
          if (lVar14 == 0) {
            (**(code **)(*param_1 + 0x70))(param_1,&UNK_10f4668ea);
            puVar29 = *(undefined8 **)(param_1[0x35] + param_1[0x33] * 8);
          }
          *(int *)(puVar29 + 3) = iVar7 + -2;
          iVar7 = *(int *)((long)param_1 + 0x17c) + uVar16;
        }
        *(int *)((long)param_1 + 0x17c) = iVar7;
        *(undefined1 *)(puVar29[1] + (long)iVar7) = 0;
        *(undefined1 *)
         (*(long *)(*(long *)(param_1[0x35] + param_1[0x33] * 8) + 8) +
          (long)*(int *)((long)param_1 + 0x17c) + 1) = 0;
        lVar14 = *(long *)(*(long *)(param_1[0x35] + param_1[0x33] * 8) + 8);
        param_1[1] = lVar14;
        if (iVar21 != 1) {
          if (iVar21 == 0) {
            param_1[0x30] = lVar14 + (int)(~(uint)lVar18 + iVar20);
            FUN_107f54bd4();
            pbVar28 = (byte *)param_1[0x30];
            pbVar27 = (byte *)param_1[1];
            goto LAB_107f52f90;
          }
code_r0x000107f53058:
          param_1[0x30] = lVar14 + *(int *)((long)param_1 + 0x17c);
          FUN_107f54bd4();
          pbVar27 = (byte *)param_1[1];
          goto code_r0x000107f53084;
        }
      }
      *(undefined4 *)(param_1 + 0x32) = 0;
      (**(code **)(*param_1 + 0x58))();
      if ((int)plVar23 != 0) goto code_r0x000107f53480;
      if ((int)param_1[0x32] == 0) {
        pcVar11 = *(code **)(*param_1 + 0x38);
        plVar23 = param_1 + 6;
        goto LAB_107f535d0;
      }
      goto LAB_107f52f7c;
    }
    param_1[0x30] = param_1[1] + (long)(int)(~(uint)lVar18 + iVar20);
    FUN_107f54bd4();
    func_0x000107f54c98(param_1,plVar24);
    pbVar27 = (byte *)param_1[1];
    if ((int)plVar23 == 0) goto code_r0x000107f53084;
    pbVar28 = (byte *)(*plVar22 + 1);
    *plVar22 = (long)pbVar28;
    goto LAB_107f52f90;
  case 0x4a:
    uVar5 = 0;
    break;
  default:
    pcVar11 = *(code **)(*param_1 + 0x70);
    plVar23 = (long *)&UNK_10f466836;
LAB_107f535d0:
    (*pcVar11)(param_1,plVar23);
    goto LAB_107f52f7c;
  }
  return uVar5;
code_r0x000107f53480:
  param_1[0x30] = param_1[1];
  iVar2 = (*(int *)((long)param_1 + 0x18c) + -1) / 2 + 0x4a;
  goto code_r0x000107f530f4;
code_r0x000107f52ffc:
  *pbVar28 = *(byte *)(param_1 + 0x2f);
  plVar24 = (long *)(ulong)*(uint *)(param_1 + 0x36);
  plVar9 = param_1 + 0x37;
code_r0x000107f53084:
  pbVar28 = (byte *)*plVar9;
  plVar23 = plVar24;
  goto LAB_107f53088;
}



/* Entry: 107f54ab8; end: 107f54bd3;  */

void FUN_107f54ab8(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = param_1[0x35];
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)0x8;
    _malloc();
    param_1[0x35] = (long)puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      (**(code **)(*param_1 + 0x70))(param_1,&UNK_10f466944);
      puVar3 = (undefined8 *)param_1[0x35];
    }
    *puVar3 = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 1;
  }
  else if (param_1[0x34] - 1U <= (ulong)param_1[0x33]) {
    lVar1 = param_1[0x34] + 8;
    _realloc(lVar2,lVar1 * 8);
    param_1[0x35] = lVar2;
    if (lVar2 == 0) {
      (**(code **)(*param_1 + 0x70))(param_1,&UNK_10f466944);
      lVar2 = param_1[0x35];
    }
    puVar3 = (undefined8 *)(lVar2 + param_1[0x34] * 8);
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    param_1[0x34] = lVar1;
  }
  return;
}



/* Entry: 107f54bd4; end: 107f54d1b;  */

ulong FUN_107f54bd4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x18c);
  pbVar7 = *(byte **)(param_1 + 8);
  if (pbVar7 < *(byte **)(param_1 + 0x180)) {
    do {
      if ((ulong)*pbVar7 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = (ulong)(byte)(&UNK_10dee883a)[*pbVar7];
      }
      iVar5 = (int)uVar6;
      if (*(short *)(&UNK_10dee9a16 + (long)iVar5 * 2) != 0) {
        *(int *)(param_1 + 0x1b0) = iVar5;
        *(byte **)(param_1 + 0x1b8) = pbVar7;
      }
      lVar3 = (long)iVar5;
      lVar4 = (long)*(short *)(&UNK_10dee8de8 + lVar3 * 2) + uVar2;
      if (iVar5 != *(short *)(&UNK_10dee893a + lVar4 * 2)) {
        do {
          lVar1 = lVar3 * 2;
          lVar3 = (long)*(short *)(&UNK_10dee9186 + lVar1);
          if (0x1ca < lVar3) {
            uVar2 = (ulong)(byte)(&UNK_10dee9524)[uVar2];
          }
          lVar4 = (long)*(short *)(&UNK_10dee8de8 + lVar3 * 2) + uVar2;
        } while (*(short *)(&UNK_10dee893a + lVar4 * 2) != *(short *)(&UNK_10dee9186 + lVar1));
      }
      uVar6 = (ulong)*(short *)(&UNK_10dee954e + lVar4 * 2);
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 != *(byte **)(param_1 + 0x180));
  }
  return uVar6;
}



/* Entry: 107f54d1c; end: 107f54e57;  */

undefined8 * FUN_107f54d1c(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110a14548;
  puVar2 = PTR___ZTVNSt3__113basic_istreamIcNS_11char_traitsIcEEEE_110346b00;
  plVar1 = (long *)PTR___ZNSt3__13cinE_1103466b0;
  if (param_2 != (long *)0x0) {
    plVar1 = param_2;
  }
  lVar4 = *(long *)(*plVar1 + -0x18);
  param_1[6] = PTR___ZTVNSt3__113basic_istreamIcNS_11char_traitsIcEEEE_110346b00 + 0x18;
  uVar3 = *(undefined8 *)((long)plVar1 + lVar4 + 0x28);
  param_1[8] = puVar2 + 0x40;
  param_1[0xe] = 0;
  param_1[7] = 0;
  __ZNSt3__18ios_base4initEPv(param_1 + 8,uVar3);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  puVar2 = PTR___ZTVNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE_110346b08;
  plVar1 = (long *)PTR___ZNSt3__14coutE_110346740;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3;
  }
  uVar3 = *(undefined8 *)((long)plVar1 + *(long *)(*plVar1 + -0x18) + 0x28);
  param_1[0x1c] = PTR___ZTVNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE_110346b08 + 0x40;
  param_1[0x22] = 0;
  param_1[0x1b] = puVar2 + 0x18;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x1c,uVar3);
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 1;
  param_1[5] = 0;
  param_1[0x38] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  return param_1;
}



/* Entry: 107f54e58; end: 107f54edb;  */

long * FUN_107f54e58(long *param_1)

{
  undefined8 uVar1;
  
  *param_1 = (long)&PTR_FUN_110a14548;
  if (param_1[0x38] != 0) {
    __ZdaPv();
  }
  _free(param_1[5]);
  if (param_1[0x35] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1[0x35] + param_1[0x33] * 8);
  }
  (**(code **)(*param_1 + 0x28))(param_1,uVar1);
  _free(param_1[0x35]);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(param_1 + 0x1b);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev(param_1 + 6);
  return param_1;
}



/* Entry: 107f54edc; end: 107f54edf;  */

long * FUN_107f54edc(long *param_1)

{
  undefined8 uVar1;
  
  *param_1 = (long)&PTR_FUN_110a14548;
  if (param_1[0x38] != 0) {
    __ZdaPv();
  }
  _free(param_1[5]);
  if (param_1[0x35] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1[0x35] + param_1[0x33] * 8);
  }
  (**(code **)(*param_1 + 0x28))(param_1,uVar1);
  _free(param_1[0x35]);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(param_1 + 0x1b);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev(param_1 + 6);
  return param_1;
}



/* Entry: 107f54ee0; end: 107f54ef3;  */

void FUN_107f54ee0(void)

{
  FUN_107f54e58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107f54ef4; end: 107f54f97;  */

void FUN_107f54ef4(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (param_1[0x35] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1[0x35] + param_1[0x33] * 8);
  }
  (**(code **)(*param_1 + 0x28))(param_1,uVar3);
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0x4000);
  (**(code **)(*param_1 + 0x10))(param_1,plVar2);
  lVar1 = (long)(param_1 + 0x1b) + *(long *)(param_1[0x1b] + -0x18);
  *(undefined8 *)(lVar1 + 0x28) =
       *(undefined8 *)((long)param_3 + *(long *)(*param_3 + -0x18) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18ios_base5clearEj_1103468e0)(lVar1,0);
  return;
}



/* Entry: 107f54f98; end: 107f54fbb;  */

void FUN_107f54f98(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1 + 6;
  if (param_2 != (long *)0x0) {
    plVar1 = param_2;
  }
  plVar2 = param_1 + 0x1b;
  if (param_3 != (long *)0x0) {
    plVar2 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000107f54fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1,plVar1,plVar2);
  return;
}



/* Entry: 107f54fbc; end: 107f5502f;  */

undefined4 FUN_107f54fbc(long param_1,undefined1 *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x30);
  if ((*(byte *)((long)plVar3 + *(long *)(*plVar3 + -0x18) + 0x20) & 7) == 0) {
    plVar2 = plVar3;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv();
    if ((int)plVar2 != -1) {
      *param_2 = (char)plVar2;
    }
    uVar1 = *(uint *)((long)plVar3 + *(long *)(*plVar3 + -0x18) + 0x20);
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 & 1) != 0) {
        return 0xffffffff;
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 107f55030; end: 107f5503b;  */

void FUN_107f55030(long param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl_110346480)
            (param_1 + 0xd8,param_2,(long)param_3);
  return;
}



/* Entry: 107f5503c; end: 107f550af;  */

void FUN_107f5503c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((param_1[0x35] == 0) ||
     (plVar1 = *(long **)(param_1[0x35] + param_1[0x33] * 8), plVar1 == (long *)0x0)) {
    FUN_107f54ab8(param_1);
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x20))(param_1,param_1 + 6,0x4000);
    *(long **)(param_1[0x35] + param_1[0x33] * 8) = plVar1;
  }
  FUN_107f550b0(param_1,plVar1,param_2);
  puVar2 = *(undefined8 **)(param_1[0x35] + param_1[0x33] * 8);
  *(undefined4 *)((long)param_1 + 0x17c) = *(undefined4 *)((long)puVar2 + 0x1c);
  lVar3 = puVar2[2];
  param_1[0x30] = lVar3;
  param_1[1] = lVar3;
  lVar3 = (long)(param_1 + 6) + *(long *)(param_1[6] + -0x18);
  *(undefined8 *)(lVar3 + 0x28) = *puVar2;
  __ZNSt3__18ios_base5clearEj(lVar3,0);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)param_1[0x30];
  return;
}



/* Entry: 107f550b0; end: 107f5517b;  */

void FUN_107f550b0(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  ___error();
  uVar1 = *puVar2;
  if (param_2 != (undefined8 *)0x0) {
    *(undefined4 *)((long)param_2 + 0x1c) = 0;
    *(undefined1 *)param_2[1] = 0;
    *(undefined1 *)(param_2[1] + 1) = 0;
    param_2[2] = param_2[1];
    *(undefined4 *)(param_2 + 5) = 1;
    *(undefined4 *)(param_2 + 7) = 0;
    if ((*(long *)(param_1 + 0x6a) != 0) &&
       (param_2 == *(undefined8 **)(*(long *)(param_1 + 0x6a) + *(long *)(param_1 + 0x66) * 8))) {
      puVar2 = param_1;
      func_0x000107f54b70();
    }
  }
  *param_2 = *(undefined8 *)((long)param_3 + *(long *)(*param_3 + -0x18) + 0x28);
  *(undefined4 *)((long)param_2 + 0x34) = 1;
  if ((*(long *)(param_1 + 0x6a) == 0) ||
     (param_2 != *(undefined8 **)(*(long *)(param_1 + 0x6a) + *(long *)(param_1 + 0x66) * 8))) {
    *(undefined8 *)((long)param_2 + 0x2c) = 1;
  }
  *(undefined4 *)((long)param_2 + 0x24) = 0;
  ___error();
  *puVar2 = uVar1;
  return;
}



/* Entry: 107f5517c; end: 107f55193;  */

void FUN_107f5517c(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_1 + 6;
  if (param_2 != (long *)0x0) {
    plVar1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000107f55190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,plVar1);
  return;
}



/* Entry: 107f55194; end: 107f5520f;  */

void FUN_107f55194(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_107f54ab8();
  lVar1 = *(long *)(param_1 + 0x1a8);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x198);
    lVar3 = *(long *)(lVar1 + lVar2 * 8);
    if (lVar3 != param_2) {
      if (lVar3 != 0) {
        **(undefined1 **)(param_1 + 0x180) = *(undefined1 *)(param_1 + 0x178);
        lVar1 = *(long *)(param_1 + 0x1a8);
        lVar2 = *(long *)(param_1 + 0x198);
        lVar3 = *(long *)(lVar1 + lVar2 * 8);
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x180);
        *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x17c);
      }
      *(long *)(lVar1 + lVar2 * 8) = param_2;
      func_0x000107f54b70(param_1);
      *(undefined4 *)(param_1 + 400) = 1;
    }
  }
  return;
}



/* Entry: 107f55210; end: 107f552af;  */

long FUN_107f55210(long *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x40;
  _malloc();
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x70))(param_1,&UNK_10f466918);
  }
  *(int *)(lVar1 + 0x18) = param_3;
  lVar2 = (long)(param_3 + 2);
  _malloc();
  *(long *)(lVar1 + 8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 0x70))(param_1,&UNK_10f466918);
  }
  *(undefined4 *)(lVar1 + 0x20) = 1;
  FUN_107f550b0(param_1,lVar1,param_2);
  return lVar1;
}



/* Entry: 107f552b0; end: 107f552bb;  */

void FUN_107f552b0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f552b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 107f552bc; end: 107f5539b;  */

void FUN_107f552bc(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x1a8);
    if ((lVar1 != 0) && (param_2 == *(long *)(lVar1 + *(long *)(param_1 + 0x198) * 8))) {
      *(undefined8 *)(lVar1 + *(long *)(param_1 + 0x198) * 8) = 0;
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      _free(*(undefined8 *)(param_2 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_2);
    return;
  }
  return;
}



/* Entry: 107f5539c; end: 107f56653;  */

/* WARNING: Removing unreachable block (ram,0x000107f55ff8) */
/* WARNING: Removing unreachable block (ram,0x000107f561c0) */
/* WARNING: Removing unreachable block (ram,0x000107f56128) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_107f5539c(long *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  int iStack_234;
  undefined4 auStack_230 [8];
  undefined8 auStack_210 [10];
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  int aiStack_1a0 [2];
  undefined8 auStack_198 [2];
  char cStack_181;
  long alStack_180 [4];
  undefined8 uStack_160;
  uint auStack_158 [2];
  long *plStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  uint auStack_110 [2];
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  uint auStack_c8 [2];
  long *plStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_158[0] = 0xfffffffe;
  uStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0x100000001;
  lStack_120 = 0;
  uStack_118 = 0x100000001;
  lVar13 = 0;
  do {
    *(undefined4 *)((long)auStack_230 + lVar13) = 0xffffffff;
    *(undefined8 *)((long)auStack_210 + lVar13) = 0;
    *(undefined8 *)((long)auStack_210 + lVar13 + 8) = 0;
    *(undefined8 *)((long)auStack_210 + lVar13 + 0x10) = 0x100000001;
    *(undefined8 *)((long)auStack_210 + lVar13 + 0x18) = 0;
    lVar18 = lVar13 + 0x48;
    *(undefined8 *)((long)auStack_210 + lVar13 + 0x20) = 0x100000001;
    lVar13 = lVar18;
  } while (lVar18 != 0xd8);
  if ((int)param_1[1] != 0) {
    plVar7 = (long *)param_1[2];
    func_0x0001003abe34(plVar7,&UNK_10f466975,0xe);
    __ZNKSt3__18ios_base6getlocEv(auStack_c8,(long)plVar7 + *(long *)(*plVar7 + -0x18));
    puVar8 = auStack_c8;
    __ZNKSt3__16locale9use_facetERNS0_2idE(puVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (**(code **)(*(long *)puVar8 + 0x38))();
    __ZNSt3__16localeD1Ev(auStack_c8);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar7,puVar8);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar7);
  }
  plVar17 = param_1 + 3;
  lVar13 = *plVar17;
  lVar18 = param_1[4];
  plVar7 = plStack_150;
  uVar9 = uStack_148;
  lVar15 = lStack_140;
  while (plStack_150 = plVar7, uStack_148 = uVar9, lStack_140 = lVar15, lVar13 != lVar18) {
    lVar18 = lVar18 + -0x48;
    FUN_107f57030(lVar18);
    plVar7 = plStack_150;
    uVar9 = uStack_148;
    lVar15 = lStack_140;
  }
  param_1[4] = lVar13;
  auStack_110[0] = 0;
  ppuStack_f0 = (undefined **)0x0;
  if (auStack_158[0] - 0xd < 0xb) {
    ppuStack_f0 = (undefined **)PTR___ZTIi_110346aa8;
    plStack_150._0_4_ = SUB84(plVar7,0);
    uVar22 = (ulong)uStack_108 >> 0x20;
    uStack_108 = (long *)CONCAT44((int)uVar22,plStack_150._0_4_);
    uStack_138 = 0;
  }
  else if (auStack_158[0] == 0x18) {
    ppuStack_f0 = &PTR_DAT_1108a6308;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    lStack_140 = 0;
    uStack_108 = plVar7;
    uStack_100 = uVar9;
    lStack_f8 = lVar15;
  }
  auStack_158[0] = 0xfffffffe;
  auStack_c8[0] = 0xffffffff;
  ppuStack_a8 = (undefined **)0x0;
  lStack_a0 = 0;
  uStack_98 = 0x100000001;
  lStack_90 = 0;
  uStack_88 = 0x100000001;
  puVar8 = auStack_c8;
  plVar7 = plVar17;
  lStack_e8 = lStack_130;
  uStack_e0 = uStack_128;
  lStack_d8 = lStack_120;
  uStack_d0 = uStack_118;
  FUN_107f57098();
  iStack_234 = 0;
  lVar13 = param_1[4];
  *(undefined4 *)(lVar13 + -0x48) = 0;
  *(undefined8 *)(lVar13 + -0x18) = uStack_e0;
  *(long *)(lVar13 + -0x20) = lStack_e8;
  *(undefined8 *)(lVar13 + -8) = uStack_d0;
  *(long *)(lVar13 + -0x10) = lStack_d8;
  puVar4 = PTR___ZNSt3__15ctypeIcE2idE_110346770;
  while( true ) {
    if ((int)param_1[1] != 0) {
      plVar7 = (long *)param_1[2];
      func_0x0001003abe34(plVar7,&UNK_10f466984,0xf);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      __ZNKSt3__18ios_base6getlocEv(auStack_c8,(long)plVar7 + *(long *)(*plVar7 + -0x18));
      puVar8 = auStack_c8;
      __ZNKSt3__16locale9use_facetERNS0_2idE(puVar8,puVar4);
      (**(code **)(*(long *)puVar8 + 0x38))();
      __ZNSt3__16localeD1Ev(auStack_c8);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar7);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv();
    }
    if (*(int *)(param_1[4] + -0x48) == 2) break;
    cVar3 = (&UNK_10dee9e6c)[*(int *)(param_1[4] + -0x48)];
    if (cVar3 == -0x14) {
LAB_107f55740:
      lVar13 = param_1[4];
      puVar8 = (uint *)(long)*(int *)(lVar13 + -0x48);
      uVar22 = (ulong)*(byte *)((long)puVar8 + 0x10dee9ed2);
      if (*(byte *)((long)puVar8 + 0x10dee9ed2) != 0) goto LAB_107f55758;
      if (iStack_234 == 0) {
        (**(code **)(*param_1 + 0x20))(auStack_c8,param_1,puVar8,auStack_158);
        puVar8 = (uint *)&lStack_130;
        plVar7 = param_1;
        (**(code **)(*param_1 + 0x18))(param_1,puVar8,auStack_c8);
        uStack_1b8 = uStack_128;
        lStack_1c0 = lStack_130;
        uStack_1a8 = uStack_118;
        lStack_1b0 = lStack_120;
      }
      else {
        uStack_1b8 = uStack_128;
        lStack_1c0 = lStack_130;
        uStack_1a8 = uStack_118;
        lStack_1b0 = lStack_120;
        if ((iStack_234 == 3) && (auStack_158[0] != 0xfffffffe)) {
          if (auStack_158[0] != 0) {
            puVar8 = (uint *)&UNK_10f4669c5;
            plVar7 = param_1;
            FUN_107f56aec(param_1,&UNK_10f4669c5,auStack_158);
            if (auStack_158[0] - 0xd < 0xb) {
LAB_107f5596c:
              uStack_138 = 0;
            }
            else if (auStack_158[0] == 0x18) {
              if (lStack_140 < 0) {
                plVar7 = plStack_150;
                __ZdlPv();
              }
              goto LAB_107f5596c;
            }
            auStack_158[0] = 0xfffffffe;
            goto LAB_107f56014;
          }
          plVar17 = (long *)0x1;
          goto LAB_107f56314;
        }
      }
LAB_107f56014:
      auStack_c8[0] = 0xffffffff;
      ppuStack_a8 = (undefined **)0x0;
      lStack_a0 = 0;
      uStack_98 = 0x100000001;
      lStack_90 = 0;
      uStack_88 = 0x100000001;
      while( true ) {
        lVar13 = param_1[4];
        cVar3 = (&UNK_10dee9e6c)[*(int *)(lVar13 + -0x48)];
        if ((((byte)(cVar3 + 1U) < 100) && ((&UNK_10dee9fa3)[cVar3] == '\x01')) &&
           ((byte)(&UNK_10dee9f3f)[cVar3] != 0)) break;
        if (lVar13 - param_1[3] == 0x48) {
          plVar17 = (long *)0x1;
          goto LAB_107f56308;
        }
        uStack_1b8 = *(undefined8 *)(lVar13 + -0x18);
        lStack_1c0 = *(long *)(lVar13 + -0x20);
        uStack_1a8 = *(undefined8 *)(lVar13 + -8);
        lStack_1b0 = *(long *)(lVar13 + -0x10);
        puVar8 = (uint *)&UNK_10f4669d7;
        FUN_107f56bd4(param_1);
        lVar13 = param_1[4];
        plVar7 = (long *)(lVar13 + -0x48);
        FUN_107f57030();
        param_1[4] = lVar13 + -0x48;
        if ((int)param_1[1] != 0) {
          plVar7 = param_1;
          (**(code **)(*param_1 + 0x30))();
        }
      }
      alStack_180[2] = uStack_128;
      alStack_180[1] = lStack_130;
      uStack_160 = uStack_118;
      alStack_180[3] = lStack_120;
      uStack_98 = uStack_1b8;
      lStack_a0 = lStack_1c0;
      uStack_88 = uStack_118;
      lStack_90 = lStack_120;
      puVar8 = auStack_c8;
      plVar7 = param_1;
      auStack_c8[0] = (uint)(byte)(&UNK_10dee9f3f)[cVar3];
      FUN_107f5690c();
      iStack_234 = 3;
    }
    else {
      iVar12 = (int)param_1[1];
      if (auStack_158[0] == 0xfffffffe) {
        if (iVar12 != 0) {
          func_0x0001003abe34(param_1[2],&UNK_10f466994,0x11);
        }
        plVar7 = (long *)param_1[6];
        FUN_107f52e18(plVar7,&plStack_150,&lStack_130);
        if ((int)(uint)plVar7 < 1) {
          auStack_158[0] = 0;
        }
        else if ((uint)plVar7 < 0x118) {
          auStack_158[0] = (uint)(byte)(&UNK_10deea1be)[(ulong)plVar7 & 0xffffffff];
        }
        else {
          auStack_158[0] = 2;
        }
        iVar12 = (int)param_1[1];
      }
      if (iVar12 != 0) {
        func_0x0001003abe34(param_1[2],&UNK_10f4669a6,0xd);
        auStack_c8[0] = CONCAT31(auStack_c8[0]._1_3_,0x20);
        func_0x0001003abe34();
        FUN_107f56748(param_1[2],auStack_158);
        plVar7 = (long *)param_1[2];
        __ZNKSt3__18ios_base6getlocEv(auStack_c8,(long)plVar7 + *(long *)(*plVar7 + -0x18));
        puVar8 = auStack_c8;
        __ZNKSt3__16locale9use_facetERNS0_2idE(puVar8,puVar4);
        (**(code **)(*(long *)puVar8 + 0x38))();
        __ZNSt3__16localeD1Ev(auStack_c8);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar7,puVar8);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv();
      }
      uVar21 = auStack_158[0] + (int)cVar3;
      if ((99 < uVar21) || (auStack_158[0] != (int)(char)(&UNK_10dee9fa2)[uVar21]))
      goto LAB_107f55740;
      if ((byte)(&UNK_10dee9f3e)[uVar21] == 0) {
        uVar22 = 0;
        lVar13 = param_1[4];
LAB_107f55758:
        bVar1 = (&UNK_10deea0ba)[uVar22];
        uVar20 = (uint)bVar1;
        ppuStack_f0 = (undefined **)0x0;
        piVar14 = (int *)(lVar13 + (long)(int)~(uint)bVar1 * 0x48);
        bVar2 = (&UNK_10deea06c)[uVar22];
        uVar21 = *piVar14 - 0x14;
        if ((uVar21 < 100) && (*piVar14 == (int)(char)(&UNK_10dee9fa2)[uVar21])) {
          auStack_110[0] = (uint)(byte)(&UNK_10dee9f3e)[uVar21];
        }
        else {
          auStack_110[0] = (uint)(char)(&UNK_10dee9f1f)[bVar2];
        }
        if (bVar2 - 0xd < 0xb) {
          ppuStack_f0 = (undefined **)PTR___ZTIi_110346aa8;
        }
        else if (bVar2 == 0x18) {
          ppuStack_f0 = &PTR_DAT_1108a6308;
          uStack_100 = 0;
          lStack_f8 = 0;
          uStack_108 = (long *)0x0;
        }
        uVar21 = (uint)bVar1;
        if (uVar21 == 0) {
          uStack_e0 = *(undefined8 *)(piVar14 + 0x10);
          lStack_e8 = *(long *)(piVar14 + 0xe);
          lStack_d8 = lStack_e8;
          uStack_d0 = uStack_e0;
        }
        else {
          lVar18 = lVar13 + ~(ulong)(uVar21 - 1) * 0x48;
          uStack_e0 = *(undefined8 *)(lVar18 + 0x30);
          lStack_e8 = *(long *)(lVar18 + 0x28);
          uStack_d0 = *(undefined8 *)(lVar13 + -8);
          lStack_d8 = *(long *)(lVar13 + -0x10);
        }
        if ((int)param_1[1] != 0) {
          (**(code **)(*param_1 + 0x28))(param_1,uVar22);
        }
        lVar16 = -0x160;
        lVar18 = -0xd0;
        lVar15 = -0x88;
        uVar10 = 8;
        uVar9 = 4;
        lVar13 = -0x40;
        switch((int)uVar22) {
        case 2:
          FUN_107f51720(param_1[7]);
          goto LAB_107f55e30;
        case 3:
          FUN_107f5177c(param_1[7]);
        default:
          goto LAB_107f55e30;
        case 9:
        case 0x1f:
          goto code_r0x000107f55c38;
        case 10:
          goto code_r0x000107f55b3c;
        case 0xb:
          FUN_107f52814(param_1[7],*(undefined4 *)(param_1[4] + -0x40));
          goto code_r0x000107f55c5c;
        case 0xc:
          goto code_r0x000107f55c7c;
        case 0xd:
          FUN_107f528f0(param_1[7],8);
          goto code_r0x000107f55db8;
        case 0xe:
          goto code_r0x000107f55c40;
        case 0xf:
          FUN_107f521d8(param_1[7],*(undefined4 *)(param_1[4] + -0x88),
                        *(undefined4 *)(param_1[4] + -0x40));
          break;
        case 0x10:
          goto code_r0x000107f55d20;
        case 0x11:
          lVar13 = param_1[4];
          FUN_107f521d8(param_1[7],*(int *)(lVar13 + -0xd0) * *(int *)(lVar13 + -0x40),
                        *(undefined4 *)(lVar13 + -0x88));
          lVar13 = -0x88;
          goto code_r0x000107f55d20;
        case 0x12:
        case 0x22:
          goto code_r0x000107f55a80;
        case 0x13:
          FUN_107f521d8(param_1[7],*(undefined4 *)(param_1[4] + -0x88));
          lVar13 = -0x88;
          goto code_r0x000107f55b3c;
        case 0x14:
          FUN_107f52814(param_1[7],*(undefined4 *)(param_1[4] + -0x88));
          lVar13 = -0x40;
          goto code_r0x000107f55c38;
        case 0x15:
          FUN_107f52814(param_1[7],*(undefined4 *)(param_1[4] + -0x40));
          lVar13 = -0x88;
code_r0x000107f55c38:
          uVar10 = *(undefined4 *)(param_1[4] + lVar13);
code_r0x000107f55c40:
          FUN_107f520dc(param_1[7],uVar10);
code_r0x000107f55db8:
          uVar10 = 1;
          goto code_r0x000107f55e28;
        case 0x16:
          FUN_107f520dc(param_1[7],*(undefined4 *)(param_1[4] + -0x88));
          iVar12 = *(int *)(param_1[4] + -0xd0) * *(int *)(param_1[4] + -0x40);
          uVar9 = 4;
          goto code_r0x000107f55fb0;
        case 0x17:
          FUN_107f528f0(param_1[7],8);
          iVar12 = *(int *)(param_1[4] + -0x88);
          goto code_r0x000107f55d80;
        case 0x18:
          FUN_107f521d8(param_1[7],*(undefined4 *)(param_1[4] + -0x88),
                        *(undefined4 *)(param_1[4] + -0x40));
          lVar13 = -0x40;
code_r0x000107f55d20:
          uVar10 = *(undefined4 *)(param_1[4] + lVar13);
code_r0x000107f55e18:
          FUN_107f52384(param_1[7],uVar10);
          break;
        case 0x19:
          FUN_107f52814(param_1[7],*(undefined4 *)(param_1[4] + -0x40));
          uVar9 = 5;
          goto code_r0x000107f55c78;
        case 0x1a:
          FUN_107f520dc(param_1[7],*(undefined4 *)(param_1[4] + -0x40));
          FUN_107f52814(param_1[7],*(undefined4 *)(param_1[4] + -0x88));
          iVar12 = *(int *)(param_1[4] + -0xd0);
          goto code_r0x000107f55d80;
        case 0x1b:
          FUN_107f52814(param_1[7],*(undefined4 *)(param_1[4] + -0x88));
          FUN_107f521d8(param_1[7],*(undefined4 *)(param_1[4] + -0xd0),5);
          FUN_107f51888(param_1[7],param_1[4] + -0x40);
          break;
        case 0x1c:
          FUN_107f52814(param_1[7],*(undefined4 *)(param_1[4] + -0xd0));
          FUN_107f521d8(param_1[7],
                        *(uint *)(param_1[4] + -0x118) &
                        ((int)*(uint *)(param_1[4] + -0x118) >> 0x1f ^ 0xffffffffU),5);
          FUN_107f51888(param_1[7],param_1[4] + -0x40);
          FUN_107f52384(param_1[7],2);
          break;
        case 0x1d:
          FUN_107f520dc(param_1[7],*(undefined4 *)(param_1[4] + -0x40));
          FUN_107f51e14(param_1[7],*(undefined4 *)(param_1[4] + -0xd0),0xffffffff);
          goto code_r0x000107f55dac;
        case 0x1e:
          FUN_107f520dc(param_1[7],*(undefined4 *)(param_1[4] + -0x40));
          FUN_107f51e14(param_1[7],*(undefined4 *)(param_1[4] + -0xd0),0xffffffff);
          goto code_r0x000107f55bdc;
        case 0x20:
          goto code_r0x000107f55d9c;
        case 0x21:
          FUN_107f51888(param_1[7],param_1[4] + -0xd0);
          FUN_107f520dc(param_1[7],*(undefined4 *)(param_1[4] + -0x40));
          goto code_r0x000107f55dac;
        case 0x23:
          FUN_107f51888(param_1[7],param_1[4] + -0xd0);
code_r0x000107f55a80:
          FUN_107f521d8(param_1[7],*(undefined4 *)(param_1[4] + -0x88),4);
          lVar13 = -0x40;
code_r0x000107f55b3c:
          FUN_107f520dc(param_1[7],*(undefined4 *)(param_1[4] + lVar13));
          break;
        case 0x24:
          FUN_107f51888(param_1[7],param_1[4] + -0xd0);
          FUN_107f52814(param_1[7],*(undefined4 *)(param_1[4] + -0x40));
          uVar9 = 4;
code_r0x000107f55c78:
          lVar13 = -0x88;
code_r0x000107f55c7c:
          FUN_107f521d8(param_1[7],*(undefined4 *)(param_1[4] + lVar13),uVar9);
          goto code_r0x000107f55c8c;
        case 0x25:
          FUN_107f51888(param_1[7],param_1[4] + -0x88);
          FUN_107f521d8(param_1[7],*(undefined4 *)(param_1[4] + -0x40),4);
          goto code_r0x000107f55bdc;
        case 0x26:
          goto code_r0x000107f55a48;
        case 0x27:
          lVar15 = -0xd0;
code_r0x000107f55a48:
          FUN_107f521d8(param_1[7],*(undefined4 *)(param_1[4] + lVar15));
          lVar18 = -0x40;
code_r0x000107f55a5c:
          FUN_107f51888(param_1[7],param_1[4] + lVar18);
code_r0x000107f55bdc:
          uVar10 = 2;
          goto code_r0x000107f55e18;
        case 0x28:
          goto code_r0x000107f55d8c;
        case 0x29:
          lVar15 = -0xd0;
code_r0x000107f55d8c:
          FUN_107f52814(param_1[7],*(undefined4 *)(param_1[4] + lVar15));
code_r0x000107f55d9c:
          FUN_107f51888(param_1[7],param_1[4] + -0x40);
code_r0x000107f55dac:
          uVar9 = 2;
code_r0x000107f55db0:
          FUN_107f52384(param_1[7],uVar9);
          goto code_r0x000107f55db8;
        case 0x2a:
          goto code_r0x000107f55a5c;
        case 0x2b:
          iVar12 = *(int *)(param_1[4] + -0xd0) * *(int *)(param_1[4] + -0x40);
          goto code_r0x000107f55fb0;
        case 0x2c:
          FUN_107f528f0(param_1[7],8);
          iVar12 = *(int *)(param_1[4] + -0xd0) * *(int *)(param_1[4] + -0x40);
code_r0x000107f55d80:
          uVar9 = 5;
          goto code_r0x000107f55fb0;
        case 0x30:
        case 0x32:
        case 0x35:
        case 0x36:
          goto code_r0x000107f558f8;
        case 0x31:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
          lVar18 = -0x88;
          lVar16 = -0xd0;
          goto code_r0x000107f558f8;
        case 0x33:
        case 0x34:
        case 0x37:
        case 0x38:
          goto code_r0x000107f55dfc;
        case 0x39:
          FUN_107f51ec0(param_1[7],0xffffffff,0xffffffff,*(undefined4 *)(param_1[4] + -0x40));
          uVar10 = 7;
          goto code_r0x000107f55e18;
        case 0x3a:
          puVar11 = (undefined4 *)(param_1[4] + -0x40);
          uVar10 = 0xffffffff;
          goto code_r0x000107f55ca0;
        case 0x3b:
          uVar10 = 6;
          FUN_107f521d8(param_1[7],*(undefined4 *)(param_1[4] + -0x88),6);
          goto code_r0x000107f55e18;
        case 0x3c:
          puVar11 = (undefined4 *)(param_1[4] + -0x88);
          uVar10 = *(undefined4 *)(param_1[4] + -0x40);
code_r0x000107f55ca0:
          FUN_107f51ec0(param_1[7],*puVar11,uVar10,0xffffffff);
          uVar9 = 6;
          goto code_r0x000107f55db0;
        case 0x3d:
          goto code_r0x000107f55984;
        case 0x3e:
          lVar13 = -0xd0;
          lVar15 = -0x40;
code_r0x000107f55984:
          FUN_107f51ec0(param_1[7],*(undefined4 *)(param_1[4] + lVar15),
                        *(undefined4 *)(param_1[4] + lVar13),0xffffffff);
code_r0x000107f55c5c:
          uVar9 = 4;
          goto code_r0x000107f55db0;
        case 0x3f:
        case 0x40:
          lVar16 = -0x88;
code_r0x000107f558f8:
          lVar13 = param_1[4];
          FUN_107f51ec0(param_1[7],*(undefined4 *)(lVar13 + lVar16),*(undefined4 *)(lVar13 + lVar18)
                        ,*(undefined4 *)(lVar13 + -0x40));
code_r0x000107f55c8c:
          uVar10 = 4;
          goto code_r0x000107f55e18;
        case 0x45:
          lVar13 = -0x88;
          lVar18 = -0x40;
          goto code_r0x000107f55dfc;
        case 0x46:
          lVar18 = -0x88;
code_r0x000107f55dfc:
          FUN_107f51ec0(param_1[7],*(undefined4 *)(param_1[4] + lVar18),0xffffffff,
                        *(undefined4 *)(param_1[4] + lVar13));
          uVar10 = 6;
          goto code_r0x000107f55e18;
        case 0x47:
          FUN_107f52754(param_1[7],*(undefined4 *)(param_1[4] + -0x40),4);
          goto code_r0x000107f55db8;
        case 0x48:
        case 0x49:
          FUN_107f51ec0(param_1[7],0xffffffff,0xffffffff,*(undefined4 *)(param_1[4] + -0x40));
          lVar13 = -0x88;
          goto code_r0x000107f558e0;
        case 0x4a:
        case 0x4b:
          FUN_107f51ec0(param_1[7],0xffffffff,0xffffffff,*(undefined4 *)(param_1[4] + -0x88));
          lVar13 = -0x40;
code_r0x000107f558e0:
          FUN_107f52754(param_1[7],*(undefined4 *)(param_1[4] + lVar13));
          break;
        case 0x4c:
          FUN_107f52754(param_1[7],*(undefined4 *)(param_1[4] + -0x88),4);
          iVar12 = *(int *)(param_1[4] + -0xd0) * *(int *)(param_1[4] + -0x40);
          goto code_r0x000107f55fac;
        case 0x4d:
          FUN_107f52754(param_1[7],*(undefined4 *)(param_1[4] + -0x40),4);
          iVar12 = *(int *)(param_1[4] + -0x88);
code_r0x000107f55fac:
          uVar9 = 7;
code_r0x000107f55fb0:
          FUN_107f521d8(param_1[7],iVar12,uVar9);
        }
        uVar10 = 0;
code_r0x000107f55e28:
        *(undefined4 *)(param_1[7] + 0x10) = uVar10;
LAB_107f55e30:
        if ((int)param_1[1] != 0) {
          func_0x0001003abe34(param_1[2],&UNK_10f4669bd,7);
          auStack_c8[0] = CONCAT31(auStack_c8[0]._1_3_,0x20);
          func_0x0001003abe34();
          func_0x000107f56824(param_1[2],auStack_110);
          plVar7 = (long *)param_1[2];
          __ZNKSt3__18ios_base6getlocEv(auStack_c8,(long)plVar7 + *(long *)(*plVar7 + -0x18));
          puVar8 = auStack_c8;
          __ZNKSt3__16locale9use_facetERNS0_2idE(puVar8,puVar4);
          (**(code **)(*(long *)puVar8 + 0x38))();
          __ZNSt3__16localeD1Ev(auStack_c8);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar7,puVar8);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar7);
        }
        if (uVar21 != 0) {
          lVar13 = param_1[4];
          do {
            lVar13 = lVar13 + -0x48;
            FUN_107f57030(lVar13);
            param_1[4] = lVar13;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        if ((int)param_1[1] != 0) {
          (**(code **)(*param_1 + 0x30))(param_1);
        }
        auStack_c8[0] = 0xffffffff;
        ppuStack_a8 = (undefined **)0x0;
        lStack_a0 = 0;
        uStack_98 = 0x100000001;
        lStack_90 = 0;
        uStack_88 = 0x100000001;
        puVar8 = auStack_c8;
        plVar7 = plVar17;
        FUN_107f57098();
        lVar13 = param_1[4];
        *(uint *)(lVar13 + -0x48) = auStack_110[0];
        if (auStack_110[0] != 0xffffffff) {
          if ((byte)(&UNK_10deea006)[(int)auStack_110[0]] - 0xd < 0xb) {
            *(undefined **)(lVar13 + -0x28) = PTR___ZTIi_110346aa8;
            *(undefined4 *)(lVar13 + -0x40) = (undefined4)uStack_108;
          }
          else if ((byte)(&UNK_10deea006)[(int)auStack_110[0]] == 0x18) {
            *(undefined8 *)(lVar13 + -0x38) = uStack_100;
            *(long **)(lVar13 + -0x40) = uStack_108;
            *(long *)(lVar13 + -0x30) = lStack_f8;
            *(undefined ***)(lVar13 + -0x28) = &PTR_DAT_1108a6308;
          }
        }
        *(undefined8 *)(lVar13 + -0x18) = uStack_e0;
        *(long *)(lVar13 + -0x20) = lStack_e8;
        *(undefined8 *)(lVar13 + -8) = uStack_d0;
        *(long *)(lVar13 + -0x10) = lStack_d8;
      }
      else {
        bVar6 = iStack_234 != 0;
        iVar12 = iStack_234 + -1;
        iStack_234 = 0;
        if (bVar6) {
          iStack_234 = iVar12;
        }
        ppuStack_a8 = (undefined **)0x0;
        uStack_98 = uStack_128;
        lStack_a0 = lStack_130;
        uStack_88 = uStack_118;
        lStack_90 = lStack_120;
        if (auStack_158[0] - 0xd < 0xb) {
          ppuStack_a8 = (undefined **)PTR___ZTIi_110346aa8;
          plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,plStack_150._0_4_);
          uStack_138 = 0;
        }
        else if (auStack_158[0] == 0x18) {
          ppuStack_a8 = &PTR_DAT_1108a6308;
          uStack_b8 = uStack_148;
          plStack_c0 = plStack_150;
          lStack_b0 = lStack_140;
          uStack_148 = 0;
          plStack_150 = (long *)0x0;
          uStack_138 = 0;
          lStack_140 = 0;
        }
        auStack_158[0] = 0xfffffffe;
        puVar8 = auStack_c8;
        plVar7 = param_1;
        auStack_c8[0] = (uint)(byte)(&UNK_10dee9f3e)[uVar21];
        FUN_107f5690c();
      }
    }
  }
  plVar17 = (long *)0x0;
LAB_107f56308:
  if (auStack_158[0] != 0xfffffffe) {
LAB_107f56314:
    puVar8 = (uint *)&UNK_10f4669e6;
    plVar7 = param_1;
    FUN_107f56aec(param_1,&UNK_10f4669e6,auStack_158);
  }
  lVar13 = param_1[3];
  lVar18 = param_1[4] - lVar13;
  if (1 < (ulong)((lVar18 >> 3) * -0x71c71c71c71c71c7)) {
    do {
      puVar8 = (uint *)&UNK_10f466a04;
      FUN_107f56bd4(param_1,&UNK_10f466a04,lVar13 + lVar18 + -0x48);
      plVar19 = (long *)(param_1[4] + -0x48);
      plVar7 = plVar19;
      FUN_107f57030();
      param_1[4] = (long)plVar19;
      lVar13 = param_1[3];
      lVar18 = (long)plVar19 - lVar13;
    } while (1 < (ulong)((lVar18 >> 3) * -0x71c71c71c71c71c7));
  }
  lVar13 = 0;
  do {
    lVar18 = lVar13;
    if (*(int *)((long)aiStack_1a0 + lVar18) != -1) {
      if (10 < (byte)(&UNK_10deea006)[*(int *)((long)aiStack_1a0 + lVar18)] - 0xd) {
        if ((byte)(&UNK_10deea006)[*(int *)((long)aiStack_1a0 + lVar18)] != 0x18)
        goto LAB_107f563cc;
        if ((&cStack_181)[lVar18] < '\0') {
          plVar7 = *(long **)((long)auStack_198 + lVar18);
          __ZdlPv();
        }
      }
      *(undefined8 *)((long)alStack_180 + lVar18) = 0;
    }
LAB_107f563cc:
    iVar12 = (int)puVar8;
    *(undefined4 *)((long)aiStack_1a0 + lVar18) = 0xffffffff;
    lVar13 = lVar18 + -0x48;
  } while (lVar18 + -0x48 != -0xd8);
  if ((auStack_158[0] == 0x18) && (lStack_140 < 0)) {
    plVar7 = plStack_150;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return plVar17;
  }
  ___stack_chk_fail();
  if (iVar12 != 0) {
    FUN_107f56654(auStack_110);
    ___cxa_begin_catch(plVar7);
    if (*(int *)(lVar18 + -0x40) != 0) {
      func_0x0001003abe34(*(undefined8 *)(lVar18 + -0x38),&UNK_10f466a15,0x2e);
      func_0x0001073f079c();
    }
    if (1 < (ulong)((*(long *)(lVar18 + -0x28) - *(long *)(lVar18 + -0x30) >> 3) *
                   -0x71c71c71c71c71c7)) {
      lVar15 = *(long *)(lVar18 + -0x28) + -0x48;
      lVar13 = lVar15;
      do {
        FUN_107f57030(lVar15);
        *(long *)(lVar18 + -0x28) = lVar15;
        lVar16 = lVar13 - *(long *)(lVar18 + -0x30);
        lVar13 = lVar13 + -0x48;
        lVar15 = lVar15 + -0x48;
      } while (1 < (ulong)((lVar16 >> 3) * -0x71c71c71c71c71c7));
    }
    ___cxa_rethrow();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x107f565dc);
    (*pcVar5)();
  }
  __Unwind_Resume(plVar7);
  func_0x000104bd46a0();
  if ((int)*plVar7 != -1) {
    if (10 < (byte)(&UNK_10deea006)[(int)*plVar7] - 0xd) {
      if ((byte)(&UNK_10deea006)[(int)*plVar7] != 0x18) goto LAB_107f5668c;
      if (*(char *)((long)plVar7 + 0x1f) < '\0') {
        __ZdlPv(plVar7[1]);
      }
    }
    plVar7[4] = 0;
  }
LAB_107f5668c:
  *(undefined4 *)plVar7 = 0xffffffff;
  return plVar7;
}



/* Entry: 107f56654; end: 107f566bf;  */

int * FUN_107f56654(int *param_1)

{
  if (*param_1 != -1) {
    if (10 < (byte)(&UNK_10deea006)[*param_1] - 0xd) {
      if ((byte)(&UNK_10deea006)[*param_1] != 0x18) goto LAB_107f5668c;
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 2));
      }
    }
    param_1[8] = 0;
    param_1[9] = 0;
  }
LAB_107f5668c:
  *param_1 = -1;
  return param_1;
}



/* Entry: 107f566c0; end: 107f56747;  */

void FUN_107f566c0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  plVar1 = param_2 + 2;
  (**(code **)(*param_2 + 0x10))(param_2);
  func_0x00010002b838(auStack_38,param_2);
  (**(code **)(*param_1 + 0x18))(param_1,plVar1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 107f56748; end: 107f5690b;  */

/* WARNING: Possible PIC construction at 0x000107f56974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107f56978) */

void FUN_107f56748(long param_1,int *param_2,undefined8 param_3)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  int *unaff_x19;
  long *plVar12;
  long unaff_x20;
  long *unaff_x21;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_40 [14];
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  puVar8 = &stack0xfffffffffffffff0;
  iVar3 = *param_2;
  if (iVar3 != -2) {
    pcVar1 = "token";
    if (0x18 < iVar3) {
      pcVar1 = "nterm";
    }
    lVar7 = param_1;
    func_0x0001003abe34(param_1,pcVar1,5);
    uStack_32 = 0x20;
    func_0x0001003abe34();
    puVar13 = (&PTR_DAT_110a14648)[iVar3];
    puVar6 = puVar13;
    _strlen(puVar13);
    func_0x0001003abe34(lVar7,puVar13,puVar6);
    func_0x0001003abe34();
    FUN_107f57538();
    func_0x0001003abe34();
    uStack_31 = 0x29;
    func_0x0001003abe34(param_1,&uStack_31,1);
    return;
  }
  uVar14 = 0x107f56824;
  _abort();
  puVar4 = auStack_40;
  while( true ) {
    lVar7 = param_1;
    *(undefined8 *)(puVar4 + -0x30) = 0xfffffffffffffffe;
    *(long **)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = unaff_x20;
    *(int **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar8;
    *(undefined8 *)(puVar4 + -8) = uVar14;
    if (*param_2 != -1) {
      bVar2 = (&UNK_10deea006)[*param_2];
      lVar5 = lVar7;
      func_0x0001003abe34();
      puVar4[-0x32] = 0x20;
      func_0x0001003abe34();
      puVar13 = (&PTR_DAT_110a14648)[bVar2];
      puVar6 = puVar13;
      _strlen(puVar13);
      func_0x0001003abe34(lVar5,puVar13,puVar6);
      func_0x0001003abe34();
      FUN_107f57538();
      func_0x0001003abe34();
      puVar4[-0x31] = 0x29;
      func_0x0001003abe34(lVar7,puVar4 + -0x31,1);
      return;
    }
    _abort();
    puVar10 = puVar4 + -0xc0;
    *(undefined8 *)(puVar4 + -0x70) = 0xfffffffffffffffe;
    *(long **)(puVar4 + -0x68) = unaff_x21;
    *(long *)(puVar4 + -0x60) = unaff_x20;
    *(int **)(puVar4 + -0x58) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x48) = FUN_107f5690c;
    puVar8 = puVar4 + -0x50;
    *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (*(int *)(lVar7 + 8) == 0) break;
    unaff_x21 = (long *)(lVar7 + 0x10);
    func_0x0001003abe34(*unaff_x21,&UNK_10f4669b4,8);
    puVar4[-0xc0] = 0x20;
    param_3 = 1;
    func_0x0001003abe34();
    uVar14 = 0x107f56978;
    puVar4 = puVar4 + -0xc0;
    param_1 = *unaff_x21;
    unaff_x19 = param_2;
    unaff_x20 = lVar7;
  }
  *(undefined4 *)(puVar4 + -0xc0) = 0xffffffff;
  *(undefined8 *)(puVar4 + -0xa0) = 0;
  *(undefined8 *)(puVar4 + -0x98) = 0;
  *(undefined8 *)(puVar4 + -0x90) = 0x100000001;
  *(undefined8 *)(puVar4 + -0x88) = 0;
  *(undefined8 *)(puVar4 + -0x80) = 0x100000001;
  lVar5 = lVar7 + 0x18;
  FUN_107f57098();
  lVar11 = *(long *)(lVar7 + 0x20);
  *(int *)(lVar11 + -0x48) = *param_2;
  *param_2 = -1;
  if (*(int *)(lVar11 + -0x48) != -1) {
    if ((byte)(&UNK_10deea006)[*(int *)(lVar11 + -0x48)] - 0xd < 0xb) {
      *(undefined **)(lVar11 + -0x28) = PTR___ZTIi_110346aa8;
      iVar3 = *(int *)(lVar11 + -0x40);
      *(int *)(lVar11 + -0x40) = param_2[2];
      param_2[2] = iVar3;
      param_2[8] = 0;
      param_2[9] = 0;
    }
    else if ((byte)(&UNK_10deea006)[*(int *)(lVar11 + -0x48)] == 0x18) {
      *(undefined8 *)(lVar11 + -0x30) = 0;
      *(undefined ***)(lVar11 + -0x28) = &PTR_DAT_1108a6308;
      *(undefined8 *)(lVar11 + -0x40) = 0;
      *(undefined8 *)(lVar11 + -0x38) = 0;
      uVar15 = *(undefined8 *)(param_2 + 4);
      uVar14 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(lVar11 + -0x30) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(lVar11 + -0x38) = uVar15;
      *(undefined8 *)(lVar11 + -0x40) = uVar14;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
    }
  }
  uVar14 = *(undefined8 *)(param_2 + 10);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  uVar15 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(lVar11 + -0x20) = uVar14;
  *(undefined8 *)(lVar11 + -8) = uVar16;
  *(undefined8 *)(lVar11 + -0x10) = uVar15;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  FUN_107f56654(puVar4 + -0xc0);
  lVar11 = lVar5;
  __Unwind_Resume();
  *(undefined8 *)(puVar4 + -0xf0) = 0xfffffffffffffffe;
  *(undefined8 *)(puVar4 + -0xe8) = 0xffffffff;
  *(long *)(puVar4 + -0xe0) = lVar7;
  *(long *)(puVar4 + -0xd8) = lVar5;
  *(undefined1 **)(puVar4 + -0xd0) = puVar8;
  *(code **)(puVar4 + -200) = FUN_107f56aec;
  if ((puVar10 != (undefined1 *)0x0) && (*(int *)(lVar11 + 8) != 0)) {
    uVar14 = *(undefined8 *)(lVar11 + 0x10);
    puVar8 = puVar10;
    _strlen(puVar10);
    func_0x0001003abe34(uVar14,puVar10,puVar8);
    puVar4[-0xf9] = 0x20;
    func_0x0001003abe34();
    FUN_107f56748(*(undefined8 *)(lVar11 + 0x10),param_3);
    plVar12 = *(long **)(lVar11 + 0x10);
    __ZNKSt3__18ios_base6getlocEv(puVar4 + -0xf8,(long)plVar12 + *(long *)(*plVar12 + -0x18));
    plVar9 = (long *)(puVar4 + -0xf8);
    __ZNKSt3__16locale9use_facetERNS0_2idE(plVar9,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (**(code **)(*plVar9 + 0x38))();
    __ZNSt3__16localeD1Ev(puVar4 + -0xf8);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar12,plVar9);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar12);
  }
  return;
}



/* Entry: 107f5690c; end: 107f56aeb;  */

void FUN_107f5690c(long param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined4 auStack_80 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar2 = (long *)auStack_80;
  puVar5 = auStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 8) != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x10);
    func_0x0001003abe34(*puVar7,&UNK_10f4669b4,8);
    auStack_80[0] = CONCAT31(auStack_80[0]._1_3_,0x20);
    param_3 = 1;
    func_0x0001003abe34();
    func_0x000107f56824(*puVar7,param_2);
    plVar8 = (long *)*puVar7;
    __ZNKSt3__18ios_base6getlocEv(auStack_80,(long)plVar8 + *(long *)(*plVar8 + -0x18));
    __ZNKSt3__16locale9use_facetERNS0_2idE(auStack_80,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (**(code **)(*plVar2 + 0x38))();
    __ZNSt3__16localeD1Ev(auStack_80);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar8,plVar2);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar8);
    unaff_x22 = plVar2;
  }
  auStack_80[0] = 0xffffffff;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0x100000001;
  uStack_48 = 0;
  uStack_40 = 0x100000001;
  lVar3 = param_1 + 0x18;
  FUN_107f57098();
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar6 + -0x48) = *param_2;
  *param_2 = 0xffffffff;
  if (*(int *)(lVar6 + -0x48) != -1) {
    if ((byte)(&UNK_10deea006)[*(int *)(lVar6 + -0x48)] - 0xd < 0xb) {
      *(undefined **)(lVar6 + -0x28) = PTR___ZTIi_110346aa8;
      uVar1 = *(undefined4 *)(lVar6 + -0x40);
      *(undefined4 *)(lVar6 + -0x40) = param_2[2];
      param_2[2] = uVar1;
      *(undefined8 *)(param_2 + 8) = 0;
    }
    else if ((byte)(&UNK_10deea006)[*(int *)(lVar6 + -0x48)] == 0x18) {
      *(undefined8 *)(lVar6 + -0x30) = 0;
      *(undefined ***)(lVar6 + -0x28) = &PTR_DAT_1108a6308;
      *(undefined8 *)(lVar6 + -0x40) = 0;
      *(undefined8 *)(lVar6 + -0x38) = 0;
      uVar10 = *(undefined8 *)(param_2 + 4);
      uVar9 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(lVar6 + -0x30) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(lVar6 + -0x38) = uVar10;
      *(undefined8 *)(lVar6 + -0x40) = uVar9;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 6) = 0;
    }
  }
  uVar9 = *(undefined8 *)(param_2 + 10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(lVar6 + -0x18) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(lVar6 + -0x20) = uVar9;
  *(undefined8 *)(lVar6 + -8) = uVar11;
  *(undefined8 *)(lVar6 + -0x10) = uVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_107f56654(auStack_80);
  lVar6 = lVar3;
  __Unwind_Resume();
  uStack_a8 = 0xffffffff;
  pcStack_88 = FUN_107f56aec;
  if ((puVar5 != (undefined4 *)0x0) && (*(int *)(lVar6 + 8) != 0)) {
    uVar9 = *(undefined8 *)(lVar6 + 0x10);
    puVar4 = (undefined1 *)puVar5;
    plStack_b0 = unaff_x22;
    lStack_a0 = param_1;
    lStack_98 = lVar3;
    puStack_90 = &stack0xfffffffffffffff0;
    _strlen(puVar5);
    func_0x0001003abe34(uVar9,puVar5,puVar4);
    func_0x0001003abe34();
    func_0x000107f56748(*(undefined8 *)(lVar6 + 0x10),param_3);
    plVar8 = *(long **)(lVar6 + 0x10);
    __ZNKSt3__18ios_base6getlocEv(&lStack_b8,(long)plVar8 + *(long *)(*plVar8 + -0x18));
    plVar2 = &lStack_b8;
    __ZNKSt3__16locale9use_facetERNS0_2idE(plVar2,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (**(code **)(*plVar2 + 0x38))();
    __ZNSt3__16localeD1Ev(&lStack_b8);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar8,plVar2);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar8);
  }
  return;
}



/* Entry: 107f56aec; end: 107f56bd3;  */

void FUN_107f56aec(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_38;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 8) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_2;
    _strlen(param_2);
    func_0x0001003abe34(uVar4,param_2,lVar1);
    func_0x0001003abe34();
    FUN_107f56748(*(undefined8 *)(param_1 + 0x10),param_3);
    plVar3 = *(long **)(param_1 + 0x10);
    __ZNKSt3__18ios_base6getlocEv(&lStack_38,(long)plVar3 + *(long *)(*plVar3 + -0x18));
    plVar2 = &lStack_38;
    __ZNKSt3__16locale9use_facetERNS0_2idE(plVar2,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (**(code **)(*plVar2 + 0x38))();
    __ZNSt3__16localeD1Ev(&lStack_38);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar3,plVar2);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar3);
  }
  return;
}



/* Entry: 107f56bd4; end: 107f56cbb;  */

void FUN_107f56bd4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_38;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 8) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_2;
    _strlen(param_2);
    func_0x0001003abe34(uVar4,param_2,lVar1);
    func_0x0001003abe34();
    func_0x000107f56824(*(undefined8 *)(param_1 + 0x10),param_3);
    plVar3 = *(long **)(param_1 + 0x10);
    __ZNKSt3__18ios_base6getlocEv(&lStack_38,(long)plVar3 + *(long *)(*plVar3 + -0x18));
    plVar2 = &lStack_38;
    __ZNKSt3__16locale9use_facetERNS0_2idE(plVar2,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (**(code **)(*plVar2 + 0x38))();
    __ZNSt3__16localeD1Ev(&lStack_38);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar3,plVar2);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar3);
  }
  return;
}



/* Entry: 107f56cbc; end: 107f56ccb;  */

void FUN_107f56cbc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f466a44;
  func_0x00010002b82c(param_1,&UNK_10f466a44);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 107f56ccc; end: 107f56dab;  */

void FUN_107f56ccc(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 uStack_39;
  long lStack_38;
  
  func_0x0001003abe34(*(undefined8 *)(param_1 + 0x10),&UNK_10f466b1f,9);
  lVar1 = *(long *)(param_1 + 0x18);
  for (lVar4 = *(long *)(param_1 + 0x20); lVar4 != lVar1; lVar4 = lVar4 + -0x48) {
    uStack_39 = 0x20;
    func_0x0001003abe34(*(undefined8 *)(param_1 + 0x10),&uStack_39,1);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  }
  plVar3 = *(long **)(param_1 + 0x10);
  __ZNKSt3__18ios_base6getlocEv(&lStack_38,(long)plVar3 + *(long *)(*plVar3 + -0x18));
  plVar2 = &lStack_38;
  __ZNKSt3__16locale9use_facetERNS0_2idE(plVar2,PTR___ZNSt3__15ctypeIcE2idE_110346770);
  (**(code **)(*plVar2 + 0x38))();
  __ZNSt3__16localeD1Ev(&lStack_38);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar3,plVar2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar3);
  return;
}



/* Entry: 107f56dac; end: 107f56fbb;  */

void FUN_107f56dac(long param_1,uint param_2)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lStack_68;
  
  bVar1 = (&UNK_10deea0ba)[(int)param_2];
  uVar5 = (uint)bVar1;
  plVar3 = *(long **)(param_1 + 0x10);
  func_0x0001003abe34(plVar3,&UNK_10f466b29,0x17);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  func_0x0001003abe34();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  func_0x0001003abe34();
  __ZNKSt3__18ios_base6getlocEv(&lStack_68,(long)plVar3 + *(long *)(*plVar3 + -0x18));
  plVar4 = &lStack_68;
  __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
  (**(code **)(*plVar4 + 0x38))();
  __ZNSt3__16localeD1Ev(&lStack_68);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar3,plVar4);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar3);
  puVar2 = PTR___ZNSt3__15ctypeIcE2idE_110346770;
  if ((param_2 & 0xfffffffd) != 0) {
    uVar6 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar6 = 1;
    }
    uVar7 = (ulong)uVar6;
    do {
      uVar5 = uVar5 - 1;
      if (*(int *)(param_1 + 8) != 0) {
        func_0x0001003abe34(*(undefined8 *)(param_1 + 0x10),&UNK_10f466b4c,4);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
        func_0x0001003abe34();
        lStack_68._0_1_ = 0x20;
        func_0x0001003abe34();
        func_0x000107f56824(*(undefined8 *)(param_1 + 0x10),
                            *(long *)(param_1 + 0x20) + ((ulong)~uVar5 | 0x1fffffff00000000) * 0x48)
        ;
        plVar3 = *(long **)(param_1 + 0x10);
        __ZNKSt3__18ios_base6getlocEv(&lStack_68,(long)plVar3 + *(long *)(*plVar3 + -0x18));
        plVar4 = &lStack_68;
        __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,puVar2);
        (**(code **)(*plVar4 + 0x38))();
        __ZNSt3__16localeD1Ev(&lStack_68);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar3,plVar4);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar3);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



/* Entry: 107f56fbc; end: 107f56fbf;  */

void FUN_107f56fbc(void)

{
  return;
}



/* Entry: 107f56fc0; end: 107f5702f;  */

void FUN_107f56fc0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar4 != lVar2) {
      do {
        lVar2 = lVar2 + -0x48;
        FUN_107f57030(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 107f57030; end: 107f57097;  */

void FUN_107f57030(int *param_1)

{
  if (*param_1 != -1) {
    if (10 < (byte)(&UNK_10deea006)[*param_1] - 0xd) {
      if ((byte)(&UNK_10deea006)[*param_1] != 0x18) goto LAB_107f57068;
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 2));
      }
    }
    param_1[8] = 0;
    param_1[9] = 0;
  }
LAB_107f57068:
  *param_1 = -1;
  return;
}



/* Entry: 107f57098; end: 107f571ff;  */

ulong * FUN_107f57098(ulong *param_1,int *param_2)

{
  ulong *puVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puStack_38 = param_1 + 2;
  puVar6 = (ulong *)param_1[1];
  if (puVar6 < (ulong *)*puStack_38) {
    puVar1 = puVar6;
    FUN_107f57200(puVar6,param_2);
    puVar6 = puVar6 + 9;
    param_1[1] = (ulong)puVar6;
  }
  else {
    uVar7 = (long)puVar6 - *param_1;
    uVar5 = ((long)uVar7 >> 3) * -0x71c71c71c71c71c7 + 1;
    if (0x38e38e38e38e38e < uVar5) {
      puVar6 = param_1;
      FUN_107f572b8();
      param_1[1] = uVar7;
      __Unwind_Resume();
      *(int *)puVar6 = *param_2;
      puVar6[4] = 0;
      uVar7 = *(ulong *)(param_2 + 0xc);
      uVar5 = *(ulong *)(param_2 + 10);
      uVar4 = *(ulong *)(param_2 + 0xe);
      puVar6[8] = *(ulong *)(param_2 + 0x10);
      puVar6[7] = uVar4;
      puVar6[6] = uVar7;
      puVar6[5] = uVar5;
      if (*param_2 != -1) {
        if ((byte)(&UNK_10deea006)[*param_2] - 0xd < 0xb) {
          puVar6[4] = (ulong)PTR___ZTIi_110346aa8;
          *(int *)(puVar6 + 1) = param_2[2];
        }
        else if ((byte)(&UNK_10deea006)[*param_2] == 0x18) {
          puVar6[4] = (ulong)&PTR_DAT_1108a6308;
          if (*(char *)((long)param_2 + 0x1f) < '\0') {
            func_0x000100033dac(puVar6 + 1,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4)
                               );
          }
          else {
            uVar7 = *(ulong *)(param_2 + 4);
            uVar5 = *(ulong *)(param_2 + 2);
            puVar6[3] = *(ulong *)(param_2 + 6);
            puVar6[2] = uVar7;
            puVar6[1] = uVar5;
          }
        }
      }
      return puVar6;
    }
    lVar3 = (long)((long)*puStack_38 - *param_1) >> 3;
    uVar4 = lVar3 * 0x1c71c71c71c71c72;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = uVar5;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar3 * -0x71c71c71c71c71c7)) {
      uVar4 = 0x38e38e38e38e38e;
    }
    if (uVar4 == 0) {
      uVar4 = 0;
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_2;
      FUN_107f572cc();
    }
    lVar3 = uVar4 + uVar7;
    uVar7 = uVar4 + (long)piVar2 * 0x48;
    uStack_58 = uVar4;
    uStack_50 = lVar3;
    puStack_48 = (ulong *)lVar3;
    uStack_40 = uVar7;
    FUN_107f57200(lVar3,param_2);
    puVar6 = (ulong *)(lVar3 + 0x48);
    uVar5 = lVar3 + (*param_1 - param_1[1]);
    puStack_48 = puVar6;
    FUN_107f57314(*param_1,param_1[1],uVar5);
    uStack_58 = *param_1;
    *param_1 = uVar5;
    param_1[1] = (ulong)puVar6;
    uStack_40 = param_1[2];
    param_1[2] = uVar7;
    puVar1 = &uStack_58;
    uStack_50 = uStack_58;
    puStack_48 = (ulong *)uStack_58;
    FUN_107f573b4(puVar1);
  }
  param_1[1] = (ulong)puVar6;
  return puVar1;
}



/* Entry: 107f57200; end: 107f572b7;  */

int * FUN_107f57200(int *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *(undefined8 *)(param_2 + 10);
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(param_1 + 10) = uVar1;
  if (*param_2 != -1) {
    if ((byte)(&UNK_10deea006)[*param_2] - 0xd < 0xb) {
      *(undefined **)(param_1 + 8) = PTR___ZTIi_110346aa8;
      param_1[2] = param_2[2];
    }
    else if ((byte)(&UNK_10deea006)[*param_2] == 0x18) {
      *(undefined ***)(param_1 + 8) = &PTR_DAT_1108a6308;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        func_0x000100033dac(param_1 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      }
      else {
        uVar2 = *(undefined8 *)(param_2 + 4);
        uVar1 = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
        *(undefined8 *)(param_1 + 4) = uVar2;
        *(undefined8 *)(param_1 + 2) = uVar1;
      }
    }
  }
  return param_1;
}



/* Entry: 107f572b8; end: 107f572cb;  */

void FUN_107f572b8(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((undefined *)0x38e38e38e38e38e < puVar1) {
    func_0x000104bd35f4();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        FUN_107f57200(param_3,puVar2);
        puVar2 = puVar2 + 0x48;
        param_3 = param_3 + 0x48;
      } while (puVar2 != param_2);
      do {
        FUN_107f57030(puVar1);
        puVar1 = puVar1 + 0x48;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x48);
  return;
}



/* Entry: 107f572cc; end: 107f57313;  */

void FUN_107f572cc(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
    func_0x000104bd35f4();
    uVar1 = param_1;
    if (param_1 != param_2) {
      do {
        FUN_107f57200(param_3,uVar1);
        uVar1 = uVar1 + 0x48;
        param_3 = param_3 + 0x48;
      } while (uVar1 != param_2);
      do {
        FUN_107f57030(param_1);
        param_1 = param_1 + 0x48;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm(param_1 * 0x48);
  return;
}



/* Entry: 107f57314; end: 107f573b3;  */

void FUN_107f57314(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 != param_2) {
    do {
      FUN_107f57200(param_3,lVar1);
      lVar1 = lVar1 + 0x48;
      param_3 = param_3 + 0x48;
    } while (lVar1 != param_2);
    do {
      FUN_107f57030(param_1);
      param_1 = param_1 + 0x48;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 107f573b4; end: 107f573ff;  */

long * FUN_107f573b4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    param_1[2] = lVar2 + -0x48;
    FUN_107f57030();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107f57400; end: 107f5744f;  */

undefined8 * FUN_107f57400(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_107f57450(param_1,200);
  return param_1;
}



/* Entry: 107f57450; end: 107f57537;  */

undefined8 ** FUN_107f57450(undefined8 **param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 **ppuStack_38;
  
  ppuStack_38 = param_1 + 2;
  puVar10 = *param_1;
  if (param_2 <= (undefined8 *)(((long)*ppuStack_38 - (long)puVar10 >> 3) * -0x71c71c71c71c71c7)) {
    return param_1;
  }
  if (param_2 < (undefined8 *)0x38e38e38e38e38f) {
    puVar12 = param_1[1];
    puVar8 = param_2;
    FUN_107f572cc();
    puVar10 = (undefined8 *)((long)param_2 + ((long)puVar12 - (long)puVar10));
    puVar12 = (undefined8 *)((long)puVar10 + ((long)*param_1 - (long)param_1[1]));
    puStack_58 = param_2;
    puStack_50 = puVar10;
    puStack_48 = puVar10;
    puStack_40 = param_2 + (long)puVar8 * 9;
    FUN_107f57314(*param_1,param_1[1],puVar12);
    puStack_58 = *param_1;
    *param_1 = puVar12;
    param_1[1] = puVar10;
    puStack_40 = param_1[2];
    param_1[2] = param_2 + (long)puVar8 * 9;
    ppuVar6 = &puStack_58;
    puStack_50 = puStack_58;
    puStack_48 = puStack_58;
    FUN_107f573b4(ppuVar6);
    return ppuVar6;
  }
  FUN_107f572b8();
  FUN_107f573b4(&puStack_58);
  __Unwind_Resume(param_1);
  uVar1 = 0;
  if (*(int *)((long)param_2 + 0x1c) != 0) {
    uVar1 = *(int *)((long)param_2 + 0x1c) - 1;
  }
  puVar10 = (undefined8 *)*param_2;
  if (puVar10 != (undefined8 *)0x0) {
    uVar2 = puVar10[1];
    puVar12 = (undefined8 *)*puVar10;
    if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)puVar10 + 0x17);
      puVar12 = puVar10;
    }
    func_0x0001003abe34(param_1,puVar12,uVar2);
    func_0x0001003abe34();
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(param_1,*(undefined4 *)(param_2 + 1));
  func_0x0001003abe34();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  plVar9 = (long *)param_2[2];
  if (plVar9 == (long *)0x0) {
LAB_107f57670:
    if (*(uint *)(param_2 + 1) < *(uint *)(param_2 + 3)) {
      uStack_93 = 0x2d;
      func_0x0001003abe34(param_1,&uStack_93,1);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
      uStack_92 = 0x2e;
    }
    else {
      if (uVar1 <= *(uint *)((long)param_2 + 0xc)) {
        return param_1;
      }
      uStack_91 = 0x2d;
    }
  }
  else {
    plVar11 = (long *)*param_2;
    if (plVar11 != (long *)0x0) {
      bVar4 = *(byte *)((long)plVar11 + 0x17);
      uVar2 = plVar11[1];
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      bVar5 = *(byte *)((long)plVar9 + 0x17);
      uVar3 = plVar9[1];
      if (-1 < (char)bVar5) {
        uVar3 = (ulong)bVar5;
      }
      if (uVar2 == uVar3) {
        plVar7 = (long *)*plVar11;
        if (-1 < (char)bVar4) {
          plVar7 = plVar11;
        }
        plVar11 = (long *)*plVar9;
        if (-1 < (char)bVar5) {
          plVar11 = plVar9;
        }
        _memcmp(plVar7,plVar11);
        if ((int)plVar7 == 0) goto LAB_107f57670;
      }
    }
    uStack_96 = 0x2d;
    func_0x0001003abe34(param_1,&uStack_96,1);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv();
    uStack_95 = 0x3a;
    func_0x0001003abe34();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
    uStack_94 = 0x2e;
  }
  func_0x0001003abe34();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  return param_1;
}



/* Entry: 107f57538; end: 107f576f3;  */

undefined8 FUN_107f57538(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = 0;
  if (*(int *)((long)param_2 + 0x1c) != 0) {
    uVar1 = *(int *)((long)param_2 + 0x1c) - 1;
  }
  puVar8 = (undefined8 *)*param_2;
  if (puVar8 != (undefined8 *)0x0) {
    uVar2 = puVar8[1];
    puVar6 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar6 = puVar8;
    }
    func_0x0001003abe34(param_1,puVar6,uVar2);
    func_0x0001003abe34();
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(param_1,*(undefined4 *)(param_2 + 1));
  func_0x0001003abe34();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  plVar9 = (long *)param_2[2];
  if (plVar9 == (long *)0x0) {
LAB_107f57670:
    if (*(uint *)(param_2 + 1) < *(uint *)(param_2 + 3)) {
      uStack_33 = 0x2d;
      func_0x0001003abe34(param_1,&uStack_33,1);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
      uStack_32 = 0x2e;
    }
    else {
      if (uVar1 <= *(uint *)((long)param_2 + 0xc)) {
        return param_1;
      }
      uStack_31 = 0x2d;
    }
  }
  else {
    plVar10 = (long *)*param_2;
    if (plVar10 != (long *)0x0) {
      bVar4 = *(byte *)((long)plVar10 + 0x17);
      uVar2 = plVar10[1];
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      bVar5 = *(byte *)((long)plVar9 + 0x17);
      uVar3 = plVar9[1];
      if (-1 < (char)bVar5) {
        uVar3 = (ulong)bVar5;
      }
      if (uVar2 == uVar3) {
        plVar7 = (long *)*plVar10;
        if (-1 < (char)bVar4) {
          plVar7 = plVar10;
        }
        plVar10 = (long *)*plVar9;
        if (-1 < (char)bVar5) {
          plVar10 = plVar9;
        }
        _memcmp(plVar7,plVar10);
        if ((int)plVar7 == 0) goto LAB_107f57670;
      }
    }
    uStack_36 = 0x2d;
    func_0x0001003abe34(param_1,&uStack_36,1);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv();
    uStack_35 = 0x3a;
    func_0x0001003abe34();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
    uStack_34 = 0x2e;
  }
  func_0x0001003abe34();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  return param_1;
}



/* Entry: 107f576f4; end: 107f577f3; +[Porter2StemmerWrapper stem:] */

void FUN_107f576f4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if ((puVar1 == (undefined *)0x0) ||
     (puVar1 = param_3, func_0x00010bdc3520(), puVar1 == (undefined *)0x0)) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    func_0x00010002b838(auStack_48);
    FUN_107f4e640(auStack_48);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c25d8e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f577f4; end: 107f57883; -[GeoParser init] */

undefined1 * FUN_107f577f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fbbb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 8;
    __Znwm(8);
    FUN_107f4933c();
    FUN_107f579fc((undefined1 *)((long)puVar1 + 8),uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107f57884; end: 107f5788f; -[GeoParser delloc] */

void FUN_107f57884(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      FUN_107f4db70(plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 107f57890; end: 107f579e7; -[GeoParser parse:searchMode:] */

void FUN_107f57890(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_31;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  _objc_retainAutorelease(param_4);
  func_0x00010bdc3520();
  func_0x00010002b838(&uStack_48,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 8);
  if (cStack_31 < '\0') {
    func_0x000100033dac(&uStack_60,uStack_48,uStack_40);
  }
  else {
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    cStack_49 = cStack_31;
  }
  FUN_107f49468(uVar1,&uStack_60,param_5,param_1);
  if (cStack_49 < '\0') {
    __ZdlPv(uStack_60);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107f579e8; end: 107f579f3; -[GeoParser .cxx_destruct] */

void FUN_107f579e8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      FUN_107f4db70(plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 107f579f4; end: 107f579fb; -[GeoParser .cxx_construct] */

void FUN_107f579f4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 107f579fc; end: 107f57a43;  */

void FUN_107f579fc(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      FUN_107f4db70(plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 107f57a44; end: 107f57aab; +[MemoriesSearchConfidenceMapConfig descriptor] */

void FUN_107f57a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137285f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8bfe0,
                        &PTR____CFConstantStringClassReference_110ec8258,
                        &PTR_s_snapchat_memories_11324be68,&PTR_DAT_11324be80,2,0x18,0x1c);
    puRam00000001137285f0 = puVar1;
  }
  return;
}



/* Entry: 107f57aac; end: 107f57b13; +[SCMemTagsTags descriptor] */

void FUN_107f57aac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137285f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8c080,
                        &PTR____CFConstantStringClassReference_110ec8278,
                        &PTR_s_snapchat_memories_11324bec0,&PTR_DAT_11324c158,8,0x48,0x1c);
    puRam00000001137285f8 = puVar1;
  }
  return;
}



/* Entry: 107f57b14; end: 107f57b7b; +[SCMemTagsVisualTags descriptor] */

void FUN_107f57b14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8c2d8,
                        &PTR____CFConstantStringClassReference_110ec8298,
                        &PTR_s_snapchat_memories_11324bec0,&PTR_DAT_11324bf38,2,0x10,0x1c);
    puRam0000000113728600 = puVar1;
  }
  return;
}



/* Entry: 107f57b7c; end: 107f57bff; +[SCMemTagsVisualTags_VisualTag descriptor] */

undefined * FUN_107f57b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8c300,
                        &PTR____CFConstantStringClassReference_110ec82b8,
                        &PTR_s_snapchat_memories_11324bec0,&PTR_DAT_11324bf78,2,0xc,0x1c);
    func_0x00010c228780();
    puRam0000000113728608 = puVar1;
  }
  return puRam0000000113728608;
}



/* Entry: 107f57c00; end: 107f57c67; +[SCMemTagsTinyClip descriptor] */

void FUN_107f57c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728610 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8c328,
                        &PTR____CFConstantStringClassReference_110ec82d8,
                        &PTR_s_snapchat_memories_11324bec0,&PTR_DAT_11324bfb8,2,0x10,0x1c);
    puRam0000000113728610 = puVar1;
  }
  return;
}



/* Entry: 107f57c68; end: 107f57ceb; +[SCMemTagsTinyClip_Caption descriptor] */

undefined * FUN_107f57c68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8c350,
                        &PTR____CFConstantStringClassReference_110e2b278,
                        &PTR_s_snapchat_memories_11324bec0,&PTR_DAT_11324bff8,2,0xc,0x1c);
    func_0x00010c228780();
    puRam0000000113728618 = puVar1;
  }
  return puRam0000000113728618;
}


