/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a550e80; end: 10a55100f;  */

void FUN_10a550e80(undefined8 param_1)

{
  undefined1 uStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6607aa;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a550fb8(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6607b3;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 0;
  FUN_10a551010(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6607b8;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 1;
  FUN_10a551010(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6607c2;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 2;
  FUN_10a551010(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a551010; end: 10a551067;  */

ulong FUN_10a551010(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a560f78(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a551068; end: 10a5511b3;  */

void FUN_10a551068(undefined8 param_1)

{
  undefined1 uStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6607ca;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a55115c(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6607da;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 0;
  FUN_10a5511b4(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6607eb;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 1;
  FUN_10a5511b4(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a5511b4; end: 10a55120b;  */

ulong FUN_10a5511b4(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a560fec(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a55120c; end: 10a5512a3;  */

undefined1  [16] FUN_10a55120c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f660fd6;
  return auVar1;
}



/* Entry: 10a5512a4; end: 10a5519bf;  */

void FUN_10a5512a4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f660fd6,0x13);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf0a98;
  pppuVar2 = (undefined8 ***)"";
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bf0a98;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5519a0;
    FUN_10a054dac(param_1,&UNK_10f6607fe,FUN_10a561110,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5519a0;
    FUN_10a054dac(param_1,&DAT_10f648172,FUN_10a561284,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660808,FUN_10a5613b0,FUN_10a56146c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66081e,FUN_10a5615d0,FUN_10a56168c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66082b,FUN_10a561780,FUN_10a56184c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660842,FUN_10a561910,FUN_10a5619dc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660858,FUN_10a561aa0,FUN_10a561b5c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66086a,FUN_10a561c4c,FUN_10a561d08);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660881,FUN_10a561df8,FUN_10a561eb4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660898,FUN_10a561fa4,FUN_10a562060);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6608b9,FUN_10a56212c,FUN_10a5621e8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6608d8,FUN_10a5622c0,FUN_10a56237c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6608f8,FUN_10a562454,FUN_10a562510);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660916,FUN_10a5625e8,FUN_10a5626a4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660926,FUN_10a562794,FUN_10a562854);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660937,FUN_10a56292c,FUN_10a5629ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660948,FUN_10a562ac4,FUN_10a562b80);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660955,FUN_10a562c40,FUN_10a562cfc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660962,FUN_10a562dbc,FUN_10a562e78);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660972,FUN_10a562f5c,FUN_10a563018);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66097b,FUN_10a5630fc,FUN_10a5631b8);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f660fd6,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a5519a0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5519a4);
  (*pcVar6)();
}



/* Entry: 10a5519c0; end: 10a551e23;  */

long ***** FUN_10a5519c0(long *****param_1)

{
  char cVar1;
  bool bVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  undefined **ppuVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ***ppplVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long lVar13;
  long ****pppplVar14;
  undefined1 uStack_1a9;
  undefined *puStack_1a8;
  long **applStack_1a0 [8];
  long ****pppplStack_160;
  long ****pppplStack_158;
  long ***ppplStack_150;
  long ***ppplStack_148;
  long ***ppplStack_140;
  long ***ppplStack_138;
  undefined4 uStack_130;
  long ***ppplStack_128;
  long ***ppplStack_120;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  undefined4 uStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  undefined4 uStack_c0;
  long ***appplStack_b8 [2];
  long ****pppplStack_a8;
  char cStack_a1;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  undefined4 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = (long ****)0x0;
  param_1[2] = (long ****)0x0;
  *param_1 = (long ****)&PTR_FUN_110bf0420;
  ppppplVar10 = param_1 + 3;
  param_1[4] = (long ****)0x0;
  *ppppplVar10 = (long ****)0x0;
  ppppplVar11 = param_1 + 5;
  param_1[6] = (long ****)0x0;
  *ppppplVar11 = (long ****)0x0;
  ppppplVar12 = param_1 + 7;
  param_1[8] = (long ****)0x0;
  *ppppplVar12 = (long ****)0x0;
  *(undefined4 *)((long)param_1 + 0x47) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x40008;
  param_1[10] = (long ****)0x0;
  param_1[0xb] = (long ****)0x0;
  param_1[0xc] = (long ****)0x3f80000041200000;
  param_1[0xe] = (long ****)0x0;
  param_1[0xf] = (long ****)0x0;
  param_1[0xd] = (long ****)0x0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f000000;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x89) = 0;
  ppppplVar3 = (long *****)0x220;
  __Znwm();
  ppppplVar3[1] = (long ****)0x0;
  ppppplVar3[2] = (long ****)0x0;
  ppppplVar4 = ppppplVar3 + 3;
  *ppppplVar3 = (long ****)&PTR_FUN_110bf0ac0;
  FUN_10a54bdf4();
  ppppplVar5 = ppppplVar11;
  pppplStack_160 = (long ****)ppppplVar4;
  pppplStack_158 = (long ****)ppppplVar3;
  FUN_10a551e24(ppppplVar11,&pppplStack_160);
  ppppplVar3 = (long *****)pppplStack_158;
  if ((long *****)pppplStack_158 != (long *****)0x0) {
    ppppplVar4 = (long *****)(pppplStack_158 + 1);
    do {
      pppplVar7 = *ppppplVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
      if (bVar2) {
        *ppppplVar4 = (long ****)((long)pppplVar7 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppplVar7 == (long ****)0x0) {
      (*(code *)(*pppplStack_158)[2])(pppplStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppplVar5 = ppppplVar3;
    }
  }
  pppplVar7 = *ppppplVar11;
  FUN_10ab6e728();
  if (*(char *)((long)ppppplVar5 + 0x17) < '\0') {
    ppppplVar3 = &pppplStack_160;
    func_0x000107c3192c(ppppplVar3,*ppppplVar5,ppppplVar5[1]);
  }
  else {
    pppplStack_158 = ppppplVar5[1];
    pppplStack_160 = *ppppplVar5;
    ppplStack_150 = (long ***)ppppplVar5[2];
    ppppplVar3 = ppppplVar5;
  }
  ppplStack_148 = (long ***)ppppplVar5[3];
  uStack_130 = *(undefined4 *)(ppppplVar5 + 6);
  ppplStack_138 = (long ***)ppppplVar5[5];
  ppplStack_140 = (long ***)ppppplVar5[4];
  ppppplVar5 = (long *****)&ppplStack_128;
  FUN_10ab6e9d8();
  if (*(char *)((long)ppppplVar3 + 0x17) < '\0') {
    func_0x000107c3192c(ppppplVar5,*ppppplVar3,ppppplVar3[1]);
  }
  else {
    ppplStack_118 = (long ***)ppppplVar3[2];
    ppplStack_120 = (long ***)ppppplVar3[1];
    ppplStack_128 = (long ***)*ppppplVar3;
    ppppplVar5 = ppppplVar3;
  }
  ppplStack_110 = (long ***)ppppplVar3[3];
  ppplStack_100 = (long ***)ppppplVar3[5];
  ppplStack_108 = (long ***)ppppplVar3[4];
  uStack_f8 = *(undefined4 *)(ppppplVar3 + 6);
  ppppplVar3 = (long *****)&ppplStack_f0;
  FUN_10ab6eb18();
  if (*(char *)((long)ppppplVar5 + 0x17) < '\0') {
    func_0x000107c3192c(ppppplVar3,*ppppplVar5,ppppplVar5[1]);
  }
  else {
    ppplStack_e0 = (long ***)ppppplVar5[2];
    ppplStack_e8 = (long ***)ppppplVar5[1];
    ppplStack_f0 = (long ***)*ppppplVar5;
    ppppplVar3 = ppppplVar5;
  }
  ppplStack_d8 = (long ***)ppppplVar5[3];
  ppplStack_c8 = (long ***)ppppplVar5[5];
  ppplStack_d0 = (long ***)ppppplVar5[4];
  uStack_c0 = *(undefined4 *)(ppppplVar5 + 6);
  FUN_10ab6f020();
  if (*(char *)((long)ppppplVar3 + 0x17) < '\0') {
    func_0x000107c3192c(appplStack_b8,*ppppplVar3,ppppplVar3[1]);
  }
  else {
    pppplStack_a8 = ppppplVar3[2];
    appplStack_b8[1] = (long ***)ppppplVar3[1];
    appplStack_b8[0] = (long ***)*ppppplVar3;
  }
  ppplStack_a0 = (long ***)ppppplVar3[3];
  ppplStack_90 = (long ***)ppppplVar3[5];
  ppplStack_98 = (long ***)ppppplVar3[4];
  uStack_88 = *(undefined4 *)(ppppplVar3 + 6);
  FUN_10ab6f520(&puStack_1a8,&pppplStack_160,4);
  lVar13 = 0;
  do {
    if ((&cStack_a1)[lVar13] < '\0') {
      __ZdlPv(*(undefined8 *)((long)appplStack_b8 + lVar13));
    }
    lVar13 = lVar13 + -0x38;
  } while (lVar13 != -0xe0);
  FUN_10a54c2ec(pppplVar7,&puStack_1a8);
  pppplVar7[0x1d] = (long ***)0x1;
  pppplStack_160 = (long ****)applStack_1a0;
  func_0x00010a190844(&pppplStack_160);
  puStack_1a8 = (undefined *)0x0;
  FUN_10a5632fc(&pppplStack_160,&uStack_1a9,&puStack_1a8,ppppplVar11);
  func_0x00010a551e88(ppppplVar10,&pppplStack_160);
  pppplVar7 = pppplStack_158;
  if ((long *****)pppplStack_158 != (long *****)0x0) {
    ppppplVar3 = (long *****)(pppplStack_158 + 1);
    do {
      pppplVar8 = *ppppplVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppplVar3,0x10);
      if (bVar2) {
        *ppppplVar3 = (long ****)((long)pppplVar8 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppplVar8 == (long ****)0x0) {
      (*(code *)(*pppplStack_158)[2])(pppplStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar7);
    }
  }
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  puStack_1a8 = *ppuVar6;
  FUN_10a551eec(&pppplStack_160,&puStack_1a8,ppppplVar10);
  ppppplVar3 = &pppplStack_160;
  ppppplVar5 = ppppplVar12;
  FUN_10a192264();
  pppplVar7 = pppplStack_158;
  if ((long *****)pppplStack_158 != (long *****)0x0) {
    ppppplVar4 = (long *****)(pppplStack_158 + 1);
    do {
      pppplVar8 = *ppppplVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
      if (bVar2) {
        *ppppplVar4 = (long ****)((long)pppplVar8 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppplVar8 == (long ****)0x0) {
      (*(code *)(*pppplStack_158)[2])(pppplStack_158);
      ppppplVar5 = (long *****)pppplVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a0e3194(ppppplVar12);
  func_0x00010a5610b8(ppppplVar11);
  func_0x00010a561060(ppppplVar10);
  *param_1 = (long ****)&PTR_DAT_110b17898;
  func_0x00010a004dac(pppplVar7);
  __Unwind_Resume();
  pppplVar14 = ppppplVar3[1];
  pppplVar8 = *ppppplVar3;
  *ppppplVar3 = (long ****)0x0;
  ppppplVar3[1] = (long ****)0x0;
  pppplVar7 = ppppplVar5[1];
  ppppplVar5[1] = pppplVar14;
  *ppppplVar5 = pppplVar8;
  if (pppplVar7 != (long ****)0x0) {
    pppplVar8 = pppplVar7 + 1;
    do {
      ppplVar9 = *pppplVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
      if (bVar2) {
        *pppplVar8 = (long ***)((long)ppplVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppplVar9 == (long ***)0x0) {
      (*(code *)(*pppplVar7)[2])(pppplVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar7);
    }
  }
  return ppppplVar5;
}



/* Entry: 10a551e24; end: 10a551eeb;  */

undefined8 * FUN_10a551e24(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a551eec; end: 10a551f7f;  */

void FUN_10a551eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a5634a0(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10a0cf858(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a551f80; end: 10a551fa7;  */

void FUN_10a551f80(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar5;
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
  return;
}



/* Entry: 10a551fa8; end: 10a552593;  */

void FUN_10a551fa8(undefined8 param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int *piVar16;
  ulong *puVar17;
  float fStack_ac;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lVar12 = param_2[1] - *param_2;
  if (lVar12 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)((lVar12 >> 3) * -0x5555555555555555)) {
      func_0x00010a55a88c();
LAB_10a552528:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a55252c);
      (*pcVar4)();
    }
    lVar6 = lVar12;
    __Znwm();
    _bzero();
    lStack_a0 = lVar6 + ((lVar12 - 0x18U) / 0x18) * 0x18 + 0x18;
    lStack_a8 = lVar6;
    lStack_98 = lVar6 + lVar12;
  }
  lVar12 = param_2[0xc];
  lVar6 = param_2[0xd];
  if (lVar12 == lVar6) {
    lVar14 = 0;
    lVar9 = 0;
  }
  else {
    do {
      lVar14 = 0;
      do {
        piVar16 = (int *)(lVar12 + lVar14 * 0xc);
        iVar13 = *piVar16;
        uVar10 = (lStack_a0 - lStack_a8 >> 3) * -0x5555555555555555;
        if (uVar10 < (ulong)(long)iVar13 || uVar10 - (long)iVar13 == 0) goto LAB_10a552528;
        puVar17 = (ulong *)(lStack_a8 + (long)iVar13 * 0x18);
        piVar1 = (int *)*puVar17;
        piVar2 = (int *)puVar17[1];
        piVar8 = piVar1;
        if (piVar1 == piVar2) {
LAB_10a5520f8:
          if (piVar8 == piVar2) {
            iVar13 = piVar16[2];
            goto LAB_10a552120;
          }
          fStack_ac = (float)CONCAT22(fStack_ac._2_2_,(short)piVar8[2]);
          FUN_10a14f5d0(&lStack_90,&fStack_ac);
        }
        else {
          iVar13 = piVar16[2];
          do {
            if ((*piVar8 == iVar13) && (piVar8[1] == piVar16[1])) goto LAB_10a5520f8;
            piVar8 = piVar8 + 3;
          } while (piVar8 != piVar2);
LAB_10a552120:
          uVar10 = (ulong)(lStack_70 - lStack_78 >> 2) / 0xc;
          iVar3 = piVar16[1];
          iVar15 = (int)uVar10;
          if (piVar2 < (int *)puVar17[2]) {
            *piVar2 = iVar13;
            piVar2[1] = iVar3;
            piVar8 = piVar2 + 3;
            piVar2[2] = iVar15;
          }
          else {
            uVar7 = ((long)piVar2 - (long)piVar1 >> 2) * -0x5555555555555555 + 1;
            if (0x1555555555555555 < uVar7) {
              func_0x00010a55a8a0();
              goto LAB_10a552528;
            }
            lVar9 = (long)puVar17[2] - (long)piVar1 >> 2;
            uVar11 = lVar9 * 0x5555555555555556;
            if (uVar11 < uVar7 || uVar11 - uVar7 == 0) {
              uVar11 = uVar7;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
              uVar11 = 0x1555555555555555;
            }
            if (0x1555555555555555 < uVar11) {
              func_0x000109ffded8();
              goto LAB_10a552528;
            }
            uVar7 = uVar11 * 0xc;
            __Znwm();
            piVar8 = (int *)(uVar7 + ((long)piVar2 - (long)piVar1));
            *piVar8 = iVar13;
            piVar8[1] = iVar3;
            piVar8[2] = iVar15;
            piVar8 = piVar8 + 3;
            _memcpy();
            *puVar17 = uVar7;
            puVar17[1] = (ulong)piVar8;
            puVar17[2] = uVar7 + uVar11 * 0xc;
            if (piVar1 != (int *)0x0) {
              __ZdlPv(piVar1);
            }
          }
          puVar17[1] = (ulong)piVar8;
          fStack_ac = (float)CONCAT22(fStack_ac._2_2_,(short)uVar10);
          FUN_10a14f5d0(&lStack_90,&fStack_ac);
          iVar13 = *piVar16;
          uVar10 = (param_2[1] - *param_2 >> 3) * -0x5555555555555555;
          if (uVar10 < (ulong)(long)iVar13 || uVar10 - (long)iVar13 == 0) goto LAB_10a552528;
          fStack_ac = (float)*(double *)(*param_2 + (long)iVar13 * 0x18);
          FUN_10a001c34(&lStack_78,&fStack_ac);
          iVar13 = *piVar16;
          uVar10 = (param_2[1] - *param_2 >> 3) * -0x5555555555555555;
          if (uVar10 < (ulong)(long)iVar13 || uVar10 - (long)iVar13 == 0) goto LAB_10a552528;
          fStack_ac = (float)*(double *)(*param_2 + (long)iVar13 * 0x18 + 8);
          FUN_10a001c34(&lStack_78,&fStack_ac);
          iVar13 = *piVar16;
          uVar10 = (param_2[1] - *param_2 >> 3) * -0x5555555555555555;
          if (uVar10 < (ulong)(long)iVar13 || uVar10 - (long)iVar13 == 0) goto LAB_10a552528;
          fStack_ac = (float)*(double *)(*param_2 + (long)iVar13 * 0x18 + 0x10);
          FUN_10a001c34(&lStack_78,&fStack_ac);
          piVar16 = (int *)(lVar12 + lVar14 * 0xc + 8);
          iVar13 = *piVar16;
          uVar10 = (param_2[7] - param_2[6] >> 3) * -0x5555555555555555;
          if (uVar10 < (ulong)(long)iVar13 || uVar10 - (long)iVar13 == 0) goto LAB_10a552528;
          fStack_ac = (float)*(double *)(param_2[6] + (long)iVar13 * 0x18);
          FUN_10a001c34(&lStack_78,&fStack_ac);
          iVar13 = *piVar16;
          uVar10 = (param_2[7] - param_2[6] >> 3) * -0x5555555555555555;
          if (uVar10 < (ulong)(long)iVar13 || uVar10 - (long)iVar13 == 0) goto LAB_10a552528;
          fStack_ac = (float)*(double *)(param_2[6] + (long)iVar13 * 0x18 + 8);
          FUN_10a001c34(&lStack_78,&fStack_ac);
          iVar13 = *piVar16;
          uVar10 = (param_2[7] - param_2[6] >> 3) * -0x5555555555555555;
          if (uVar10 < (ulong)(long)iVar13 || uVar10 - (long)iVar13 == 0) goto LAB_10a552528;
          fStack_ac = (float)*(double *)(param_2[6] + (long)iVar13 * 0x18 + 0x10);
          FUN_10a001c34(&lStack_78,&fStack_ac);
          if ((ulong)(param_2[10] - param_2[9] >> 4) <= (ulong)(long)*piVar16) goto LAB_10a552528;
          FUN_10a0ca014(&lStack_78,param_2[9] + (long)*piVar16 * 0x10);
          if ((ulong)(param_2[10] - param_2[9] >> 4) <= (ulong)(long)*piVar16) goto LAB_10a552528;
          FUN_10a0ca014(&lStack_78,param_2[9] + (long)*piVar16 * 0x10 + 4);
          if ((ulong)(param_2[10] - param_2[9] >> 4) <= (ulong)(long)*piVar16) goto LAB_10a552528;
          FUN_10a0ca014(&lStack_78,param_2[9] + (long)*piVar16 * 0x10 + 8);
          if ((ulong)(param_2[10] - param_2[9] >> 4) <= (ulong)(long)*piVar16) goto LAB_10a552528;
          FUN_10a0ca014(&lStack_78,param_2[9] + (long)*piVar16 * 0x10 + 0xc);
          piVar16 = (int *)(lVar12 + lVar14 * 0xc + 4);
          uVar10 = (ulong)*piVar16;
          if ((ulong)(param_2[4] - param_2[3] >> 4) <= uVar10) goto LAB_10a552528;
          fStack_ac = (float)*(double *)(param_2[3] + uVar10 * 0x10);
          FUN_10a001c34(&lStack_78,&fStack_ac);
          uVar10 = (ulong)*piVar16;
          if ((ulong)(param_2[4] - param_2[3] >> 4) <= uVar10) goto LAB_10a552528;
          fStack_ac = (float)*(double *)(param_2[3] + uVar10 * 0x10 + 8);
          FUN_10a001c34(&lStack_78,&fStack_ac);
        }
        bVar5 = lVar14 != 2;
        lVar14 = lVar14 + 1;
      } while (bVar5);
      lVar12 = lVar12 + 0x24;
      lVar14 = lStack_78;
      lVar9 = lStack_70;
    } while (lVar12 != lVar6);
  }
  FUN_10a54c52c(param_1,lVar14,lVar9 - lVar14 >> 2);
  FUN_10a54c670(param_1,lStack_90,lStack_88 - lStack_90 >> 1);
  FUN_10a552594(&lStack_a8);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a552594; end: 10a552687;  */

undefined8 * FUN_10a552594(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    plVar1 = plVar3;
    if (plVar2 != plVar3) {
      do {
        plVar1 = plVar2 + -3;
        if (*plVar1 != 0) {
          plVar2[-2] = *plVar1;
          __ZdlPv();
        }
        plVar2 = plVar1;
      } while (plVar1 != plVar3);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    __ZdlPv(plVar1);
  }
  return param_1;
}



/* Entry: 10a552688; end: 10a553dbf;  */

/* WARNING: Removing unreachable block (ram,0x00010a553da0) */
/* WARNING: Removing unreachable block (ram,0x00010a5536f4) */
/* WARNING: Removing unreachable block (ram,0x00010a55367c) */
/* WARNING: Removing unreachable block (ram,0x00010a553704) */
/* WARNING: Removing unreachable block (ram,0x00010a553db0) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10a552688(undefined8 *param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  long lVar17;
  undefined8 *****pppppuVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 *******pppppppuStack_7c8;
  ulong uStack_7c0;
  byte bStack_7b1;
  undefined8 *******pppppppuStack_7b0;
  ulong uStack_7a8;
  byte bStack_799;
  undefined8 *******pppppppuStack_798;
  ulong uStack_790;
  byte bStack_781;
  undefined8 *******pppppppuStack_780;
  ulong uStack_778;
  byte bStack_769;
  undefined8 *******pppppppuStack_768;
  ulong uStack_760;
  byte bStack_751;
  undefined8 *******pppppppuStack_750;
  ulong uStack_748;
  byte bStack_739;
  undefined8 *******pppppppuStack_738;
  ulong uStack_730;
  byte bStack_721;
  undefined8 *******pppppppuStack_720;
  ulong uStack_718;
  byte bStack_709;
  undefined8 *******pppppppuStack_708;
  ulong uStack_700;
  byte bStack_6f1;
  undefined8 *******pppppppuStack_6f0;
  ulong uStack_6e8;
  byte bStack_6d9;
  undefined8 *******pppppppuStack_6d8;
  ulong uStack_6d0;
  byte bStack_6c1;
  undefined8 *******pppppppuStack_6c0;
  ulong uStack_6b8;
  byte bStack_6a9;
  undefined8 *******apppppppuStack_6a8 [2];
  char cStack_691;
  undefined8 ******ppppppuStack_690;
  undefined8 ******ppppppuStack_688;
  undefined8 ******ppppppuStack_680;
  undefined8 *****pppppuStack_670;
  undefined8 *****pppppuStack_668;
  undefined8 *****pppppuStack_660;
  undefined8 ****ppppuStack_650;
  undefined8 ****ppppuStack_648;
  undefined8 ****ppppuStack_640;
  undefined8 ***pppuStack_630;
  undefined8 ***pppuStack_628;
  undefined8 ***pppuStack_620;
  undefined8 **ppuStack_610;
  undefined8 **ppuStack_608;
  undefined8 **ppuStack_600;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5c0;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  long lStack_5a0;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_580;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long lStack_560;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_540;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_520;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_500;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_480;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 *******pppppppuStack_1d0;
  ulong uStack_1c8;
  byte bStack_1b9;
  undefined8 *******pppppppuStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  long lStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  ulong uStack_198;
  byte bStack_189;
  undefined8 *******pppppppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 *******pppppppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 *******pppppppuStack_158;
  ulong uStack_150;
  byte bStack_141;
  undefined8 *******pppppppuStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined8 *******pppppppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  undefined1 auStack_110 [8];
  ulong uStack_108;
  byte bStack_f9;
  undefined8 *******pppppppuStack_f8;
  long lStack_f0;
  char cStack_e1;
  undefined8 *******pppppppuStack_e0;
  undefined8 ******appppppuStack_d8 [2];
  char acStack_c1 [41];
  undefined8 auStack_98 [2];
  char acStack_81 [9];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ad04458(&pppppppuStack_f8,*(ulong *)(*(long *)(*param_2 + -8) + 8) & 0x7fffffffffffffff);
  if (-1 < (long)cStack_e1) {
    pppppppuStack_f8 = &pppppppuStack_f8;
  }
  if (-1 < cStack_e1) {
    lStack_f0 = (long)cStack_e1;
  }
  do {
    lVar17 = lStack_f0;
    if (lVar17 == 0) {
      lVar17 = 0;
      break;
    }
    lStack_f0 = lVar17 + -1;
  } while (*(char *)((long)pppppppuStack_f8 + lVar17 + -1) != ':');
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (auStack_110,&pppppppuStack_f8,lVar17,0xffffffffffffffff,&pppppppuStack_e0);
  pcVar1 = "true";
  pcVar2 = "false";
  pcVar3 = pcVar2;
  if ((*(byte *)(param_2 + 9) & 1) != 0) {
    pcVar3 = pcVar1;
  }
  func_0x000107c2b054(&pppppppuStack_128,pcVar3);
  pcVar3 = pcVar2;
  if ((*(byte *)(param_2 + 9) & 2) != 0) {
    pcVar3 = pcVar1;
  }
  func_0x000107c2b054(&pppppppuStack_140,pcVar3);
  pcVar3 = pcVar2;
  if ((*(byte *)(param_2 + 9) & 4) != 0) {
    pcVar3 = pcVar1;
  }
  func_0x000107c2b054(&pppppppuStack_158,pcVar3);
  pcVar3 = pcVar2;
  if ((*(byte *)(param_2 + 9) & 8) != 0) {
    pcVar3 = pcVar1;
  }
  func_0x000107c2b054(&pppppppuStack_170,pcVar3);
  pcVar3 = pcVar1;
  if ((*(byte *)(param_2 + 9) & 0x10) != 0) {
    pcVar3 = pcVar2;
  }
  func_0x000107c2b054(&pppppppuStack_188,pcVar3);
  if ((*(byte *)(param_2 + 9) & 0x20) != 0) {
    pcVar1 = pcVar2;
  }
  func_0x000107c2b054(&pppppppuStack_1a0,pcVar1);
  pppppppuStack_e0 = (undefined8 *******)((ulong)pppppppuStack_e0 & 0xffffffffffffff00);
  func_0x000107c2b054(appppppuStack_d8,&UNK_10f6607b3);
  acStack_c1[1] = 1;
  func_0x000107c2b054(acStack_c1 + 9,&UNK_10f6607b8);
  acStack_c1[0x21] = 2;
  func_0x000107c2b054(auStack_98,&UNK_10f6607c2);
  lVar17 = 0;
  lStack_1a8 = 0;
  pppppppuStack_1b0 = (undefined8 *******)0x0;
  pppppppuStack_1b8 = &pppppppuStack_1b0;
  do {
    bVar5 = *(byte *)((long)&pppppppuStack_e0 + lVar17);
    pppppppuVar15 = &pppppppuStack_1b0;
    pppppppuVar13 = &pppppppuStack_1b0;
    pppppppuVar16 = &pppppppuStack_1b0;
    if ((undefined8 ********)pppppppuStack_1b8 == &pppppppuStack_1b0) {
LAB_10a5528c8:
      pppppppuVar14 = &pppppppuStack_1b8;
      if (pppppppuStack_1b0 != (undefined8 *******)0x0) {
        pppppppuVar13 = pppppppuVar15 + 1;
        pppppppuVar14 = pppppppuVar15;
        pppppppuVar16 = pppppppuVar15;
      }
      if (pppppppuVar14[1] == (undefined8 ******)0x0) goto LAB_10a5528e4;
    }
    else {
      pppppppuVar14 = &pppppppuStack_1b0;
      pppppppuVar6 = pppppppuStack_1b0;
      if (pppppppuStack_1b0 == (undefined8 *******)0x0) {
        do {
          pppppppuVar15 = (undefined8 *******)pppppppuVar14[2];
          bVar7 = (undefined8 *******)*pppppppuVar15 == pppppppuVar14;
          pppppppuVar14 = pppppppuVar15;
        } while (bVar7);
        if (*(byte *)(pppppppuVar15 + 4) < bVar5) goto LAB_10a5528c8;
      }
      else {
        do {
          pppppppuVar15 = pppppppuVar6;
          pppppppuVar6 = (undefined8 *******)pppppppuVar15[1];
        } while ((undefined8 *******)pppppppuVar15[1] != (undefined8 *******)0x0);
        pppppppuVar14 = pppppppuStack_1b0;
        if (*(byte *)(pppppppuVar15 + 4) < bVar5) goto LAB_10a5528c8;
        do {
          while (pppppppuVar16 = pppppppuVar14, *(byte *)(pppppppuVar16 + 4) <= bVar5) {
            if (bVar5 <= *(byte *)(pppppppuVar16 + 4)) goto LAB_10a552954;
            pppppppuVar14 = (undefined8 *******)pppppppuVar16[1];
            if ((undefined8 *******)pppppppuVar16[1] == (undefined8 *******)0x0) {
              pppppppuVar13 = pppppppuVar16 + 1;
              goto LAB_10a5528e4;
            }
          }
          pppppppuVar14 = (undefined8 *******)*pppppppuVar16;
          pppppppuVar13 = pppppppuVar16;
        } while ((undefined8 *******)*pppppppuVar16 != (undefined8 *******)0x0);
      }
LAB_10a5528e4:
      ppppppuVar8 = (undefined8 ******)0x40;
      __Znwm();
      *(byte *)(ppppppuVar8 + 4) = bVar5;
      if (acStack_c1[lVar17] < '\0') {
        func_0x000107c3192c(ppppppuVar8 + 5,*(undefined8 *)((long)appppppuStack_d8 + lVar17),
                            *(undefined8 *)((long)appppppuStack_d8 + lVar17 + 8));
      }
      else {
        pppppuVar18 = *(undefined8 ******)((long)appppppuStack_d8 + lVar17);
        ppppppuVar8[6] = *(undefined8 ******)((long)appppppuStack_d8 + lVar17 + 8);
        ppppppuVar8[5] = pppppuVar18;
        ppppppuVar8[7] = *(undefined8 ******)(&stack0xffffffffffffff38 + lVar17);
      }
      *ppppppuVar8 = (undefined8 *****)0x0;
      ppppppuVar8[1] = (undefined8 *****)0x0;
      ppppppuVar8[2] = pppppppuVar16;
      *pppppppuVar13 = ppppppuVar8;
      if ((undefined8 *******)*pppppppuStack_1b8 != (undefined8 *******)0x0) {
        ppppppuVar8 = *pppppppuVar13;
        pppppppuStack_1b8 = (undefined8 *******)*pppppppuStack_1b8;
      }
      func_0x000107c2b058(pppppppuStack_1b0,ppppppuVar8);
      lStack_1a8 = lStack_1a8 + 1;
    }
LAB_10a552954:
    lVar17 = lVar17 + 0x20;
  } while (lVar17 != 0x60);
  lVar17 = 0;
  do {
    if (acStack_81[lVar17] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_98 + lVar17));
    }
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x60);
  if (pppppppuStack_1b0 != (undefined8 *******)0x0) {
    pppppppuVar13 = &pppppppuStack_1b0;
    pppppppuVar16 = pppppppuStack_1b0;
    do {
      lVar17 = 8;
      if (*(byte *)((long)param_2 + 0x49) <= *(byte *)(pppppppuVar16 + 4)) {
        lVar17 = 0;
        pppppppuVar13 = pppppppuVar16;
      }
      pppppppuVar16 = *(undefined8 ********)((long)pppppppuVar16 + lVar17);
    } while (pppppppuVar16 != (undefined8 *******)0x0);
    if (((undefined8 ********)pppppppuVar13 != &pppppppuStack_1b0) &&
       (*(byte *)(pppppppuVar13 + 4) <= *(byte *)((long)param_2 + 0x49))) {
      if (*(char *)((long)pppppppuVar13 + 0x3f) < '\0') {
        func_0x000107c3192c(&pppppppuStack_e0,pppppppuVar13[5],pppppppuVar13[6]);
      }
      else {
        appppppuStack_d8[0] = pppppppuVar13[6];
        pppppppuStack_e0 = (undefined8 *******)pppppppuVar13[5];
        appppppuStack_d8[1] = pppppppuVar13[7];
      }
      goto LAB_10a5529ec;
    }
  }
  func_0x000107c2b054(&pppppppuStack_e0,&UNK_10f6609c5);
LAB_10a5529ec:
  pcVar1 = "true";
  if (*(char *)(param_2[3] + 0xe8) == '\0') {
    pcVar1 = "false";
  }
  func_0x000107c2b054(&pppppppuStack_1d0,pcVar1);
  uVar4 = uStack_108;
  if (-1 < (char)bStack_f9) {
    uVar4 = (ulong)bStack_f9;
  }
  FUN_10a003c90(apppppppuStack_6a8,uVar4 + 0x18,&pppppppuStack_6c0);
  pppppppuVar13 = apppppppuStack_6a8[0];
  if (-1 < cStack_691) {
    pppppppuVar13 = apppppppuStack_6a8;
  }
  if (uVar4 != 0) {
    _memmove(pppppppuVar13,auStack_110,uVar4);
  }
  puVar12 = (undefined8 *)((long)pppppppuVar13 + uVar4);
  puVar12[1] = 0x657250746e656d67;
  *puVar12 = 0x6553657672756320;
  puVar12[2] = 0x203a6e6f69736963;
  *(undefined1 *)(puVar12 + 3) = 0;
  __ZNSt3__19to_stringEf(&pppppppuStack_6c0,*(undefined4 *)((long)param_2 + 100));
  pppppppuVar13 = pppppppuStack_6c0;
  if (-1 < (char)bStack_6a9) {
    uStack_6b8 = (ulong)bStack_6a9;
    pppppppuVar13 = &pppppppuStack_6c0;
  }
  pppppppuVar16 = apppppppuStack_6a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar16,pppppppuVar13,uStack_6b8);
  ppppppuStack_688 = pppppppuVar16[1];
  ppppppuStack_690 = *pppppppuVar16;
  ppppppuStack_680 = pppppppuVar16[2];
  pppppppuVar16[1] = (undefined8 ******)0x0;
  pppppppuVar16[2] = (undefined8 ******)0x0;
  *pppppppuVar16 = (undefined8 ******)0x0;
  ppppppuVar8 = &ppppppuStack_690;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar8,&UNK_10f6609f1,0x10);
  pppppuStack_668 = ppppppuVar8[1];
  pppppuStack_670 = *ppppppuVar8;
  pppppuStack_660 = ppppppuVar8[2];
  ppppppuVar8[1] = (undefined8 *****)0x0;
  ppppppuVar8[2] = (undefined8 *****)0x0;
  *ppppppuVar8 = (undefined8 *****)0x0;
  __ZNSt3__19to_stringEf(&pppppppuStack_6d8,(int)param_2[0xc]);
  pppppppuVar13 = pppppppuStack_6d8;
  if (-1 < (char)bStack_6c1) {
    uStack_6d0 = (ulong)bStack_6c1;
    pppppppuVar13 = &pppppppuStack_6d8;
  }
  pppppuVar18 = &pppppuStack_670;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar18,pppppppuVar13,uStack_6d0);
  ppppuStack_648 = pppppuVar18[1];
  ppppuStack_650 = *pppppuVar18;
  ppppuStack_640 = pppppuVar18[2];
  pppppuVar18[1] = (undefined8 ****)0x0;
  pppppuVar18[2] = (undefined8 ****)0x0;
  *pppppuVar18 = (undefined8 ****)0x0;
  ppppuVar9 = &ppppuStack_650;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar9,&UNK_10f660a02,0x1f);
  pppuStack_628 = ppppuVar9[1];
  pppuStack_630 = *ppppuVar9;
  pppuStack_620 = ppppuVar9[2];
  ppppuVar9[1] = (undefined8 ***)0x0;
  ppppuVar9[2] = (undefined8 ***)0x0;
  *ppppuVar9 = (undefined8 ***)0x0;
  __ZNSt3__19to_stringEf(&pppppppuStack_6f0,(int)param_2[0xd]);
  pppppppuVar13 = pppppppuStack_6f0;
  if (-1 < (char)bStack_6d9) {
    uStack_6e8 = (ulong)bStack_6d9;
    pppppppuVar13 = &pppppppuStack_6f0;
  }
  pppuVar10 = &pppuStack_630;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar10,pppppppuVar13,uStack_6e8);
  ppuStack_608 = pppuVar10[1];
  ppuStack_610 = *pppuVar10;
  ppuStack_600 = pppuVar10[2];
  pppuVar10[1] = (undefined8 **)0x0;
  pppuVar10[2] = (undefined8 **)0x0;
  *pppuVar10 = (undefined8 **)0x0;
  ppuVar11 = &ppuStack_610;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar11,&DAT_10f68f19e,2);
  puStack_5e8 = ppuVar11[1];
  puStack_5f0 = *ppuVar11;
  puStack_5e0 = ppuVar11[2];
  ppuVar11[1] = (undefined8 *)0x0;
  ppuVar11[2] = (undefined8 *)0x0;
  *ppuVar11 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&pppppppuStack_708,*(undefined4 *)((long)param_2 + 0x6c));
  pppppppuVar13 = pppppppuStack_708;
  if (-1 < (char)bStack_6f1) {
    uStack_700 = (ulong)bStack_6f1;
    pppppppuVar13 = &pppppppuStack_708;
  }
  puVar12 = &puStack_5f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_700);
  uStack_5c8 = puVar12[1];
  uStack_5d0 = *puVar12;
  lStack_5c0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_5d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660a22,0x1e);
  uStack_5a8 = puVar12[1];
  uStack_5b0 = *puVar12;
  lStack_5a0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  __ZNSt3__19to_stringEf(&pppppppuStack_720,(int)param_2[0xe]);
  pppppppuVar13 = pppppppuStack_720;
  if (-1 < (char)bStack_709) {
    uStack_718 = (ulong)bStack_709;
    pppppppuVar13 = &pppppppuStack_720;
  }
  puVar12 = &uStack_5b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_718);
  uStack_588 = puVar12[1];
  uStack_590 = *puVar12;
  lStack_580 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_590;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&DAT_10f68f19e,2);
  uStack_568 = puVar12[1];
  uStack_570 = *puVar12;
  lStack_560 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  __ZNSt3__19to_stringEf(&pppppppuStack_738,*(undefined4 *)((long)param_2 + 0x74));
  pppppppuVar13 = pppppppuStack_738;
  if (-1 < (char)bStack_721) {
    uStack_730 = (ulong)bStack_721;
    pppppppuVar13 = &pppppppuStack_738;
  }
  puVar12 = &uStack_570;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_730);
  uStack_548 = puVar12[1];
  uStack_550 = *puVar12;
  lStack_540 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_550;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660a41,0x16);
  uStack_528 = puVar12[1];
  uStack_530 = *puVar12;
  lStack_520 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  __ZNSt3__19to_stringEf(&pppppppuStack_750,*(undefined4 *)((long)param_2 + 0x84));
  pppppppuVar13 = pppppppuStack_750;
  if (-1 < (char)bStack_739) {
    uStack_748 = (ulong)bStack_739;
    pppppppuVar13 = &pppppppuStack_750;
  }
  puVar12 = &uStack_530;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_748);
  uStack_508 = puVar12[1];
  uStack_510 = *puVar12;
  lStack_500 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_510;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660a58,0x1a);
  uStack_4e8 = puVar12[1];
  uStack_4f0 = *puVar12;
  lStack_4e0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  __ZNSt3__19to_stringEf(&pppppppuStack_768,(int)param_2[0xf]);
  pppppppuVar13 = pppppppuStack_768;
  if (-1 < (char)bStack_751) {
    uStack_760 = (ulong)bStack_751;
    pppppppuVar13 = &pppppppuStack_768;
  }
  puVar12 = &uStack_4f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_760);
  uStack_4c8 = puVar12[1];
  uStack_4d0 = *puVar12;
  lStack_4c0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_4d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660a73,0x1a);
  uStack_4a8 = puVar12[1];
  uStack_4b0 = *puVar12;
  lStack_4a0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  __ZNSt3__19to_stringEf(&pppppppuStack_780,*(undefined4 *)((long)param_2 + 0x7c));
  pppppppuVar13 = pppppppuStack_780;
  if (-1 < (char)bStack_769) {
    uStack_778 = (ulong)bStack_769;
    pppppppuVar13 = &pppppppuStack_780;
  }
  puVar12 = &uStack_4b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_778);
  uStack_488 = puVar12[1];
  uStack_490 = *puVar12;
  lStack_480 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_490;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660a8e,0x26);
  uStack_468 = puVar12[1];
  uStack_470 = *puVar12;
  lStack_460 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  pppppppuVar13 = pppppppuStack_128;
  if (-1 < (char)bStack_111) {
    uStack_120 = (ulong)bStack_111;
    pppppppuVar13 = &pppppppuStack_128;
  }
  puVar12 = &uStack_470;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_120);
  uStack_448 = puVar12[1];
  uStack_450 = *puVar12;
  lStack_440 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_450;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660ab5,0x24);
  uStack_428 = puVar12[1];
  uStack_430 = *puVar12;
  lStack_420 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  pppppppuVar13 = pppppppuStack_140;
  if (-1 < (char)bStack_129) {
    uStack_138 = (ulong)bStack_129;
    pppppppuVar13 = &pppppppuStack_140;
  }
  puVar12 = &uStack_430;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_138);
  uStack_408 = puVar12[1];
  uStack_410 = *puVar12;
  lStack_400 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_410;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660ada,0x25);
  uStack_3e8 = puVar12[1];
  uStack_3f0 = *puVar12;
  lStack_3e0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  pppppppuVar13 = pppppppuStack_158;
  if (-1 < (char)bStack_141) {
    uStack_150 = (ulong)bStack_141;
    pppppppuVar13 = &pppppppuStack_158;
  }
  puVar12 = &uStack_3f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_150);
  uStack_3c8 = puVar12[1];
  uStack_3d0 = *puVar12;
  lStack_3c0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_3d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660b00,0x23);
  uStack_3a8 = puVar12[1];
  uStack_3b0 = *puVar12;
  lStack_3a0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  pppppppuVar13 = pppppppuStack_170;
  if (-1 < (char)bStack_159) {
    uStack_168 = (ulong)bStack_159;
    pppppppuVar13 = &pppppppuStack_170;
  }
  puVar12 = &uStack_3b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_168);
  uStack_388 = puVar12[1];
  uStack_390 = *puVar12;
  lStack_380 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_390;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660b24,0x13);
  uStack_368 = puVar12[1];
  uStack_370 = *puVar12;
  lStack_360 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  __ZNSt3__19to_stringEf(&pppppppuStack_798,(int)param_2[0x10]);
  pppppppuVar13 = pppppppuStack_798;
  if (-1 < (char)bStack_781) {
    uStack_790 = (ulong)bStack_781;
    pppppppuVar13 = &pppppppuStack_798;
  }
  puVar12 = &uStack_370;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_790);
  uStack_348 = puVar12[1];
  uStack_350 = *puVar12;
  lStack_340 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_350;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660b38,0x16);
  uStack_328 = puVar12[1];
  uStack_330 = *puVar12;
  lStack_320 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  pppppppuVar13 = pppppppuStack_188;
  if (-1 < (char)bStack_171) {
    uStack_180 = (ulong)bStack_171;
    pppppppuVar13 = &pppppppuStack_188;
  }
  puVar12 = &uStack_330;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_180);
  uStack_308 = puVar12[1];
  uStack_310 = *puVar12;
  lStack_300 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_310;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660b4f,0x16);
  uStack_2e8 = puVar12[1];
  uStack_2f0 = *puVar12;
  lStack_2e0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  pppppppuVar13 = pppppppuStack_1a0;
  if (-1 < (char)bStack_189) {
    uStack_198 = (ulong)bStack_189;
    pppppppuVar13 = &pppppppuStack_1a0;
  }
  puVar12 = &uStack_2f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_198);
  uStack_2c8 = puVar12[1];
  uStack_2d0 = *puVar12;
  lStack_2c0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_2d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660b66,0x10);
  uStack_2a8 = puVar12[1];
  uStack_2b0 = *puVar12;
  lStack_2a0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  __ZNSt3__19to_stringEi(&pppppppuStack_7b0,(long)*(short *)((long)param_2 + 0x4c));
  pppppppuVar13 = pppppppuStack_7b0;
  if (-1 < (char)bStack_799) {
    uStack_7a8 = (ulong)bStack_799;
    pppppppuVar13 = &pppppppuStack_7b0;
  }
  puVar12 = &uStack_2b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_7a8);
  uStack_288 = puVar12[1];
  uStack_290 = *puVar12;
  lStack_280 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_290;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660b77,0x10);
  uStack_268 = puVar12[1];
  uStack_270 = *puVar12;
  lStack_260 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  __ZNSt3__19to_stringEi(&pppppppuStack_7c8,(long)*(short *)((long)param_2 + 0x4e));
  pppppppuVar13 = pppppppuStack_7c8;
  if (-1 < (char)bStack_7b1) {
    uStack_7c0 = (ulong)bStack_7b1;
    pppppppuVar13 = &pppppppuStack_7c8;
  }
  puVar12 = &uStack_270;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_7c0);
  uStack_248 = puVar12[1];
  uStack_250 = *puVar12;
  lStack_240 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_250;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660b88,0xc);
  uStack_228 = puVar12[1];
  uStack_230 = *puVar12;
  lStack_220 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  ppppppuVar8 = appppppuStack_d8[0];
  pppppppuVar13 = pppppppuStack_e0;
  if (-1 < (long)appppppuStack_d8[1]) {
    ppppppuVar8 = (undefined8 ******)((ulong)appppppuStack_d8[1] >> 0x38);
    pppppppuVar13 = &pppppppuStack_e0;
  }
  puVar12 = &uStack_230;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,ppppppuVar8);
  uStack_208 = puVar12[1];
  uStack_210 = *puVar12;
  lStack_200 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = &uStack_210;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,&UNK_10f660b95,0x1c);
  uStack_1e8 = puVar12[1];
  uStack_1f0 = *puVar12;
  lStack_1e0 = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  pppppppuVar13 = pppppppuStack_1d0;
  if (-1 < (char)bStack_1b9) {
    uStack_1c8 = (ulong)bStack_1b9;
    pppppppuVar13 = &pppppppuStack_1d0;
  }
  puVar12 = &uStack_1f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,pppppppuVar13,uStack_1c8);
  uVar19 = *puVar12;
  param_1[1] = puVar12[1];
  *param_1 = uVar19;
  param_1[2] = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  if (lStack_1e0 < 0) {
    __ZdlPv(uStack_1f0);
  }
  if (lStack_200 < 0) {
    __ZdlPv(uStack_210);
  }
  if (lStack_220 < 0) {
    __ZdlPv(uStack_230);
  }
  if (lStack_240 < 0) {
    __ZdlPv(uStack_250);
  }
  if ((char)bStack_7b1 < '\0') {
    __ZdlPv(pppppppuStack_7c8);
  }
  if (lStack_260 < 0) {
    __ZdlPv(uStack_270);
  }
  if (lStack_280 < 0) {
    __ZdlPv(uStack_290);
  }
  if ((char)bStack_799 < '\0') {
    __ZdlPv(pppppppuStack_7b0);
  }
  if (lStack_2a0 < 0) {
    __ZdlPv(uStack_2b0);
  }
  if (lStack_2c0 < 0) {
    __ZdlPv(uStack_2d0);
  }
  if (lStack_2e0 < 0) {
    __ZdlPv(uStack_2f0);
  }
  if (lStack_300 < 0) {
    __ZdlPv(uStack_310);
  }
  if (lStack_320 < 0) {
    __ZdlPv(uStack_330);
  }
  if (lStack_340 < 0) {
    __ZdlPv(uStack_350);
  }
  if ((char)bStack_781 < '\0') {
    __ZdlPv(pppppppuStack_798);
  }
  if (lStack_360 < 0) {
    __ZdlPv(uStack_370);
  }
  if (lStack_380 < 0) {
    __ZdlPv(uStack_390);
  }
  if (lStack_3a0 < 0) {
    __ZdlPv(uStack_3b0);
  }
  if (lStack_3c0 < 0) {
    __ZdlPv(uStack_3d0);
  }
  if (lStack_3e0 < 0) {
    __ZdlPv(uStack_3f0);
  }
  if (lStack_400 < 0) {
    __ZdlPv(uStack_410);
  }
  if (lStack_420 < 0) {
    __ZdlPv(uStack_430);
  }
  if (lStack_440 < 0) {
    __ZdlPv(uStack_450);
  }
  if (lStack_460 < 0) {
    __ZdlPv(uStack_470);
  }
  if (lStack_480 < 0) {
    __ZdlPv(uStack_490);
  }
  if ((char)bStack_769 < '\0') {
    __ZdlPv(pppppppuStack_780);
  }
  if (lStack_4a0 < 0) {
    __ZdlPv(uStack_4b0);
  }
  if (lStack_4c0 < 0) {
    __ZdlPv(uStack_4d0);
  }
  if ((char)bStack_751 < '\0') {
    __ZdlPv(pppppppuStack_768);
  }
  if (lStack_4e0 < 0) {
    __ZdlPv(uStack_4f0);
  }
  if (lStack_500 < 0) {
    __ZdlPv(uStack_510);
  }
  if ((char)bStack_739 < '\0') {
    __ZdlPv(pppppppuStack_750);
  }
  if (lStack_520 < 0) {
    __ZdlPv(uStack_530);
  }
  if (lStack_540 < 0) {
    __ZdlPv(uStack_550);
  }
  if ((char)bStack_721 < '\0') {
    __ZdlPv(pppppppuStack_738);
  }
  if (lStack_560 < 0) {
    __ZdlPv(uStack_570);
  }
  if (lStack_580 < 0) {
    __ZdlPv(uStack_590);
  }
  if ((char)bStack_709 < '\0') {
    __ZdlPv(pppppppuStack_720);
  }
  if (lStack_5a0 < 0) {
    __ZdlPv(uStack_5b0);
  }
  if (lStack_5c0 < 0) {
    __ZdlPv(uStack_5d0);
  }
  if ((char)bStack_6f1 < '\0') {
    __ZdlPv(pppppppuStack_708);
  }
  if ((long)puStack_5e0 < 0) {
    __ZdlPv(puStack_5f0);
  }
  if ((long)ppuStack_600 < 0) {
    __ZdlPv(ppuStack_610);
  }
  if ((char)bStack_6d9 < '\0') {
    __ZdlPv(pppppppuStack_6f0);
  }
  if ((long)pppuStack_620 < 0) {
    __ZdlPv(pppuStack_630);
  }
  if ((long)ppppuStack_640 < 0) {
    __ZdlPv(ppppuStack_650);
  }
  if ((char)bStack_6c1 < '\0') {
    __ZdlPv(pppppppuStack_6d8);
  }
  if ((long)pppppuStack_660 < 0) {
    __ZdlPv(pppppuStack_670);
  }
  if ((long)ppppppuStack_680 < 0) {
    __ZdlPv(ppppppuStack_690);
  }
  if ((char)bStack_6a9 < '\0') {
    __ZdlPv(pppppppuStack_6c0);
  }
  if (cStack_691 < '\0') {
    __ZdlPv(apppppppuStack_6a8[0]);
  }
  if ((char)bStack_1b9 < '\0') {
    __ZdlPv(pppppppuStack_1d0);
  }
  pppppppuVar16 = pppppppuStack_1b0;
  FUN_10a563604(pppppppuStack_1b0);
  if ((char)bStack_189 < '\0') {
    pppppppuVar16 = pppppppuStack_1a0;
    __ZdlPv(pppppppuStack_1a0);
  }
  if ((char)bStack_171 < '\0') {
    pppppppuVar16 = pppppppuStack_188;
    __ZdlPv(pppppppuStack_188);
  }
  if ((char)bStack_159 < '\0') {
    pppppppuVar16 = pppppppuStack_170;
    __ZdlPv(pppppppuStack_170);
  }
  if ((char)bStack_141 < '\0') {
    pppppppuVar16 = pppppppuStack_158;
    __ZdlPv(pppppppuStack_158);
  }
  if ((char)bStack_129 < '\0') {
    pppppppuVar16 = pppppppuStack_140;
    __ZdlPv(pppppppuStack_140);
  }
  if ((char)bStack_111 < '\0') {
    pppppppuVar16 = pppppppuStack_128;
    __ZdlPv(pppppppuStack_128);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    FUN_10a563604(pppppppuStack_1b0);
    if ((char)bStack_189 < '\0') {
      __ZdlPv(pppppppuStack_1a0);
    }
    if ((char)bStack_171 < '\0') {
      __ZdlPv(pppppppuStack_188);
    }
    if ((char)bStack_159 < '\0') {
      __ZdlPv(pppppppuStack_170);
    }
    if ((char)bStack_141 < '\0') {
      __ZdlPv(pppppppuStack_158);
    }
    if ((char)bStack_129 < '\0') {
      __ZdlPv(pppppppuStack_140);
    }
    if ((char)bStack_111 < '\0') {
      __ZdlPv(pppppppuStack_128);
    }
    __Unwind_Resume(pppppppuVar16);
    auVar21._8_8_ = 0x10;
    auVar21._0_8_ = &UNK_10f660be6;
    return auVar21;
  }
  auVar20._8_8_ = pppppppuVar13;
  auVar20._0_8_ = pppppppuVar16;
  return auVar20;
}



/* Entry: 10a553dc0; end: 10a553e13;  */

undefined1  [16] FUN_10a553dc0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f660be6;
  return auVar1;
}



/* Entry: 10a553e14; end: 10a553f53;  */

void FUN_10a553e14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_6c = 0x124;
  uStack_68 = 0x13c;
  uVar1 = param_1;
  FUN_10a553f54(param_1,&puStack_a8);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f660bda;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000019;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a563960();
  FUN_10a563e4c(uVar1);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f660be6;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x200000019;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a004eb4(param_1,&puStack_a8);
  ppuStack_a0 = &puStack_b0;
  puStack_b0 = &UNK_10f660c09;
  puStack_a8 = &UNK_10f660bf7;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000019;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_5c = 0x124;
  uStack_58 = 0x13c;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a55402c(param_1,&puStack_a8);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a553f54; end: 10a55402b;  */

/* WARNING: Removing unreachable block (ram,0x00010a553fec) */

undefined1  [16] FUN_10a553f54(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f660be6,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a563864(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a55402c; end: 10a554093;  */

ulong FUN_10a55402c(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a554094);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a563f74,1,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a554094; end: 10a55415f;  */

undefined8 * FUN_10a554094(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar8 = param_1;
  FUN_10a5519c0();
  *puVar8 = &PTR_DAT_110bf04a8;
  lVar9 = *param_2;
  lVar2 = param_2[1];
  puVar8[0x13] = lVar9;
  puVar8[0x14] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar9 = *param_2;
  }
  puStack_40 = &UNK_10f660c0f;
  uStack_38 = 0x1b;
  if (lVar9 != 0) {
    lVar3 = *(long *)(lVar9 + 0x20);
    lVar2 = *(long *)(lVar9 + 0x28);
    lVar4 = *(long *)(lVar9 + 0x30);
    *(float *)(param_1 + 10) = (float)*(long *)(lVar9 + 0x18);
    *(float *)((long)param_1 + 0x54) = (float)lVar3;
    *(float *)(param_1 + 0xb) = (float)lVar2;
    *(float *)((long)param_1 + 0x5c) = (float)lVar4;
    return param_1;
  }
  FUN_10a0edfc4(&puStack_40);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a554144);
  (*pcVar7)();
}



/* Entry: 10a554160; end: 10a55421f;  */

undefined8 * FUN_10a554160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf0420;
  FUN_10a0e3194(param_1 + 7);
  func_0x00010a5610b8(param_1 + 5);
  func_0x00010a561060(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a554220; end: 10a554517;  */

void FUN_10a554220(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_288;
  long lStack_280;
  long lStack_270;
  long lStack_268;
  long lStack_258;
  long lStack_250;
  long lStack_240;
  long lStack_238;
  long lStack_228;
  long lStack_220;
  long alStack_210 [3];
  long lStack_1f8;
  long lStack_1f0;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 auStack_68 [3];
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x98) + 0xb0);
  uStack_1d8 = *(undefined8 *)(lVar2 + 0x30);
  plStack_1e0 = *(long **)(lVar2 + 0x28);
  uStack_1c8 = *(undefined8 *)(lVar2 + 0x40);
  uStack_1d0 = *(undefined8 *)(lVar2 + 0x38);
  uStack_1c0 = *(undefined8 *)(lVar2 + 0x48);
  FUN_10a54c8bc(auStack_68,(double)*(float *)(param_2 + 100),&plStack_1e0);
  FUN_10a54cbac(&lStack_80,auStack_68,*(undefined1 *)(param_2 + 0x49));
  for (lVar2 = lStack_80; lVar2 != lStack_78; lVar2 = lVar2 + 0x58) {
    FUN_10a54d45c((double)*(float *)(param_2 + 0x84),(double)*(float *)(param_2 + 100),lVar2);
    lVar1 = *(long *)(lVar2 + 0x48);
    for (lVar3 = *(long *)(lVar2 + 0x40); lVar3 != lVar1; lVar3 = lVar3 + 0x40) {
      FUN_10a54d45c((double)*(float *)(param_2 + 0x84),(double)*(float *)(param_2 + 100),lVar3);
    }
  }
  lVar2 = param_2 + 0x48;
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    plStack_168 = &lStack_80;
    uStack_170 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    plStack_160 = alStack_210;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_88 = 0;
    alStack_210[0] = lVar2;
    FUN_10a54dd20(&lStack_288,&plStack_1e0,lVar2);
    func_0x00010a559c08(&plStack_1e0);
  }
  else {
    FUN_10a559d94(alStack_210,lVar2,&lStack_80);
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_170 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_88 = 0;
    plStack_168 = &lStack_80;
    plStack_160 = alStack_210;
    FUN_10a54ed44(&lStack_288,&plStack_1e0,lVar2);
    func_0x00010a55a0f4(&plStack_1e0);
    if (lStack_1f8 != 0) {
      lStack_1f0 = lStack_1f8;
      __ZdlPv();
    }
  }
  plStack_1e0 = &lStack_80;
  FUN_10a34ee04(&plStack_1e0);
  plStack_1e0 = auStack_68;
  FUN_10a34ef08(&plStack_1e0);
  func_0x00010a552600(param_1,param_2,&lStack_288);
  if (lStack_228 != 0) {
    lStack_220 = lStack_228;
    __ZdlPv();
  }
  if (lStack_240 != 0) {
    lStack_238 = lStack_240;
    _free();
  }
  if (lStack_258 != 0) {
    lStack_250 = lStack_258;
    _free();
  }
  if (lStack_270 != 0) {
    lStack_268 = lStack_270;
    _free();
  }
  if (lStack_288 != 0) {
    lStack_280 = lStack_288;
    _free();
  }
  return;
}



/* Entry: 10a554518; end: 10a554683;  */

long * FUN_10a554518(long *param_1)

{
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    _free();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    _free();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    _free();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    _free();
  }
  return param_1;
}



/* Entry: 10a554684; end: 10a554d0b;  */

void FUN_10a554684(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  code *pcVar12;
  int iVar13;
  long **pplVar14;
  long **pplVar15;
  long lVar16;
  undefined **ppuVar17;
  long *plVar18;
  undefined4 *puVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined *puVar29;
  long lVar30;
  long *plVar31;
  double dVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  undefined4 auStack_140 [2];
  long lStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined4 uStack_b0;
  long *aplStack_a8 [2];
  long *plStack_98;
  char cStack_91;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined4 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_3 < 1) {
    FUN_10a00946c(&UNK_10f660c38);
LAB_10a554c48:
    FUN_10a00946c(&UNK_10f660c58);
  }
  else {
    if ((int)param_4 < 1) goto LAB_10a554c48;
    pplVar14 = &plStack_e0;
    FUN_10a0d0194(&lStack_f8);
    FUN_10ab6e728();
    if (*(char *)((long)pplVar14 + 0x17) < '\0') {
      pplVar15 = &plStack_e0;
      func_0x000107c3192c(pplVar15,*pplVar14,pplVar14[1]);
    }
    else {
      plStack_d8 = pplVar14[1];
      plStack_e0 = *pplVar14;
      plStack_d0 = pplVar14[2];
      pplVar15 = pplVar14;
    }
    plStack_c8 = pplVar14[3];
    uStack_b0 = *(undefined4 *)(pplVar14 + 6);
    plStack_b8 = pplVar14[5];
    plStack_c0 = pplVar14[4];
    FUN_10ab6f020();
    if (*(char *)((long)pplVar15 + 0x17) < '\0') {
      func_0x000107c3192c(aplStack_a8,*pplVar15,pplVar15[1]);
    }
    else {
      plStack_98 = pplVar15[2];
      aplStack_a8[1] = pplVar15[1];
      aplStack_a8[0] = *pplVar15;
    }
    plStack_90 = pplVar15[3];
    plStack_80 = pplVar15[5];
    plStack_88 = pplVar15[4];
    uStack_78 = *(undefined4 *)(pplVar15 + 6);
    FUN_10ab6f520(auStack_140,&plStack_e0,2);
    lVar30 = lStack_f8;
    *(undefined4 *)(lStack_f8 + 0xf0) = auStack_140[0];
    if ((undefined4 *)(lStack_f8 + 0xf0) != auStack_140) {
      FUN_10a1903c4(lStack_f8 + 0xf8,lStack_138,lStack_130,
                    (lStack_130 - lStack_138 >> 3) * 0x6db6db6db6db6db7);
    }
    *(undefined8 *)(lVar30 + 0x118) = uStack_118;
    *(undefined8 *)(lVar30 + 0x110) = uStack_120;
    *(undefined8 *)(lVar30 + 0x128) = uStack_108;
    *(undefined8 *)(lVar30 + 0x120) = uStack_110;
    *(undefined8 *)(lVar30 + 0x130) = uStack_100;
    plStack_e8 = &lStack_138;
    func_0x00010a190844(&plStack_e8);
    lVar30 = 0;
    do {
      if ((&cStack_91)[lVar30] < '\0') {
        __ZdlPv(*(undefined8 *)((long)aplStack_a8 + lVar30));
      }
      lVar30 = lVar30 + -0x38;
    } while (lVar30 != -0x70);
    *(undefined4 *)(lStack_f8 + 0xec) = 0;
    uVar20 = (ulong)param_4 * (ulong)param_3;
    if ((ulong)param_4 * (ulong)param_3 - 0x10001 < 0xffffffffffff0000) {
      *(undefined4 *)(lStack_f8 + 0xe8) = 2;
      if (0x400000 < uVar20) goto LAB_10a554c58;
      plVar31 = (long *)(lStack_f8 + 0x10);
      lVar30 = *plVar31;
      uVar20 = uVar20 * 0x14;
      uVar23 = *(long *)(lStack_f8 + 0x18) - lVar30;
      if (uVar20 < uVar23 || uVar20 - uVar23 == 0) {
        if (uVar20 < uVar23) {
          *(ulong *)(lStack_f8 + 0x18) = lVar30 + uVar20;
        }
      }
      else {
        func_0x000107c27d58(plVar31,uVar20 - uVar23);
        lVar30 = *plVar31;
      }
      uVar9 = param_3 - 1;
      uVar10 = param_4 - 1;
      plVar31 = (long *)(lStack_f8 + 0x28);
      lVar21 = *plVar31;
      uVar20 = ((ulong)uVar9 * (ulong)uVar10 * 2 + (ulong)uVar9 * (ulong)uVar10) * 8;
      uVar23 = *(long *)(lStack_f8 + 0x30) - lVar21;
      if (uVar20 < uVar23 || uVar20 - uVar23 == 0) {
        if (uVar20 < uVar23) {
          *(ulong *)(lStack_f8 + 0x30) = lVar21 + uVar20;
        }
      }
      else {
        func_0x000107c27d58(plVar31,uVar20 - uVar23);
        lVar21 = *plVar31;
      }
      iVar22 = 0;
      lVar24 = 0;
      lVar25 = 0;
      dVar32 = 0.0;
      uVar27 = 0;
      uVar26 = param_3;
      do {
        lVar16 = 0;
        fVar33 = (float)((dVar32 + 0.5) * (double)(1.0 / (float)param_4));
        dVar32 = dVar32 + 1.0;
        uVar28 = uVar27 + 1;
        puVar19 = (undefined4 *)(lVar30 + 8 + lVar24 * 0x14);
        dVar34 = 0.0;
        do {
          fVar35 = (float)((dVar34 + 0.5) * (double)(1.0 / (float)param_3));
          puVar19[-2] = fVar35 + -0.5;
          puVar19[-1] = fVar33 + -0.5;
          *puVar19 = 0;
          puVar19[1] = fVar35;
          puVar19[2] = fVar33;
          if (((int)uVar27 < (int)uVar10) && (iVar13 = (int)lVar16, iVar13 < (int)uVar9)) {
            iVar2 = iVar22 + iVar13;
            piVar4 = (int *)(lVar21 + lVar25 * 4);
            *piVar4 = iVar2;
            piVar4[1] = iVar2 + 1;
            iVar1 = uVar26 + iVar13 + 1;
            piVar4[2] = iVar1;
            piVar4[3] = iVar1;
            piVar4[4] = uVar26 + iVar13;
            piVar4[5] = iVar2;
            lVar25 = lVar25 + 6;
          }
          dVar34 = dVar34 + 1.0;
          lVar16 = lVar16 + 1;
          puVar19 = puVar19 + 5;
        } while (param_3 != (uint)lVar16);
        lVar24 = lVar24 + lVar16;
        uVar26 = uVar26 + param_3;
        iVar22 = iVar22 + param_3;
        uVar27 = uVar28;
      } while (uVar28 != param_4);
    }
    else {
      plVar31 = (long *)(lStack_f8 + 0x10);
      lVar30 = *plVar31;
      *(undefined4 *)(lStack_f8 + 0xe8) = 1;
      uVar20 = uVar20 * 0x14;
      uVar23 = *(long *)(lStack_f8 + 0x18) - lVar30;
      if (uVar20 < uVar23 || uVar20 - uVar23 == 0) {
        if (uVar20 < uVar23) {
          *(ulong *)(lStack_f8 + 0x18) = lVar30 + uVar20;
        }
      }
      else {
        func_0x000107c27d58(plVar31,uVar20 - uVar23);
        lVar30 = *plVar31;
      }
      uVar9 = param_3 - 1;
      uVar10 = param_4 - 1;
      plVar31 = (long *)(lStack_f8 + 0x28);
      lVar21 = *plVar31;
      uVar20 = ((ulong)uVar9 * (ulong)uVar10 * 2 + (ulong)uVar9 * (ulong)uVar10) * 4;
      uVar23 = *(long *)(lStack_f8 + 0x30) - lVar21;
      if (uVar20 < uVar23 || uVar20 - uVar23 == 0) {
        if (uVar20 < uVar23) {
          *(ulong *)(lStack_f8 + 0x30) = lVar21 + uVar20;
        }
      }
      else {
        func_0x000107c27d58(plVar31,uVar20 - uVar23);
        lVar21 = *plVar31;
      }
      iVar22 = 0;
      lVar24 = 0;
      lVar25 = 0;
      dVar32 = 0.0;
      uVar26 = 0;
      do {
        uVar28 = 0;
        fVar33 = (float)((dVar32 + 0.5) * (double)(1.0 / (float)param_4));
        dVar32 = dVar32 + 1.0;
        uVar27 = uVar26 + 1;
        puVar19 = (undefined4 *)(lVar30 + 8 + lVar24 * 0x14);
        dVar34 = 0.0;
        do {
          fVar35 = (float)((dVar34 + 0.5) * (double)(1.0 / (float)param_3));
          puVar19[-2] = fVar35 + -0.5;
          puVar19[-1] = fVar33 + -0.5;
          *puVar19 = 0;
          puVar19[1] = fVar35;
          puVar19[2] = fVar33;
          if (((int)uVar26 < (int)uVar10) && ((int)uVar28 < (int)uVar9)) {
            sVar7 = (short)iVar22 + (short)uVar28;
            psVar3 = (short *)(lVar21 + lVar25 * 2);
            *psVar3 = sVar7;
            psVar3[1] = sVar7 + 1;
            sVar11 = (short)param_3 + (short)iVar22 + (short)uVar28;
            sVar8 = sVar11 + 1;
            psVar3[2] = sVar8;
            psVar3[3] = sVar8;
            psVar3[4] = sVar11;
            psVar3[5] = sVar7;
            lVar25 = lVar25 + 6;
          }
          dVar34 = dVar34 + 1.0;
          uVar28 = uVar28 + 1;
          puVar19 = puVar19 + 5;
          lVar24 = lVar24 + 1;
        } while (param_3 != uVar28);
        iVar22 = iVar22 + param_3;
        uVar26 = uVar27;
      } while (uVar27 != param_4);
    }
    ppuVar17 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    puVar29 = *ppuVar17;
    plVar18 = (long *)0x108;
    __Znwm();
    plVar18[1] = 0;
    plVar18[2] = 0;
    *plVar18 = (long)&PTR_FUN_110ba2088;
    plVar31 = plVar18 + 3;
    FUN_10a347c5c(plVar31,puVar29,&lStack_f8);
    plStack_e0 = plVar31;
    plStack_d8 = plVar18;
    FUN_10a0cfb64(&plStack_e0,plVar18 + 8,plVar31);
    FUN_10a0cf858(param_1,&plStack_e0);
    plVar31 = plStack_d8;
    if (plStack_d8 != (long *)0x0) {
      plVar18 = plStack_d8 + 1;
      do {
        lVar30 = *plVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *plVar18 = lVar30 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar30 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
      }
    }
    if (plStack_f0 != (long *)0x0) {
      plVar31 = plStack_f0 + 1;
      do {
        lVar30 = *plVar31;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar6) {
          *plVar31 = lVar30 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar30 == 0) {
        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10a554c58:
  FUN_10a00946c(&UNK_10f661a53);
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a554c68);
  (*pcVar12)();
}



/* Entry: 10a554d0c; end: 10a5554b3;  */

void FUN_10a554d0c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf0940;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0xb;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 0xb;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  *(undefined4 *)((long)puVar6 + 7) = 0x7265646c;
  *puVar6 = 0x6c6975426873654d;
  *(undefined1 *)((long)puVar6 + 0xb) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f654f1a;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  pcStack_78 = (char *)0x0;
  uStack_60 = 0;
  pcStack_68 = (char *)0x0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bf0940;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f654f1a,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a5646ac,1,1);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&DAT_10f648172,FUN_10a564dc4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660c79,FUN_10a564f2c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660c81,FUN_10a565048,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660c8c,FUN_10a5650fc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660c9b,FUN_10a565668,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660cb5,FUN_10a565790,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660cca,FUN_10a5658c4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660cd3,FUN_10a565b48,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660ce4,FUN_10a565c64,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660cf2,FUN_10a565dd0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660d00,FUN_10a565ef8,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660d0d,FUN_10a56602c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&DAT_10f34e4cc,FUN_10a5660f4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660d1d,FUN_10a5661b0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660d45,FUN_10a566354,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5554b0;
    FUN_10a054dac(param_1,&UNK_10f660d61,FUN_10a5668a0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f650543,FUN_10a5669bc,FUN_10a566a7c);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f650539,FUN_10a566b7c,FUN_10a566c3c);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66097b,FUN_10a566d3c,FUN_10a566df8);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    pcStack_78 = *(char **)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    pcStack_68 = *(char **)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&UNK_10f654f1a,0xb);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    puStack_a0 = &UNK_10f654f1a;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    pcStack_78 = "";
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    pcStack_68 = "";
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&puStack_a0);
    uVar5 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a5554b0;
      FUN_10a054dac(param_1,&UNK_10f660d6f,FUN_10a566ebc,1,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a5554b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5554b4);
  (*pcVar4)();
}



/* Entry: 10a5554b4; end: 10a5554e3;  */

long FUN_10a5554b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a5610b8(param_1 + 0x20);
  func_0x00010a561060(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 8);
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
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a5554e4; end: 10a55569b;  */

undefined8 * FUN_10a5554e4(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  puVar7 = param_1 + 2;
  param_1[3] = 0;
  *puVar7 = 0;
  puVar8 = param_1 + 4;
  param_1[5] = 0;
  *puVar8 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  plVar3 = (long *)0x220;
  __Znwm();
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar4 = plVar3 + 3;
  *plVar3 = (long)&PTR_FUN_110bf0ac0;
  FUN_10a54bdf4();
  plStack_50 = plVar4;
  plStack_48 = plVar3;
  FUN_10a551e24(puVar8,&plStack_50);
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  FUN_10a5673f4(&plStack_50);
  func_0x00010a551e88(puVar7,&plStack_50);
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  puStack_58 = *ppuVar5;
  FUN_10a551eec(&plStack_50,&puStack_58,puVar7);
  FUN_10a192264(param_1,&plStack_50);
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  FUN_10a54c2ec(*puVar8,param_2);
  return param_1;
}



/* Entry: 10a55569c; end: 10a5557bb;  */

void FUN_10a55569c(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long **pplVar8;
  long **pplVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plStack_a8;
  int iStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 *puStack_78;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar10 = *(long *)(param_1 + 0x20);
  if ((*(char *)(param_1 + 0x30) == '\x01') && (lVar5 = lVar10, FUN_10a54c59c(), (int)lVar5 == 0)) {
    puVar6 = &UNK_10f660dda;
    FUN_10a00946c();
    FUN_10a0cfe2c(&uStack_30);
    __Unwind_Resume();
    lVar10 = *param_2;
    if (lVar10 != 0) {
      FUN_10a555ce8(lVar10,&UNK_10f660d97);
      if ((int)lVar10 != 0) {
        FUN_10a555db4(&plStack_a8,*param_2,&UNK_10f660d97);
        uVar4 = SUB81(&plStack_a8,0);
        FUN_10a36bf34();
        puVar6[0x30] = uVar4;
        if ((3 < iStack_a0) && (puStack_98 != (undefined8 *)0x0)) {
          (**(code **)*puStack_98)();
        }
      }
      puVar11 = (undefined8 *)*param_2;
      if (*(int *)(puVar11 + 1) == 7) {
        plVar7 = (long *)*puVar11;
        (**(code **)(*plVar7 + 0x98))(plVar7,puVar11[2]);
        plVar12 = (long *)*puVar11;
        plStack_a8 = plVar7;
        (**(code **)(*plVar12 + 0xb8))(&iStack_80,plVar12,&UNK_10f660da0,0x14);
        (**(code **)(*plVar12 + 0x1b8))(plVar12,&plStack_a8,&iStack_80);
        if ((undefined8 *)CONCAT44(uStack_7c,iStack_80) != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)CONCAT44(uStack_7c,iStack_80))();
        }
        if (plStack_a8 != (long *)0x0) {
          (**(code **)*plStack_a8)();
        }
        if ((int)plVar12 != 0) {
          puVar11 = (undefined8 *)*param_2;
          plVar7 = (long *)*puVar11;
          func_0x000109884c0c(&puStack_88,puVar11 + 1,plVar7);
          plVar12 = (long *)*puVar11;
          (**(code **)(*plVar12 + 0xb8))(&puStack_90,plVar12,&UNK_10f660da0,0x14);
          (**(code **)(*plVar12 + 0x1a0))(&iStack_80,plVar12,&puStack_88,&puStack_90);
          iStack_a0 = iStack_80;
          if (iStack_80 == 3) {
            puStack_98 = puStack_78;
          }
          else if (iStack_80 == 2) {
            puStack_98 = (undefined8 *)CONCAT71(puStack_98._1_7_,puStack_78._0_1_);
          }
          else if (3 < iStack_80) {
            puStack_98 = puStack_78;
            puStack_78 = (undefined8 *)0x0;
          }
          iStack_80 = 0;
          plStack_a8 = plVar7;
          if (puStack_90 != (undefined8 *)0x0) {
            (**(code **)*puStack_90)();
          }
          if (puStack_88 != (undefined8 *)0x0) {
            (**(code **)*puStack_88)();
          }
          pplVar8 = &plStack_a8;
          FUN_10a555f34();
          if ((3 < iStack_a0) && (puStack_98 != (undefined8 *)0x0)) {
            (**(code **)*puStack_98)();
          }
          lVar10 = *(long *)(puVar6 + 0x20);
          pplVar9 = (long **)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18));
          if (pplVar9 < pplVar8) {
            func_0x000107c31950((long *)(lVar10 + 0x10),
                                (long)pplVar8 +
                                (*(long *)(lVar10 + 0x20) -
                                ((long)pplVar9 + *(long *)(lVar10 + 0x10))));
          }
        }
      }
      puVar11 = (undefined8 *)*param_2;
      if (*(int *)(puVar11 + 1) == 7) {
        plVar7 = (long *)*puVar11;
        (**(code **)(*plVar7 + 0x98))(plVar7,puVar11[2]);
        plVar12 = (long *)*puVar11;
        plStack_a8 = plVar7;
        (**(code **)(*plVar12 + 0xb8))(&iStack_80,plVar12,&UNK_10f660db5,0x13);
        (**(code **)(*plVar12 + 0x1b8))(plVar12,&plStack_a8,&iStack_80);
        if ((undefined8 *)CONCAT44(uStack_7c,iStack_80) != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)CONCAT44(uStack_7c,iStack_80))();
        }
        if (plStack_a8 != (long *)0x0) {
          (**(code **)*plStack_a8)();
        }
        if ((int)plVar12 != 0) {
          puVar11 = (undefined8 *)*param_2;
          plVar7 = (long *)*puVar11;
          func_0x000109884c0c(&puStack_88,puVar11 + 1,plVar7);
          plVar12 = (long *)*puVar11;
          (**(code **)(*plVar12 + 0xb8))(&puStack_90,plVar12,&UNK_10f660db5,0x13);
          (**(code **)(*plVar12 + 0x1a0))(&iStack_80,plVar12,&puStack_88,&puStack_90);
          iStack_a0 = iStack_80;
          if (iStack_80 == 3) {
            puStack_98 = puStack_78;
          }
          else if (iStack_80 == 2) {
            puStack_98 = (undefined8 *)CONCAT71(puStack_98._1_7_,puStack_78._0_1_);
          }
          else if (3 < iStack_80) {
            puStack_98 = puStack_78;
            puStack_78 = (undefined8 *)0x0;
          }
          iStack_80 = 0;
          plStack_a8 = plVar7;
          if (puStack_90 != (undefined8 *)0x0) {
            (**(code **)*puStack_90)();
          }
          if (puStack_88 != (undefined8 *)0x0) {
            (**(code **)*puStack_88)();
          }
          pplVar8 = &plStack_a8;
          FUN_10a555f34();
          if ((3 < iStack_a0) && (puStack_98 != (undefined8 *)0x0)) {
            (**(code **)*puStack_98)();
          }
          lVar10 = *(long *)(puVar6 + 0x20);
          pplVar9 = (long **)(*(long *)(lVar10 + 0x38) - *(long *)(lVar10 + 0x30));
          if (pplVar9 < pplVar8) {
            func_0x000107c31950((long *)(lVar10 + 0x28),
                                (long)pplVar8 +
                                (*(long *)(lVar10 + 0x38) -
                                ((long)pplVar9 + *(long *)(lVar10 + 0x28))));
          }
        }
      }
    }
    return;
  }
  if (*(long *)(lVar10 + 0x88) == *(long *)(lVar10 + 0x90)) {
    FUN_10ab6eee0();
    lVar5 = *(long *)(lVar10 + 0xf8);
    lVar1 = *(long *)(lVar10 + 0x100);
    if (lVar5 == lVar1) {
LAB_10a55570c:
      lVar10 = *(long *)(param_1 + 0x20);
      if ((lVar5 == lVar1) || (lVar5 == 0)) goto LAB_10a55577c;
      FUN_10a39d16c(&uStack_30,lVar10,0xc,0,0);
      FUN_10a54c73c(*(undefined8 *)(param_1 + 0x20),uStack_30);
      if (plStack_28 != (long *)0x0) {
        plVar7 = plStack_28 + 1;
        do {
          lVar10 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
        }
      }
    }
    else {
      do {
        if (*(long *)(lVar5 + 0x18) == lRam0000000113835858) goto LAB_10a55570c;
        lVar5 = lVar5 + 0x38;
      } while (lVar5 != lVar1);
    }
    lVar10 = *(long *)(param_1 + 0x20);
  }
LAB_10a55577c:
  func_0x00010ac28d18(*(undefined8 *)(param_1 + 0x10),lVar10,*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 10a5557bc; end: 10a555ce7;  */

void FUN_10a5557bc(long param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plStack_78;
  int iStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 *puStack_48;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    FUN_10a555ce8(lVar2,&UNK_10f660d97);
    if ((int)lVar2 != 0) {
      FUN_10a555db4(&plStack_78,*param_2,&UNK_10f660d97);
      uVar1 = SUB81(&plStack_78,0);
      FUN_10a36bf34();
      *(undefined1 *)(param_1 + 0x30) = uVar1;
      if ((3 < iStack_70) && (puStack_68 != (undefined8 *)0x0)) {
        (**(code **)*puStack_68)();
      }
    }
    puVar6 = (undefined8 *)*param_2;
    if (*(int *)(puVar6 + 1) == 7) {
      plVar3 = (long *)*puVar6;
      (**(code **)(*plVar3 + 0x98))(plVar3,puVar6[2]);
      plVar7 = (long *)*puVar6;
      plStack_78 = plVar3;
      (**(code **)(*plVar7 + 0xb8))(&iStack_50,plVar7,&UNK_10f660da0,0x14);
      (**(code **)(*plVar7 + 0x1b8))(plVar7,&plStack_78,&iStack_50);
      if ((undefined8 *)CONCAT44(uStack_4c,iStack_50) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)CONCAT44(uStack_4c,iStack_50))();
      }
      if (plStack_78 != (long *)0x0) {
        (**(code **)*plStack_78)();
      }
      if ((int)plVar7 != 0) {
        puVar6 = (undefined8 *)*param_2;
        plVar3 = (long *)*puVar6;
        func_0x000109884c0c(&puStack_58,puVar6 + 1,plVar3);
        plVar7 = (long *)*puVar6;
        (**(code **)(*plVar7 + 0xb8))(&puStack_60,plVar7,&UNK_10f660da0,0x14);
        (**(code **)(*plVar7 + 0x1a0))(&iStack_50,plVar7,&puStack_58,&puStack_60);
        iStack_70 = iStack_50;
        if (iStack_50 == 3) {
          puStack_68 = puStack_48;
        }
        else if (iStack_50 == 2) {
          puStack_68 = (undefined8 *)CONCAT71(puStack_68._1_7_,puStack_48._0_1_);
        }
        else if (3 < iStack_50) {
          puStack_68 = puStack_48;
          puStack_48 = (undefined8 *)0x0;
        }
        iStack_50 = 0;
        plStack_78 = plVar3;
        if (puStack_60 != (undefined8 *)0x0) {
          (**(code **)*puStack_60)();
        }
        if (puStack_58 != (undefined8 *)0x0) {
          (**(code **)*puStack_58)();
        }
        pplVar4 = &plStack_78;
        FUN_10a555f34();
        if ((3 < iStack_70) && (puStack_68 != (undefined8 *)0x0)) {
          (**(code **)*puStack_68)();
        }
        lVar2 = *(long *)(param_1 + 0x20);
        pplVar5 = (long **)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18));
        if (pplVar5 < pplVar4) {
          func_0x000107c31950((long *)(lVar2 + 0x10),
                              (long)pplVar4 +
                              (*(long *)(lVar2 + 0x20) - ((long)pplVar5 + *(long *)(lVar2 + 0x10))))
          ;
        }
      }
    }
    puVar6 = (undefined8 *)*param_2;
    if (*(int *)(puVar6 + 1) == 7) {
      plVar3 = (long *)*puVar6;
      (**(code **)(*plVar3 + 0x98))(plVar3,puVar6[2]);
      plVar7 = (long *)*puVar6;
      plStack_78 = plVar3;
      (**(code **)(*plVar7 + 0xb8))(&iStack_50,plVar7,&UNK_10f660db5,0x13);
      (**(code **)(*plVar7 + 0x1b8))(plVar7,&plStack_78,&iStack_50);
      if ((undefined8 *)CONCAT44(uStack_4c,iStack_50) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)CONCAT44(uStack_4c,iStack_50))();
      }
      if (plStack_78 != (long *)0x0) {
        (**(code **)*plStack_78)();
      }
      if ((int)plVar7 != 0) {
        puVar6 = (undefined8 *)*param_2;
        plVar3 = (long *)*puVar6;
        func_0x000109884c0c(&puStack_58,puVar6 + 1,plVar3);
        plVar7 = (long *)*puVar6;
        (**(code **)(*plVar7 + 0xb8))(&puStack_60,plVar7,&UNK_10f660db5,0x13);
        (**(code **)(*plVar7 + 0x1a0))(&iStack_50,plVar7,&puStack_58,&puStack_60);
        iStack_70 = iStack_50;
        if (iStack_50 == 3) {
          puStack_68 = puStack_48;
        }
        else if (iStack_50 == 2) {
          puStack_68 = (undefined8 *)CONCAT71(puStack_68._1_7_,puStack_48._0_1_);
        }
        else if (3 < iStack_50) {
          puStack_68 = puStack_48;
          puStack_48 = (undefined8 *)0x0;
        }
        iStack_50 = 0;
        plStack_78 = plVar3;
        if (puStack_60 != (undefined8 *)0x0) {
          (**(code **)*puStack_60)();
        }
        if (puStack_58 != (undefined8 *)0x0) {
          (**(code **)*puStack_58)();
        }
        pplVar4 = &plStack_78;
        FUN_10a555f34();
        if ((3 < iStack_70) && (puStack_68 != (undefined8 *)0x0)) {
          (**(code **)*puStack_68)();
        }
        lVar2 = *(long *)(param_1 + 0x20);
        pplVar5 = (long **)(*(long *)(lVar2 + 0x38) - *(long *)(lVar2 + 0x30));
        if (pplVar5 < pplVar4) {
          func_0x000107c31950((long *)(lVar2 + 0x28),
                              (long)pplVar4 +
                              (*(long *)(lVar2 + 0x38) - ((long)pplVar5 + *(long *)(lVar2 + 0x28))))
          ;
        }
      }
    }
  }
  return;
}



/* Entry: 10a555ce8; end: 10a555db3;  */

long * FUN_10a555ce8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puStack_30;
  long *plStack_28;
  
  if (*(int *)(param_1 + 1) == 7) {
    plVar1 = (long *)*param_1;
    (**(code **)(*plVar1 + 0x98))(plVar1,param_1[2]);
    plVar3 = (long *)*param_1;
    uVar2 = param_2;
    plStack_28 = plVar1;
    _strlen(param_2);
    (**(code **)(*plVar3 + 0xb8))(&puStack_30,plVar3,param_2,uVar2);
    (**(code **)(*plVar3 + 0x1b8))(plVar3,&plStack_28,&puStack_30);
    if (puStack_30 != (undefined8 *)0x0) {
      (**(code **)*puStack_30)();
    }
    if (plStack_28 != (long *)0x0) {
      (**(code **)*plStack_28)();
    }
  }
  else {
    plVar3 = (long *)0x0;
  }
  return plVar3;
}



/* Entry: 10a555db4; end: 10a555f33;  */

void FUN_10a555db4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  int aiStack_50 [2];
  undefined8 uStack_48;
  
  uVar2 = *param_2;
  func_0x000109884c0c(&puStack_58,param_2 + 1,uVar2);
  plVar3 = (long *)*param_2;
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*plVar3 + 0xb8))(&puStack_60,plVar3,param_3,uVar1);
  (**(code **)(*plVar3 + 0x1a0))(aiStack_50,plVar3,&puStack_58,&puStack_60);
  *param_1 = uVar2;
  *(int *)(param_1 + 1) = aiStack_50[0];
  if (aiStack_50[0] == 3) {
    param_1[2] = uStack_48;
  }
  else if (aiStack_50[0] == 2) {
    *(undefined1 *)(param_1 + 2) = (undefined1)uStack_48;
  }
  else if (3 < aiStack_50[0]) {
    param_1[2] = uStack_48;
    uStack_48 = 0;
  }
  aiStack_50[0] = 0;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  return;
}



/* Entry: 10a555f34; end: 10a555f93;  */

void FUN_10a555f34(undefined8 *param_1)

{
  func_0x00010a13627c(*param_1,param_1 + 1);
  return;
}



/* Entry: 10a555f94; end: 10a556077;  */

void FUN_10a555f94(long param_1,ulong param_2,long *param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_38 [24];
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar3 = (ulong)*(uint *)(lVar5 + 0xf0);
  if (*(uint *)(lVar5 + 0xf0) != 0) {
    uVar4 = *(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 0x10);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar4 / uVar3;
    }
    if (param_2 < uVar2) {
      uVar2 = param_3[1] - *param_3;
      if (uVar2 == uVar3) {
        uVar2 = uVar2 * param_2;
        if (uVar2 < uVar4) {
          _memcpy(*(long *)(lVar5 + 0x10) + uVar2,*param_3);
          FUN_10ab4e0a4(lVar5);
          *(undefined1 *)(lVar5 + 0x1ec) = 1;
          return;
        }
      }
      else {
        FUN_10a0ee900(auStack_38,&UNK_10f6606e3,0x33);
        FUN_10a0029c0(auStack_38);
      }
      goto LAB_10a556054;
    }
  }
  FUN_10a0ee900(auStack_38,&UNK_10f6606b0,0x32);
  FUN_10a0029c0(auStack_38);
LAB_10a556054:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a556058);
  (*pcVar1)();
}



/* Entry: 10a556078; end: 10a55673b;  */

/* WARNING: Removing unreachable block (ram,0x00010a556518) */
/* WARNING: Removing unreachable block (ram,0x00010a55666c) */

void FUN_10a556078(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 *******pppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ***pppuVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *******pppppppuVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 ******ppppppuStack_268;
  ulong uStack_260;
  byte bStack_251;
  undefined8 ******ppppppuStack_250;
  ulong uStack_248;
  byte bStack_239;
  undefined8 ******appppppuStack_238 [2];
  char cStack_221;
  undefined8 *****pppppuStack_220;
  undefined8 *****pppppuStack_218;
  undefined8 *****pppppuStack_210;
  undefined8 ****ppppuStack_200;
  undefined8 ****ppppuStack_1f8;
  undefined8 ****ppppuStack_1f0;
  undefined8 ***pppuStack_1e0;
  undefined8 ***pppuStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 **ppuStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  ulong uStack_160;
  byte bStack_151;
  undefined8 *****pppppuStack_150;
  undefined8 uStack_148;
  undefined8 ******ppppppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  undefined8 ******ppppppuStack_120;
  long lStack_118;
  char cStack_109;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulong uStack_100;
  byte bStack_f1;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined4 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined4 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined4 uStack_88;
  undefined1 auStack_80 [24];
  undefined4 uStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ad04458(&ppppppuStack_120,&DAT_10e4c9cb6);
  pppppppuVar12 = (undefined8 *******)ppppppuStack_120;
  if (-1 < (long)cStack_109) {
    pppppppuVar12 = &ppppppuStack_120;
  }
  if (-1 < cStack_109) {
    lStack_118 = (long)cStack_109;
  }
  do {
    lVar13 = lStack_118;
    if (lVar13 == 0) {
      lVar13 = 0;
      break;
    }
    lStack_118 = lVar13 + -1;
  } while (*(char *)((long)pppppppuVar12 + lVar13 + -1) != ':');
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (&ppppppuStack_138,&ppppppuStack_120,lVar13,0xffffffffffffffff,&uStack_108);
  uStack_108 = 0;
  func_0x000107c2b054(&uStack_100,&UNK_10f650574);
  uStack_e8 = 1;
  func_0x000107c2b054(auStack_e0,&UNK_10f65057e);
  uStack_c8 = 2;
  func_0x000107c2b054(auStack_c0,&UNK_10f65058c);
  uStack_a8 = 3;
  func_0x000107c2b054(auStack_a0,&UNK_10f650598);
  uStack_88 = 4;
  func_0x000107c2b054(auStack_80,&UNK_10f65059f);
  uStack_68 = 5;
  func_0x000107c2b054(auStack_60,&UNK_10f6505a5);
  FUN_10a387cc8(&pppppuStack_150,&uStack_108,6,&uStack_168);
  lVar13 = 0;
  do {
    if ((&cStack_49)[lVar13] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
    }
    lVar13 = lVar13 + -0x20;
  } while (lVar13 != -0xc0);
  uStack_168 = *(undefined4 *)(*(long *)(param_2 + 0x20) + 0xec);
  FUN_10a3490a4(&uStack_108,&pppppuStack_150,&uStack_168,&UNK_10f6505af);
  pcVar1 = "true";
  if (*(char *)(*(long *)(param_2 + 0x10) + 0xe8) == '\0') {
    pcVar1 = "false";
  }
  func_0x000107c2b054(&uStack_168,pcVar1);
  uVar4 = uStack_130;
  if (-1 < (char)bStack_121) {
    uVar4 = (ulong)bStack_121;
  }
  FUN_10a003c90(appppppuStack_238,uVar4 + 0x10,&ppppppuStack_250);
  pppppppuVar12 = (undefined8 *******)appppppuStack_238[0];
  if (-1 < cStack_221) {
    pppppppuVar12 = appppppuStack_238;
  }
  if (uVar4 != 0) {
    pppppppuVar5 = (undefined8 *******)ppppppuStack_138;
    if (-1 < (char)bStack_121) {
      pppppppuVar5 = &ppppppuStack_138;
    }
    _memmove(pppppppuVar12,pppppppuVar5,uVar4);
  }
  puVar11 = (undefined8 *)((long)pppppppuVar12 + uVar4);
  puVar11[1] = 0x203a746e756f4373;
  *puVar11 = 0x6563697472657620;
  *(undefined1 *)(puVar11 + 2) = 0;
  lVar13 = *(long *)(param_2 + 0x20);
  uVar2 = *(uint *)(lVar13 + 0xf0);
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)uVar2 != 0) {
      uVar4 = (ulong)(*(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10)) / (ulong)uVar2;
    }
  }
  __ZNSt3__19to_stringEm(&ppppppuStack_250,uVar4);
  pppppppuVar12 = (undefined8 *******)ppppppuStack_250;
  if (-1 < (char)bStack_239) {
    uStack_248 = (ulong)bStack_239;
    pppppppuVar12 = &ppppppuStack_250;
  }
  pppppppuVar5 = appppppuStack_238;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar5,pppppppuVar12,uStack_248);
  pppppuStack_218 = pppppppuVar5[1];
  pppppuStack_220 = *pppppppuVar5;
  pppppuStack_210 = pppppppuVar5[2];
  pppppppuVar5[1] = (undefined8 ******)0x0;
  pppppppuVar5[2] = (undefined8 ******)0x0;
  *pppppppuVar5 = (undefined8 ******)0x0;
  ppppppuVar6 = &pppppuStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar6,&UNK_10f660e8c,0x10);
  ppppuStack_1f8 = ppppppuVar6[1];
  ppppuStack_200 = *ppppppuVar6;
  ppppuStack_1f0 = ppppppuVar6[2];
  ppppppuVar6[1] = (undefined8 *****)0x0;
  ppppppuVar6[2] = (undefined8 *****)0x0;
  *ppppppuVar6 = (undefined8 *****)0x0;
  __ZNSt3__19to_stringEm
            (&ppppppuStack_268,
             (ulong)(*(long *)(*(long *)(param_2 + 0x20) + 0x30) -
                    *(long *)(*(long *)(param_2 + 0x20) + 0x28)) >> 1);
  pppppppuVar12 = (undefined8 *******)ppppppuStack_268;
  if (-1 < (char)bStack_251) {
    uStack_260 = (ulong)bStack_251;
    pppppppuVar12 = &ppppppuStack_268;
  }
  pppppuVar7 = &ppppuStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar7,pppppppuVar12,uStack_260);
  pppuStack_1d8 = pppppuVar7[1];
  pppuStack_1e0 = *pppppuVar7;
  pppuStack_1d0 = pppppuVar7[2];
  pppppuVar7[1] = (undefined8 ****)0x0;
  pppppuVar7[2] = (undefined8 ****)0x0;
  *pppppuVar7 = (undefined8 ****)0x0;
  ppppuVar8 = &pppuStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar8,&UNK_10f6505c2,0xc);
  ppuStack_1b8 = ppppuVar8[1];
  ppuStack_1c0 = *ppppuVar8;
  ppuStack_1b0 = ppppuVar8[2];
  ppppuVar8[1] = (undefined8 ***)0x0;
  ppppuVar8[2] = (undefined8 ***)0x0;
  *ppppuVar8 = (undefined8 ***)0x0;
  puVar3 = (undefined4 *)CONCAT44(uStack_104,uStack_108);
  if (-1 < (char)bStack_f1) {
    uStack_100 = (ulong)bStack_f1;
    puVar3 = &uStack_108;
  }
  pppuVar9 = &ppuStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar9,puVar3,uStack_100);
  puStack_198 = pppuVar9[1];
  puStack_1a0 = *pppuVar9;
  puStack_190 = pppuVar9[2];
  pppuVar9[1] = (undefined8 **)0x0;
  pppuVar9[2] = (undefined8 **)0x0;
  *pppuVar9 = (undefined8 **)0x0;
  ppuVar10 = &puStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar10,&UNK_10f660e9d,0x1e);
  uStack_178 = ppuVar10[1];
  uStack_180 = *ppuVar10;
  lStack_170 = (long)ppuVar10[2];
  ppuVar10[1] = (undefined8 *)0x0;
  ppuVar10[2] = (undefined8 *)0x0;
  *ppuVar10 = (undefined8 *)0x0;
  puVar3 = (undefined4 *)CONCAT44(uStack_164,uStack_168);
  if (-1 < (char)bStack_151) {
    uStack_160 = (ulong)bStack_151;
    puVar3 = &uStack_168;
  }
  puVar11 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar11,puVar3,uStack_160);
  uVar14 = *puVar11;
  param_1[1] = puVar11[1];
  *param_1 = uVar14;
  param_1[2] = puVar11[2];
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if ((long)puStack_190 < 0) {
    __ZdlPv(puStack_1a0);
  }
  if ((long)ppuStack_1b0 < 0) {
    __ZdlPv(ppuStack_1c0);
  }
  if ((long)pppuStack_1d0 < 0) {
    __ZdlPv(pppuStack_1e0);
  }
  if ((char)bStack_251 < '\0') {
    __ZdlPv(ppppppuStack_268);
  }
  if ((long)ppppuStack_1f0 < 0) {
    __ZdlPv(ppppuStack_200);
  }
  if ((long)pppppuStack_210 < 0) {
    __ZdlPv(pppppuStack_220);
  }
  if ((char)bStack_239 < '\0') {
    __ZdlPv(ppppppuStack_250);
  }
  if (cStack_221 < '\0') {
    __ZdlPv(appppppuStack_238[0]);
  }
  if ((char)bStack_151 < '\0') {
    __ZdlPv(CONCAT44(uStack_164,uStack_168));
  }
  pppppppuVar12 = (undefined8 *******)&pppppuStack_150;
  func_0x00010a3880b4(pppppppuVar12,uStack_148);
  if ((char)bStack_121 < '\0') {
    pppppppuVar12 = (undefined8 *******)ppppppuStack_138;
    __ZdlPv(ppppppuStack_138);
  }
  if (cStack_109 < '\0') {
    pppppppuVar12 = (undefined8 *******)ppppppuStack_120;
    __ZdlPv(ppppppuStack_120);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (lStack_170 < 0) {
      __ZdlPv(uStack_180);
    }
    if ((long)puStack_190 < 0) {
      __ZdlPv(puStack_1a0);
    }
    if ((long)ppuStack_1b0 < 0) {
      __ZdlPv(ppuStack_1c0);
    }
    if ((long)pppuStack_1d0 < 0) {
      __ZdlPv(pppuStack_1e0);
    }
    if ((char)bStack_251 < '\0') {
      __ZdlPv(ppppppuStack_268);
    }
    if ((long)ppppuStack_1f0 < 0) {
      __ZdlPv(ppppuStack_200);
    }
    if ((long)pppppuStack_210 < 0) {
      __ZdlPv(pppppuStack_220);
    }
    if ((char)bStack_239 < '\0') {
      __ZdlPv(ppppppuStack_250);
    }
    if (cStack_221 < '\0') {
      __ZdlPv(appppppuStack_238[0]);
    }
    if ((char)bStack_151 < '\0') {
      __ZdlPv(CONCAT44(uStack_164,uStack_168));
    }
    func_0x00010a3880b4(&pppppuStack_150,uStack_148);
    do {
      if ((char)bStack_121 < '\0') {
        __ZdlPv(ppppppuStack_138);
      }
      if (cStack_109 < '\0') {
        __ZdlPv(ppppppuStack_120);
      }
      __Unwind_Resume(pppppppuVar12);
    } while( true );
  }
  return;
}



/* Entry: 10a55673c; end: 10a5569eb;  */

void FUN_10a55673c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf0978;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0x10;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 0x10;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  puVar6[1] = 0x65676445656e696c;
  *puVar6 = 0x74754f6870796c47;
  *(undefined1 *)(puVar6 + 2) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f6619b2;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bf0978;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f6619b2,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5569e8;
    FUN_10a054dac(param_1,&UNK_10f660ebc,FUN_10a56746c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5569e8;
    FUN_10a054dac(param_1,&UNK_10f660ecb,FUN_10a5675a8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5569e8;
    FUN_10a054dac(param_1,&UNK_10f660edb,FUN_10a567668,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5569e8;
    FUN_10a054dac(param_1,&UNK_10f660eef,FUN_10a567724,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&UNK_10f6619b2,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a5569e8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5569ec);
  (*pcVar4)();
}



/* Entry: 10a5569ec; end: 10a556bef;  */

void FUN_10a5569ec(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = &UNK_10f6619c3;
  uStack_80 = 0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a5677e0(param_1,&puStack_88,0x19);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f660f04;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a5678d0();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f660f0d;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a567d68(param_1,&puStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f660f18;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a567ec8(param_1,&puStack_88,0);
  FUN_10a567fec(param_1);
  return;
}



/* Entry: 10a556bf0; end: 10a556cff;  */

float FUN_10a556bf0(float param_1,float param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_3;
  if (param_4 != 4) {
    if (param_4 == 3) {
      return (param_2 * fVar1) / param_1;
    }
    if (param_4 == 0) {
      fVar2 = fVar1;
      if (param_2 < param_1) {
        fVar2 = (param_2 * fVar1) / param_1;
      }
      if (param_1 < param_2) {
        fVar2 = fVar1;
      }
      return fVar2;
    }
  }
  return fVar1;
}



/* Entry: 10a556d00; end: 10a556e67;  */

long * FUN_10a556d00(long *param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)&PTR_FUN_110c49f98;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_10a19079c();
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  param_1[0x23] = -1;
  param_1[0x22] = -1;
  param_1[0x25] = -1;
  param_1[0x24] = -1;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = (long)&PTR_DAT_110c4a7c8;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = -1;
  param_1[0x34] = -1;
  *(undefined4 *)(param_1 + 0x35) = 2;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1ec) = 1;
  *param_1 = (long)&PTR_FUN_110bf0508;
  param_1[0x36] = (long)&PTR_DAT_110bf0560;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((long)param_1 + 500) = 0;
  param_1[0x3f] = 0x100000001;
  auVar1 = NEON_fmov(0x3f800000,4);
  param_1[0x41] = 0x3f8000003f800000;
  param_1[0x40] = 0;
  param_1[0x43] = auVar1._8_8_;
  param_1[0x42] = auVar1._0_8_;
  FUN_10a558b54(param_1);
  if (*(char *)((long)param_1 + 0x1ec) == '\x01') {
    (**(code **)(*param_1 + 0x40))(param_1);
    *(undefined1 *)((long)param_1 + 0x1ec) = 0;
  }
  return param_1;
}



/* Entry: 10a556e68; end: 10a556e9b;  */

float FUN_10a556e68(long param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = 1.0;
  if (1.1920929e-07 < ABS(*(float *)(param_1 + 0x21c))) {
    fVar3 = ABS(*(float *)(param_1 + 0x218) / *(float *)(param_1 + 0x21c));
  }
  fVar4 = *(float *)(param_1 + 0x210);
  cVar1 = *(char *)(param_1 + 500);
  fVar2 = *(float *)(param_1 + 0x208);
  if (cVar1 != '\x04') {
    if (cVar1 == '\x03') {
      return (fVar4 * fVar2) / fVar3;
    }
    if (cVar1 == '\0') {
      fVar5 = fVar2;
      if (fVar4 < fVar3) {
        fVar5 = (fVar4 * fVar2) / fVar3;
      }
      if (fVar3 < fVar4) {
        fVar5 = fVar2;
      }
      return fVar5;
    }
  }
  return fVar2;
}



/* Entry: 10a556e9c; end: 10a557aaf;  */

void FUN_10a556e9c(float param_1,float param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  uint uVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  float *pfVar26;
  bool bVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  undefined8 *puVar33;
  ulong uVar34;
  undefined8 *puVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  long lStack_190;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 auStack_c8 [5];
  
  FUN_10a556e68();
  fVar46 = 1.0;
  if (1.1920929e-07 < ABS(*(float *)(param_3 + 0x21c))) {
    fVar46 = ABS(*(float *)(param_3 + 0x218) / *(float *)(param_3 + 0x21c));
  }
  bVar2 = *(byte *)(param_3 + 0x1f0);
  bVar7 = *(byte *)(param_3 + 0x1f1);
  if (0x16c16c1 <
      ((uint)*(ushort *)(param_3 + 0x1f2) * -0x5b05b05b >> 2 |
      (uint)*(ushort *)(param_3 + 0x1f2) * 0x40000000)) {
    bVar2 = *(byte *)(param_3 + 0x1f1);
    bVar7 = *(byte *)(param_3 + 0x1f0);
  }
  uVar5 = *(undefined1 *)(param_3 + 500);
  iVar23 = *(int *)(param_3 + 0x1f8);
  iVar3 = *(int *)(param_3 + 0x1fc);
  uVar43 = *(undefined8 *)(param_3 + 0x200);
  fVar52 = (float)((ulong)uVar43 >> 0x20);
  fVar44 = (param_1 + param_1 * (float)uVar43) * -0.5;
  fVar45 = (param_2 + param_2 * fVar52) * -0.5;
  *(ulong *)(param_3 + 0x144) = CONCAT44(fVar45,fVar44);
  *(undefined4 *)(param_3 + 0x14c) = 0x80000000;
  *(float *)(param_3 + 0x138) = param_1 + fVar44;
  *(float *)(param_3 + 0x13c) = param_2 + fVar45;
  *(undefined4 *)(param_3 + 0x140) = 0;
  fVar44 = (fVar44 + param_1 + fVar44) * 0.5;
  fVar45 = (fVar45 + param_2 + fVar45) * 0.5;
  fVar50 = fVar44 + param_1 * -0.5;
  fVar44 = fVar44 + param_1 * 0.5;
  fVar51 = fVar45 + param_2 * -0.5;
  fVar45 = fVar45 + param_2 * 0.5;
  fStack_108 = fVar44;
  fStack_104 = fVar45;
  fStack_100 = fVar50;
  fStack_fc = fVar51;
  func_0x00010a556c50(fVar46,*(undefined4 *)(param_3 + 0x210),uVar43,fVar52,uVar5,&fStack_100,
                      &fStack_108);
  lVar13 = *(long *)(param_3 + 0x10);
  uVar1 = iVar23 + 1;
  uVar32 = (ulong)uVar1;
  lVar30 = (long)(int)((iVar3 + 1U) * uVar1);
  uVar16 = (ulong)*(uint *)(param_3 + 0xf0) * lVar30;
  uVar18 = *(long *)(param_3 + 0x18) - lVar13;
  if (uVar16 < uVar18 || uVar16 - uVar18 == 0) {
    if (uVar16 < uVar18) {
      *(ulong *)(param_3 + 0x18) = lVar13 + uVar16;
    }
  }
  else {
    func_0x000107c27d58((long *)(param_3 + 0x10),uVar16 - uVar18);
  }
  fVar47 = *(float *)(param_3 + 0x1d8);
  fVar41 = *(float *)(param_3 + 0x1e8);
  fVar36 = *(float *)(param_3 + 0x1e4);
  fVar37 = *(float *)(param_3 + 0x1dc);
  fVar38 = *(float *)(param_3 + 0x1e0);
  fVar49 = *(float *)(param_3 + 0x1d4);
  lStack_120 = 0;
  lStack_118 = 0;
  uStack_110 = 0;
  func_0x0001096b5198(&lStack_120,lVar30);
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  func_0x0001096b5544(&lStack_138,lVar30);
  lStack_150 = 0;
  lStack_148 = 0;
  uStack_140 = 0;
  func_0x0001096b5544(&lStack_150,lVar30);
  uVar40 = NEON_fmov(0x3f800000,4);
  fVar39 = 1.0;
  if (1.1920929e-07 < ABS(*(float *)(param_3 + 0x21c))) {
    fVar39 = ABS(*(float *)(param_3 + 0x218) / *(float *)(param_3 + 0x21c));
  }
  fVar39 = (param_1 / param_2) * fVar39;
  fVar48 = *(float *)(param_3 + 0x214);
  auStack_c8[0] = uVar40;
  fVar42 = fVar48;
  func_0x00010a556bf0(auStack_c8,uVar5);
  fStack_160 = fVar44;
  fStack_15c = fVar45;
  fStack_158 = fVar50;
  fStack_154 = fVar51;
  func_0x00010a556c50(fVar46,fVar48,uVar43,fVar52,uVar5,&fStack_158,&fStack_160);
  *(undefined8 *)(param_3 + 0x140) = 0x7f7fffffff7fffff;
  *(undefined8 *)(param_3 + 0x138) = 0xff7fffffff7fffff;
  *(undefined8 *)(param_3 + 0x148) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_3 + 0x150) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_3 + 0x158) = 0xff7fffffff7fffff;
  if (-1 < iVar3) {
    uVar16 = 0;
    do {
      if (-1 < iVar23) {
        uVar18 = 0;
        fVar46 = fVar51 + ((fVar45 - fVar51) / (float)iVar3) * (float)(uVar16 & 0xffffffff);
        do {
          uVar34 = uVar18 + uVar16 * uVar32;
          uVar29 = (lStack_118 - lStack_120 >> 2) * -0x5555555555555555;
          if (uVar29 < uVar34 || uVar29 - uVar34 == 0) goto LAB_10a557a44;
          fVar52 = fVar50 + ((fVar44 - fVar50) / (float)iVar23) * (float)(uVar18 & 0xffffffff);
          pfVar26 = (float *)(lStack_120 + uVar34 * 0xc);
          *pfVar26 = fVar52;
          pfVar26[1] = fVar46;
          pfVar26[2] = 0.0;
          uVar29 = (lStack_118 - lStack_120 >> 2) * -0x5555555555555555;
          if (uVar29 < uVar34 || uVar29 - uVar34 == 0) goto LAB_10a557a44;
          pfVar26 = (float *)(lStack_120 + uVar34 * 0xc);
          fVar48 = *pfVar26;
          if (*(float *)(param_3 + 0x144) <= *pfVar26) {
            fVar48 = *(float *)(param_3 + 0x144);
          }
          *(float *)(param_3 + 0x144) = fVar48;
          fVar48 = *pfVar26;
          if (*pfVar26 <= *(float *)(param_3 + 0x138)) {
            fVar48 = *(float *)(param_3 + 0x138);
          }
          *(float *)(param_3 + 0x138) = fVar48;
          fVar48 = pfVar26[1];
          if (*(float *)(param_3 + 0x148) <= pfVar26[1]) {
            fVar48 = *(float *)(param_3 + 0x148);
          }
          *(float *)(param_3 + 0x148) = fVar48;
          fVar48 = pfVar26[1];
          if (pfVar26[1] <= *(float *)(param_3 + 0x13c)) {
            fVar48 = *(float *)(param_3 + 0x13c);
          }
          *(float *)(param_3 + 0x13c) = fVar48;
          fVar48 = pfVar26[2];
          if (*(float *)(param_3 + 0x14c) <= pfVar26[2]) {
            fVar48 = *(float *)(param_3 + 0x14c);
          }
          *(float *)(param_3 + 0x14c) = fVar48;
          fVar48 = pfVar26[2];
          if (pfVar26[2] <= *(float *)(param_3 + 0x140)) {
            fVar48 = *(float *)(param_3 + 0x140);
          }
          *(float *)(param_3 + 0x140) = fVar48;
          if ((ulong)(lStack_130 - lStack_138 >> 3) <= uVar34) goto LAB_10a557a44;
          pfVar26 = (float *)(lStack_138 + uVar34 * 8);
          *pfVar26 = (fVar52 - fStack_100) / (fStack_108 - fStack_100) + 0.0;
          pfVar26[1] = (fVar46 - fStack_fc) / (fStack_104 - fStack_fc) + 0.0;
          if ((ulong)(lStack_148 - lStack_150 >> 3) <= uVar34) goto LAB_10a557a44;
          pfVar26 = (float *)(lStack_150 + uVar34 * 8);
          *pfVar26 = (fVar52 - fStack_158) / (fStack_160 - fStack_158) + 0.0;
          pfVar26[1] = (fVar46 - fStack_154) / (fStack_15c - fStack_154) + 0.0;
          if ((ulong)(lStack_148 - lStack_150 >> 3) <= uVar34) goto LAB_10a557a44;
          uVar43 = *(undefined8 *)(lStack_150 + uVar34 * 8);
          *(ulong *)(lStack_150 + uVar34 * 8) =
               CONCAT44((float)((ulong)uVar43 >> 0x20) / fVar42,(float)uVar43 / fVar39);
          if ((bVar2 & 1) != 0) {
            if ((ulong)(lStack_130 - lStack_138 >> 3) <= uVar34) goto LAB_10a557a44;
            lVar13 = uVar34 * 8;
            *(float *)(lStack_138 + lVar13) = 1.0 - *(float *)(lStack_138 + lVar13);
            if ((ulong)(lStack_148 - lStack_150 >> 3) <= uVar34) goto LAB_10a557a44;
            *(float *)(lStack_150 + lVar13) = 1.0 - *(float *)(lStack_150 + lVar13);
          }
          if ((bVar7 & 1) != 0) {
            if (((ulong)(lStack_130 - lStack_138 >> 3) <= uVar34) ||
               (lVar13 = lStack_138 + uVar34 * 8,
               *(float *)(lVar13 + 4) = 1.0 - *(float *)(lVar13 + 4),
               (ulong)(lStack_148 - lStack_150 >> 3) <= uVar34)) goto LAB_10a557a44;
            lVar13 = lStack_150 + uVar34 * 8;
            *(float *)(lVar13 + 4) = 1.0 - *(float *)(lVar13 + 4);
          }
          if ((ulong)(lStack_130 - lStack_138 >> 3) <= uVar34) goto LAB_10a557a44;
          lVar30 = 0;
          lVar13 = lStack_138 + uVar34 * 8;
          bVar9 = true;
          do {
            bVar27 = bVar9;
            fVar52 = *(float *)(lVar13 + lVar30);
            fVar48 = *(float *)(param_3 + 0x150 + lVar30);
            if (fVar48 <= fVar52) {
              fVar52 = fVar48;
            }
            *(float *)(param_3 + 0x150 + lVar30) = fVar52;
            fVar48 = *(float *)(param_3 + 0x158 + lVar30);
            fVar52 = *(float *)(lVar13 + lVar30);
            if (fVar52 <= fVar48) {
              fVar52 = fVar48;
            }
            *(float *)(param_3 + 0x158 + lVar30) = fVar52;
            lVar30 = 4;
            bVar9 = false;
          } while (bVar27);
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar32);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != iVar3 + 1U);
  }
  lStack_178 = 0;
  lStack_170 = 0;
  uStack_168 = 0;
  if ((lStack_118 - lStack_120 != 0x30) &&
     (uVar6 = iVar23 * iVar3 * 2,
     func_0x0001074287b0(&lStack_178,
                         (-(ulong)((iVar23 * iVar3 & 0x7fffffffU) >> 0x1e) & 0xfffffffe00000000 |
                         (ulong)uVar6 << 1) + (long)(int)uVar6), 0 < iVar3)) {
    iVar12 = 0;
    iVar15 = 0;
    uVar16 = lStack_170 - lStack_178 >> 2;
    iVar22 = 2;
    do {
      if (0 < iVar23) {
        lVar13 = 0;
        lVar30 = (long)iVar15;
        piVar10 = (int *)(lStack_178 + 0xc + (long)iVar15 * 4);
        uVar18 = uVar32;
        iVar25 = iVar23;
        iVar28 = iVar22;
        do {
          if ((uVar16 <= (ulong)(lVar30 + lVar13)) ||
             (piVar10[-3] = iVar28 + -2, uVar16 <= lVar30 + lVar13 + 1U)) goto LAB_10a557a44;
          piVar10[-2] = iVar28 + -1;
          if (uVar16 <= lVar30 + lVar13 + 2U) goto LAB_10a557a44;
          iVar11 = (int)uVar18;
          piVar10[-1] = iVar11;
          if (uVar16 <= lVar30 + lVar13 + 3U) goto LAB_10a557a44;
          *piVar10 = iVar28 + -1;
          if (uVar16 <= lVar30 + lVar13 + 4U) goto LAB_10a557a44;
          uVar18 = (ulong)(iVar11 + 1U);
          piVar10[1] = iVar11 + 1U;
          if (uVar16 <= lVar30 + lVar13 + 5U) goto LAB_10a557a44;
          iVar28 = iVar28 + 1;
          piVar10[2] = iVar11;
          lVar13 = lVar13 + 6;
          piVar10 = piVar10 + 6;
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        iVar15 = iVar15 + (int)lVar13;
      }
      iVar12 = iVar12 + 1;
      iVar22 = iVar22 + uVar1;
      uVar32 = (ulong)((int)uVar32 + uVar1);
    } while (iVar12 != iVar3);
  }
  uVar1 = *(uint *)(param_3 + 0x110);
  if (uVar1 == 0xffffffff) {
    lVar13 = 0;
  }
  else {
    uVar16 = (*(long *)(param_3 + 0x100) - *(long *)(param_3 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar16 < uVar1 || uVar16 - uVar1 == 0) goto LAB_10a557a40;
    lVar13 = *(long *)(param_3 + 0xf8) + (ulong)uVar1 * 0x38;
  }
  uVar1 = *(uint *)(param_3 + 0x114);
  if (uVar1 == 0xffffffff) {
    lVar30 = 0;
  }
  else {
    uVar16 = (*(long *)(param_3 + 0x100) - *(long *)(param_3 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar16 < uVar1 || uVar16 - uVar1 == 0) goto LAB_10a557a40;
    lVar30 = *(long *)(param_3 + 0xf8) + (ulong)uVar1 * 0x38;
  }
  uVar1 = *(uint *)(param_3 + 0x120);
  if (uVar1 == 0xffffffff) {
    lVar19 = 0;
  }
  else {
    uVar16 = (*(long *)(param_3 + 0x100) - *(long *)(param_3 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar16 < uVar1 || uVar16 - uVar1 == 0) goto LAB_10a557a40;
    lVar19 = *(long *)(param_3 + 0xf8) + (ulong)uVar1 * 0x38;
  }
  uVar1 = *(uint *)(param_3 + 0x124);
  if (uVar1 == 0xffffffff) {
    lVar17 = 0;
  }
  else {
    uVar16 = (*(long *)(param_3 + 0x100) - *(long *)(param_3 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar16 < uVar1 || uVar16 - uVar1 == 0) goto LAB_10a557a40;
    lVar17 = *(long *)(param_3 + 0xf8) + (ulong)uVar1 * 0x38;
  }
  uVar1 = *(uint *)(param_3 + 0x118);
  if (uVar1 == 0xffffffff) {
    lVar14 = 0;
  }
  else {
    uVar16 = (*(long *)(param_3 + 0x100) - *(long *)(param_3 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar16 < uVar1 || uVar16 - uVar1 == 0) {
LAB_10a557a40:
      FUN_10ab725fc();
LAB_10a557a44:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a557a48);
      (*pcVar8)();
    }
    lVar14 = *(long *)(param_3 + 0xf8) + (ulong)uVar1 * 0x38;
  }
  uVar1 = *(int *)(lVar13 + 0x24) - 1;
  if (uVar1 < 7) {
    iVar23 = *(int *)(&UNK_10e4c9f10 + (ulong)uVar1 * 4);
  }
  else {
    iVar23 = 0;
  }
  if (*(int *)(lVar13 + 0x28) * iVar23 == 0xc) {
    puVar31 = (undefined8 *)(*(long *)(param_3 + 0x10) + (ulong)*(uint *)(lVar13 + 0x30));
    uVar16 = (ulong)*(uint *)(param_3 + 0xf0);
  }
  else {
    puVar31 = (undefined8 *)0x0;
    uVar16 = 0;
  }
  uVar1 = *(int *)(lVar30 + 0x24) - 1;
  if (uVar1 < 7) {
    iVar23 = *(int *)(&UNK_10e4c9f10 + (ulong)uVar1 * 4);
  }
  else {
    iVar23 = 0;
  }
  if (*(int *)(lVar30 + 0x28) * iVar23 == 0xc) {
    lVar13 = *(long *)(param_3 + 0x10) + (ulong)*(uint *)(lVar30 + 0x30);
    uVar18 = (ulong)*(uint *)(param_3 + 0xf0);
  }
  else {
    lVar13 = 0;
    uVar18 = 0;
  }
  uVar1 = *(int *)(lVar19 + 0x24) - 1;
  if (uVar1 < 7) {
    iVar23 = *(int *)(&UNK_10e4c9f10 + (ulong)uVar1 * 4);
  }
  else {
    iVar23 = 0;
  }
  if (*(int *)(lVar19 + 0x28) * iVar23 == 8) {
    puVar33 = (undefined8 *)(*(long *)(param_3 + 0x10) + (ulong)*(uint *)(lVar19 + 0x30));
    uVar32 = (ulong)*(uint *)(param_3 + 0xf0);
  }
  else {
    puVar33 = (undefined8 *)0x0;
    uVar32 = 0;
  }
  uVar1 = *(int *)(lVar17 + 0x24) - 1;
  if (uVar1 < 7) {
    iVar23 = *(int *)(&UNK_10e4c9f10 + (ulong)uVar1 * 4);
  }
  else {
    iVar23 = 0;
  }
  if (*(int *)(lVar17 + 0x28) * iVar23 == 8) {
    puVar35 = (undefined8 *)(*(long *)(param_3 + 0x10) + (ulong)*(uint *)(lVar17 + 0x30));
    uVar34 = (ulong)*(uint *)(param_3 + 0xf0);
  }
  else {
    puVar35 = (undefined8 *)0x0;
    uVar34 = 0;
  }
  uVar1 = *(int *)(lVar14 + 0x24) - 1;
  if (uVar1 < 7) {
    iVar23 = *(int *)(&UNK_10e4c9f10 + (ulong)uVar1 * 4);
  }
  else {
    iVar23 = 0;
  }
  if (*(int *)(lVar14 + 0x28) * iVar23 == 0x10) {
    lStack_190 = *(long *)(param_3 + 0x10) + (ulong)*(uint *)(lVar14 + 0x30);
    uVar29 = (ulong)*(uint *)(param_3 + 0xf0);
  }
  else {
    lStack_190 = 0;
    uVar29 = 0;
  }
  if ((lStack_118 - lStack_120 == 0x30) && (lStack_170 == lStack_178)) {
    *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_3 + 0xe8) = 0x100000000;
  }
  else {
    uVar20 = lStack_170 - lStack_178 >> 2;
    uVar24 = *(long *)(param_3 + 0x30) - *(long *)(param_3 + 0x28);
    if (uVar20 < uVar24 || uVar20 - uVar24 == 0) {
      if (uVar20 < uVar24) {
        *(ulong *)(param_3 + 0x30) = *(long *)(param_3 + 0x28) + uVar20;
      }
    }
    else {
      func_0x000107c27d58(param_3 + 0x28,uVar20 - uVar24);
    }
    *(undefined8 *)(param_3 + 0xe8) = 1;
    FUN_10ab4ccac(auStack_c8,param_3);
    if (2 < (int)((ulong)(lStack_170 - lStack_178) >> 2)) {
      uVar20 = 0;
      lVar30 = 0;
      do {
        lVar19 = -3;
        uVar24 = uVar20;
        do {
          if ((ulong)(lStack_170 - lStack_178 >> 2) <= uVar24) goto LAB_10a557a44;
          uVar4 = *(undefined4 *)(lStack_178 + uVar24 * 4);
          FUN_10ab4e710(auStack_f8,auStack_c8,lVar30);
          FUN_10ab4e794(auStack_e0,auStack_f8,lVar19 + 3);
          FUN_10a557ab0(auStack_e0,uVar4);
          uVar24 = uVar24 + 1;
          bVar9 = lVar19 != -1;
          lVar19 = lVar19 + 1;
        } while (bVar9);
        lVar30 = lVar30 + 1;
        uVar20 = uVar20 + 3;
      } while (lVar30 < (int)((ulong)(lStack_170 - lStack_178) >> 2) / 3);
    }
  }
  if (lStack_118 != lStack_120) {
    lVar30 = 0;
    uVar20 = 0;
    fVar46 = -(fVar36 * fVar37) + fVar41 * fVar47;
    fVar52 = -(fVar41 * fVar49) + fVar38 * fVar37;
    fVar44 = -(fVar38 * fVar47) + fVar36 * fVar49;
    fVar45 = 1.0 / SQRT(fVar44 * fVar44 + fVar46 * fVar46 + fVar52 * fVar52);
    puVar21 = (undefined8 *)(lStack_190 + 8);
    pfVar26 = (float *)(lVar13 + 8);
    do {
      uVar43 = *(undefined8 *)(lStack_120 + lVar30);
      *(undefined4 *)(puVar31 + 1) = *(undefined4 *)((undefined8 *)(lStack_120 + lVar30) + 1);
      *puVar31 = uVar43;
      pfVar26[-2] = fVar46 * fVar45;
      pfVar26[-1] = fVar52 * fVar45;
      *pfVar26 = fVar44 * fVar45;
      if (((ulong)(lStack_130 - lStack_138 >> 3) <= uVar20) ||
         (*puVar33 = *(undefined8 *)(lStack_138 + uVar20 * 8),
         (ulong)(lStack_148 - lStack_150 >> 3) <= uVar20)) goto LAB_10a557a44;
      *puVar35 = *(undefined8 *)(lStack_150 + uVar20 * 8);
      *(float *)(puVar21 + -1) = fVar49;
      *(float *)((long)puVar21 + -4) = fVar47;
      *puVar21 = CONCAT44((int)((ulong)uVar40 >> 0x20),fVar37);
      uVar20 = uVar20 + 1;
      uVar24 = (lStack_118 - lStack_120 >> 2) * -0x5555555555555555;
      puVar21 = (undefined8 *)((long)puVar21 + uVar29);
      lVar30 = lVar30 + 0xc;
      puVar35 = (undefined8 *)((long)puVar35 + uVar34);
      puVar33 = (undefined8 *)((long)puVar33 + uVar32);
      puVar31 = (undefined8 *)((long)puVar31 + uVar16);
      pfVar26 = (float *)((long)pfVar26 + uVar18);
    } while (uVar20 <= uVar24 && uVar24 - uVar20 != 0);
  }
  if (lStack_178 != 0) {
    lStack_170 = lStack_178;
    __ZdlPv();
  }
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  if (lStack_120 != 0) {
    lStack_118 = lStack_120;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a557ab0; end: 10a557aff;  */

void FUN_10a557ab0(undefined4 param_1,undefined4 param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  piVar3 = (int *)*param_3;
  if (piVar3 == (int *)0x0) {
    puVar1 = &UNK_10f6619e8;
    FUN_10a00946c();
    plVar2 = param_4;
    (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110bf05a8,2);
    puVar1[4] = (char)plVar2;
    uStack_38 = 0;
    (**(code **)(*param_4 + 0xe0))(param_4,&PTR_DAT_110bf0788,&uStack_38);
    *(undefined4 *)(puVar1 + 0x10) = param_1;
    *(undefined4 *)(puVar1 + 0x14) = param_2;
    plVar2 = param_4;
    (**(code **)(*param_4 + 0x58))(param_4,&PTR_DAT_110bf07a8,0);
    *puVar1 = (char)plVar2;
    plVar2 = param_4;
    (**(code **)(*param_4 + 0x58))(param_4,&PTR_DAT_110bf07c8,0);
    puVar1[1] = (char)plVar2;
    plVar2 = param_4;
    (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110bf05c8,1);
    *(int *)(puVar1 + 8) = (int)plVar2;
    plVar2 = param_4;
    (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110bf07e8,1);
    *(int *)(puVar1 + 0xc) = (int)plVar2;
    uVar4 = NEON_fmov(0x3f800000,4);
    uStack_38 = uVar4;
    (**(code **)(*param_4 + 0xe0))(param_4,&PTR_DAT_110bf05e8,&uStack_38);
    *(int *)(puVar1 + 0x18) = (int)uVar4;
    *(undefined4 *)(puVar1 + 0x1c) = param_2;
    return;
  }
  if (*(char *)(param_3 + 1) == '\x02') {
    *(short *)piVar3 = (short)param_4 - (short)*(undefined4 *)(param_3 + 2);
  }
  else if (*(char *)(param_3 + 1) == '\x04') {
    *piVar3 = (int)param_4 - *(int *)(param_3 + 2);
    return;
  }
  return;
}



/* Entry: 10a557b00; end: 10a557d1f;  */

void FUN_10a557b00(undefined4 param_1,undefined4 param_2,undefined1 *param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  plVar1 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110bf05a8,2);
  param_3[4] = (char)plVar1;
  uStack_28 = 0;
  (**(code **)(*param_4 + 0xe0))(param_4,&PTR_DAT_110bf0788,&uStack_28);
  *(undefined4 *)(param_3 + 0x10) = param_1;
  *(undefined4 *)(param_3 + 0x14) = param_2;
  plVar1 = param_4;
  (**(code **)(*param_4 + 0x58))(param_4,&PTR_DAT_110bf07a8,0);
  *param_3 = (char)plVar1;
  plVar1 = param_4;
  (**(code **)(*param_4 + 0x58))(param_4,&PTR_DAT_110bf07c8,0);
  param_3[1] = (char)plVar1;
  plVar1 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110bf05c8,1);
  *(int *)(param_3 + 8) = (int)plVar1;
  plVar1 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110bf07e8,1);
  *(int *)(param_3 + 0xc) = (int)plVar1;
  uVar2 = NEON_fmov(0x3f800000,4);
  uStack_28 = uVar2;
  (**(code **)(*param_4 + 0xe0))(param_4,&PTR_DAT_110bf05e8,&uStack_28);
  *(int *)(param_3 + 0x18) = (int)uVar2;
  *(undefined4 *)(param_3 + 0x1c) = param_2;
  return;
}



/* Entry: 10a557d20; end: 10a557d87;  */

void FUN_10a557d20(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf05a8,*(undefined1 *)(param_1 + 500));
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110bf0788,param_1 + 0x200);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bf07a8,*(undefined1 *)(param_1 + 0x1f0));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bf07c8,*(undefined1 *)(param_1 + 0x1f1));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf05c8,*(undefined4 *)(param_1 + 0x1f8));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf07e8,*(undefined4 *)(param_1 + 0x1fc));
                    /* WARNING: Could not recover jumptable at 0x00010a557cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110bf05e8,param_1 + 0x208);
  return;
}



/* Entry: 10a557d88; end: 10a557e7f;  */

void FUN_10a557d88(undefined8 param_1)

{
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  puStack_90 = (undefined1 *)0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0x124;
  uStack_58 = 0x13c;
  FUN_10a557e80(param_1,&puStack_98);
  FUN_10a568a60();
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f660f99;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  puStack_a0 = &UNK_10f660fac;
  puStack_98 = &UNK_10f660bf7;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_90 = (undefined1 *)&puStack_a0;
  FUN_10a557f58(param_1,&puStack_98);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a557e80; end: 10a557f57;  */

/* WARNING: Removing unreachable block (ram,0x00010a557f18) */

undefined1  [16] FUN_10a557e80(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f660f99,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a568964(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a557f58; end: 10a557fbf;  */

ulong FUN_10a557f58(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a557fc0);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a568c38,1,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a557fc0; end: 10a558107;  */

void FUN_10a557fc0(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_10a5519c0();
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_DAT_110bf0618;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[0x16] = param_2[1];
  param_1[0x15] = uVar5;
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
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 0x11) = (float)param_3;
  *(float *)((long)param_1 + 0x8c) = (float)param_4;
  param_1[10] = 0;
  *(float *)(param_1 + 0xb) = (float)param_3;
  *(float *)((long)param_1 + 0x5c) = (float)param_4;
  *(undefined1 *)((long)param_1 + 0x4a) = 1;
  return;
}



/* Entry: 10a558108; end: 10a55826f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010a5583fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10a558108(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  float fVar7;
  double dVar8;
  double dVar9;
  code *pcVar10;
  long *plVar11;
  uint **ppuVar12;
  undefined8 extraout_x8;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  uint *puVar18;
  int *piVar19;
  undefined1 in_b0;
  undefined1 uVar20;
  undefined1 in_register_00005001;
  undefined1 uVar21;
  undefined1 in_register_00005002;
  undefined1 uVar22;
  undefined1 in_register_00005003;
  undefined1 uVar23;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  float fVar24;
  double dVar25;
  uint uStack_3d0;
  int iStack_3cc;
  uint uStack_3c8;
  int iStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  long lStack_398;
  ulong uStack_390;
  undefined8 ***pppuStack_388;
  undefined8 ***pppuStack_380;
  undefined8 uStack_378;
  long lStack_370;
  long lStack_368;
  uint *puStack_350;
  uint **ppuStack_348;
  uint **ppuStack_340;
  undefined8 uStack_338;
  undefined8 **ppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  uint *puStack_318;
  uint *puStack_310;
  uint *puStack_308;
  uint **ppuStack_300;
  uint **ppuStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 **ppuStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  long lStack_108;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  puVar17 = (undefined8 *)param_1[1];
  if (puVar17 < (undefined8 *)param_1[2]) {
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    FUN_10a07b634(puVar17,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
    puVar17 = puVar17 + 3;
    param_1[1] = (long)puVar17;
LAB_10a558230:
    param_1[1] = (long)puVar17;
    return;
  }
  lVar16 = (long)puVar17 - *param_1;
  uVar15 = (lVar16 >> 3) * -0x5555555555555555 + 1;
  if (uVar15 < 0xaaaaaaaaaaaaaab) {
    lVar13 = param_1[2] - *param_1 >> 3;
    uVar14 = lVar13 * 0x5555555555555556;
    if (uVar14 < uVar15 || uVar14 - uVar15 == 0) {
      uVar14 = uVar15;
    }
    if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
      uVar14 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar14 == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = param_1;
      FUN_10a050a00();
    }
    puVar1 = (undefined8 *)((long)plVar11 + lVar16);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    plStack_68 = plVar11;
    plStack_60 = puVar1;
    plStack_58 = puVar1;
    plStack_50 = plVar11 + uVar14 * 3;
    FUN_10a07b634(puVar1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
    puVar17 = puVar1 + 3;
    lVar16 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar16);
    plStack_68 = (long *)*param_1;
    *param_1 = lVar16;
    param_1[1] = (long)puVar17;
    plStack_50 = (long *)param_1[2];
    param_1[2] = (long)(plVar11 + uVar14 * 3);
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    FUN_10a55bf18(&plStack_68);
    goto LAB_10a558230;
  }
  FUN_10a0509ec();
  FUN_10a55bf18(&plStack_68);
  __Unwind_Resume();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_188 = (undefined8 *)0x0;
  puStack_190 = (undefined8 *)0x0;
  uStack_180 = 0;
  lVar16 = 0;
  if (param_1[0x15] != 0) {
    lVar16 = param_1[0x15] + 0x10;
  }
  FUN_10a0f3910(&uStack_2f0,lVar16,0);
  uStack_3d0 = 0x42ff0000;
  uStack_390 = (ulong)&uStack_3d0 | 8;
  iStack_3c4 = 0;
  uStack_3c0 = 0;
  iStack_3cc = 0;
  uStack_3c8 = 0;
  uStack_3b4 = 0;
  uStack_3b0 = 0;
  uStack_3bc = 0;
  uStack_3b8 = 0;
  uStack_3a4 = 0;
  uStack_3ac = 0;
  uStack_3a8 = 0;
  lStack_398 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0;
  pppuStack_380 = (undefined8 ****)0x0;
  uStack_378 = 0;
  uStack_170 = (long *)uStack_2e8;
  pppuStack_388 = &pppuStack_380;
  func_0x000109a83fd0(&uStack_3d0,2,&uStack_170,0);
  uStack_130 = (ulong)&uStack_170 | 8;
  uStack_168 = CONCAT44(iStack_3c4,uStack_3c8);
  uStack_170 = (long *)CONCAT44(iStack_3cc,uStack_3d0);
  lStack_158 = CONCAT44(uStack_3b4,uStack_3b8);
  uStack_160 = CONCAT44(uStack_3bc,uStack_3c0);
  uStack_148 = CONCAT44(uStack_3a4,uStack_3a8);
  lStack_150 = CONCAT44(uStack_3ac,uStack_3b0);
  uStack_140 = CONCAT44(uStack_39c,uStack_3a0);
  lStack_138 = lStack_398;
  ppuStack_120 = (undefined8 ***)0x0;
  ppuStack_118 = (undefined8 ***)0x0;
  if (lStack_398 != 0) {
    piVar19 = (int *)(lStack_398 + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar5) {
        *piVar19 = *piVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_128 = &ppuStack_120;
  if (iStack_3cc < 3) {
    ppuStack_120 = *pppuStack_388;
    ppuStack_118 = pppuStack_388[1];
  }
  else {
    uStack_170 = (long *)(ulong)uStack_3d0;
    func_0x000109a84868(&uStack_170,&uStack_3d0);
  }
  uStack_178 = 3;
  func_0x000109a3e710(&uStack_2f0,1,&uStack_170,1,&uStack_178,1);
  puStack_318._0_4_ = 0x1010000;
  puStack_308 = (uint *)0x0;
  uStack_338._0_4_ = 0x2010000;
  uStack_328 = 0;
  ppuVar12 = &puStack_318;
  ppuStack_330 = (undefined8 **)&uStack_3d0;
  puStack_310 = &uStack_3d0;
  func_0x000109b59078(CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                      0x406fe00000000000,ppuVar12,&uStack_338,0);
  puStack_318 = (uint *)CONCAT44(puStack_318._4_4_,0x3010000);
  puStack_308 = (uint *)0x0;
  uStack_338 = CONCAT44(uStack_338._4_4_,0x8204000c);
  ppuStack_330 = &puStack_190;
  uStack_328 = 0;
  puStack_310 = &uStack_3d0;
  func_0x000109a91d90();
  uStack_320 = 0;
  func_0x000109adf8b0(&puStack_318,&uStack_338,ppuVar12,3,2,&uStack_320);
  ppuStack_348 = (uint **)0x0;
  ppuStack_340 = (uint **)0x0;
  puStack_350 = (uint *)0x0;
  if (puStack_190 != puStack_188) {
    uVar15 = ((long)puStack_188 - (long)puStack_190 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar15) goto LAB_10a5589ac;
    ppuStack_2f8 = &puStack_350;
    ppuVar12 = &puStack_350;
    FUN_10a050a00();
    puVar18 = (uint *)((long)ppuVar12 - ((long)ppuStack_348 - (long)puStack_350));
    _memcpy(puVar18);
    puStack_308 = puStack_350;
    ppuStack_300 = ppuStack_340;
    puStack_318 = puStack_350;
    puStack_310 = puStack_350;
    puStack_350 = puVar18;
    ppuStack_348 = ppuVar12;
    ppuStack_340 = ppuVar12 + uVar15 * 3;
    FUN_10a55bf18(&puStack_318);
    puVar1 = puStack_188;
    puVar17 = puStack_190;
    if ((char)param_1[0x18] == '\x01') {
      if (puStack_190 != puStack_188) {
        fVar7 = *(float *)(param_1 + 0x11);
        fVar24 = *(float *)((long)param_1 + 0x8c);
        uVar20 = SUB41(fVar24,0);
        uVar21 = (char)((uint)fVar24 >> 8);
        uVar22 = (char)((uint)fVar24 >> 0x10);
        uVar23 = (char)((uint)fVar24 >> 0x18);
        if (fVar24 <= fVar7) {
          uVar20 = SUB41(fVar7,0);
          uVar21 = (char)((uint)fVar7 >> 8);
          uVar22 = (char)((uint)fVar7 >> 0x10);
          uVar23 = (char)((uint)fVar7 >> 0x18);
        }
        dVar25 = (double)(float)CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)));
        do {
          puStack_318 = (uint *)0x0;
          puStack_310 = (uint *)0x0;
          puStack_308 = (uint *)0x0;
          piVar3 = (int *)puVar17[1];
          for (piVar19 = (int *)*puVar17; piVar19 != piVar3; piVar19 = piVar19 + 2) {
            dVar8 = (((double)*piVar19 + 0.5) / dVar25) * 100.0;
            dVar9 = (1.0 - ((double)piVar19[1] + 0.5) / dVar25) * 100.0;
            auVar6[8] = SUB81(dVar9,0);
            auVar6._0_8_ = dVar8;
            auVar6[9] = (char)((ulong)dVar9 >> 8);
            auVar6[10] = (char)((ulong)dVar9 >> 0x10);
            auVar6[0xb] = (char)((ulong)dVar9 >> 0x18);
            auVar6[0xc] = (char)((ulong)dVar9 >> 0x20);
            auVar6[0xd] = (char)((ulong)dVar9 >> 0x28);
            auVar6[0xe] = (char)((ulong)dVar9 >> 0x30);
            auVar6[0xf] = (char)((ulong)dVar9 >> 0x38);
            fVar7 = (float)auVar6._8_8_;
            uStack_338 = CONCAT17((char)((uint)fVar7 >> 0x18),
                                  CONCAT16((char)((uint)fVar7 >> 0x10),
                                           CONCAT15((char)((uint)fVar7 >> 8),
                                                    CONCAT14(SUB41(fVar7,0),(float)dVar8))));
            func_0x00010a558044(&puStack_318,&uStack_338);
          }
          FUN_10a558108(&puStack_350,&puStack_318);
          if (puStack_318 != (uint *)0x0) {
            puStack_310 = puStack_318;
            __ZdlPv();
          }
          puVar17 = puVar17 + 3;
        } while (puVar17 != puVar1);
      }
    }
    else {
      for (; puVar17 != puVar1; puVar17 = puVar17 + 3) {
        puStack_318 = (uint *)0x0;
        puStack_310 = (uint *)0x0;
        puStack_308 = (uint *)0x0;
        piVar3 = (int *)puVar17[1];
        for (piVar19 = (int *)*puVar17; piVar19 != piVar3; piVar19 = piVar19 + 2) {
          uStack_338 = CONCAT44(*(float *)((long)param_1 + 0x8c) - ((float)piVar19[1] + 0.5),
                                (float)*piVar19 + 0.5);
          func_0x00010a558044(&puStack_318,&uStack_338);
        }
        FUN_10a558108(&puStack_350,&puStack_318);
        if (puStack_318 != (uint *)0x0) {
          puStack_310 = puStack_318;
          __ZdlPv();
        }
      }
    }
  }
  if (lStack_138 != 0) {
    piVar19 = (int *)(lStack_138 + 0x14);
    do {
      iVar2 = *piVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar5) {
        *piVar19 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_170);
    }
  }
  lStack_138 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  lStack_150 = 0;
  if (0 < uStack_170._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_130 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_170._4_4_);
  }
  if ((undefined8 ***)ppuStack_128 != &ppuStack_120 &&
      (undefined8 ***)ppuStack_128 != (undefined8 ***)0x0) {
    _free(ppuStack_128[-1]);
  }
  if (lStack_398 != 0) {
    piVar19 = (int *)(lStack_398 + 0x14);
    do {
      iVar2 = *piVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar5) {
        *piVar19 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_3d0);
    }
  }
  lStack_398 = 0;
  uStack_3b8 = 0;
  uStack_3b4 = 0;
  uStack_3c0 = 0;
  uStack_3bc = 0;
  uStack_3a8 = 0;
  uStack_3a4 = 0;
  uStack_3b0 = 0;
  uStack_3ac = 0;
  if (0 < iStack_3cc) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_390 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_3cc);
  }
  if ((undefined8 ****)pppuStack_388 != &pppuStack_380 &&
      (undefined8 ****)pppuStack_388 != (undefined8 ****)0x0) {
    _free(pppuStack_388[-1]);
  }
  if (lStack_2b8 != 0) {
    piVar19 = (int *)(lStack_2b8 + 0x14);
    do {
      iVar2 = *piVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar5) {
        *piVar19 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2f0);
    }
  }
  lStack_2b8 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  if (0 < uStack_2f0._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_2b0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_2f0._4_4_);
  }
  if (puStack_2a8 != &uStack_2a0 && puStack_2a8 != (undefined8 *)0x0) {
    _free(puStack_2a8[-1]);
  }
  uStack_2f0 = (uint **)&puStack_190;
  func_0x00010a001298(&uStack_2f0);
  FUN_10a54fce4(&puStack_318,puStack_350,ppuStack_348);
  FUN_10a54cbac(&puStack_190,&puStack_318,*(undefined1 *)((long)param_1 + 0x49));
  plVar11 = param_1 + 9;
  if (*(char *)((long)param_1 + 0x4a) == '\x01') {
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    puStack_2a8 = (undefined8 *)0x0;
    lStack_2b0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = (uint **)0x0;
    ppuStack_278 = &puStack_190;
    uStack_280 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    puStack_270 = &uStack_170;
    uStack_260 = 0;
    uStack_268 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    uStack_248 = 0;
    uStack_230 = 0;
    uStack_238 = 0;
    uStack_220 = 0;
    uStack_228 = 0;
    uStack_210 = 0;
    uStack_218 = 0;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_198 = 0;
    uStack_170 = plVar11;
    FUN_10a54dd20(&uStack_3d0,&uStack_2f0,plVar11);
    func_0x00010a559c08(&uStack_2f0);
  }
  else {
    FUN_10a559d94(&uStack_170,plVar11,&puStack_190);
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    puStack_2a8 = (undefined8 *)0x0;
    lStack_2b0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = (uint **)0x0;
    uStack_280 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_260 = 0;
    uStack_268 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    uStack_248 = 0;
    uStack_230 = 0;
    uStack_238 = 0;
    uStack_220 = 0;
    uStack_228 = 0;
    uStack_210 = 0;
    uStack_218 = 0;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_198 = 0;
    ppuStack_278 = &puStack_190;
    puStack_270 = &uStack_170;
    FUN_10a54ed44(&uStack_3d0,&uStack_2f0,plVar11);
    func_0x00010a55a0f4(&uStack_2f0);
    if (lStack_158 != 0) {
      lStack_150 = lStack_158;
      __ZdlPv();
    }
  }
  uStack_2f0 = (uint **)&puStack_190;
  FUN_10a34ee04(&uStack_2f0);
  uStack_2f0 = &puStack_318;
  FUN_10a34ef08(&uStack_2f0);
  func_0x00010a552600(extraout_x8,param_1,&uStack_3d0);
  if (lStack_370 != 0) {
    lStack_368 = lStack_370;
    __ZdlPv();
  }
  if ((undefined8 ****)pppuStack_388 != (undefined8 ****)0x0) {
    pppuStack_380 = pppuStack_388;
    _free();
  }
  if (CONCAT44(uStack_39c,uStack_3a0) != 0) {
    lStack_398 = CONCAT44(uStack_39c,uStack_3a0);
    _free();
  }
  if (CONCAT44(uStack_3b4,uStack_3b8) != 0) {
    uStack_3b0 = uStack_3b8;
    uStack_3ac = uStack_3b4;
    _free();
  }
  if (CONCAT44(iStack_3cc,uStack_3d0) != 0) {
    uStack_3c8 = uStack_3d0;
    iStack_3c4 = iStack_3cc;
    _free();
  }
  uStack_2f0 = &puStack_350;
  func_0x00010a050870(&uStack_2f0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
LAB_10a5589ac:
  FUN_10a0509ec();
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a5589b4);
  (*pcVar10)();
}



/* Entry: 10a558270; end: 10a558b53;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010a5583fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10a558270(undefined8 param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  float fVar6;
  double dVar7;
  double dVar8;
  undefined8 *puVar9;
  code *pcVar10;
  uint **ppuVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  int *piVar16;
  undefined1 in_b0;
  undefined1 uVar17;
  undefined1 in_register_00005001;
  undefined1 uVar18;
  undefined1 in_register_00005002;
  undefined1 uVar19;
  undefined1 in_register_00005003;
  undefined1 uVar20;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  float fVar21;
  double dVar22;
  uint uStack_360;
  int iStack_35c;
  uint uStack_358;
  int iStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long lStack_328;
  ulong uStack_320;
  undefined8 ***pppuStack_318;
  undefined8 ***pppuStack_310;
  undefined8 uStack_308;
  long lStack_300;
  long lStack_2f8;
  uint *puStack_2e0;
  uint **ppuStack_2d8;
  uint **ppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 **ppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  uint *puStack_2a8;
  uint *puStack_2a0;
  uint *puStack_298;
  uint **ppuStack_290;
  uint **ppuStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 **ppuStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = (undefined8 *)0x0;
  puStack_120 = (undefined8 *)0x0;
  uStack_110 = 0;
  lVar13 = 0;
  if (*(long *)(param_2 + 0xa8) != 0) {
    lVar13 = *(long *)(param_2 + 0xa8) + 0x10;
  }
  FUN_10a0f3910(&uStack_280,lVar13,0);
  uStack_360 = 0x42ff0000;
  uStack_320 = (ulong)&uStack_360 | 8;
  iStack_354 = 0;
  uStack_350 = 0;
  iStack_35c = 0;
  uStack_358 = 0;
  uStack_344 = 0;
  uStack_340 = 0;
  uStack_34c = 0;
  uStack_348 = 0;
  uStack_334 = 0;
  uStack_33c = 0;
  uStack_338 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_32c = 0;
  pppuStack_310 = (undefined8 ****)0x0;
  uStack_308 = 0;
  uStack_100 = uStack_278;
  pppuStack_318 = &pppuStack_310;
  func_0x000109a83fd0(&uStack_360,2,&uStack_100,0);
  uStack_c0 = (ulong)&uStack_100 | 8;
  uStack_f8 = CONCAT44(iStack_354,uStack_358);
  uStack_100 = CONCAT44(iStack_35c,uStack_360);
  lStack_e8 = CONCAT44(uStack_344,uStack_348);
  uStack_f0 = CONCAT44(uStack_34c,uStack_350);
  uStack_d8 = CONCAT44(uStack_334,uStack_338);
  lStack_e0 = CONCAT44(uStack_33c,uStack_340);
  uStack_d0 = CONCAT44(uStack_32c,uStack_330);
  lStack_c8 = lStack_328;
  ppuStack_b0 = (undefined8 ***)0x0;
  ppuStack_a8 = (undefined8 ***)0x0;
  if (lStack_328 != 0) {
    piVar16 = (int *)(lStack_328 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar4) {
        *piVar16 = *piVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_b8 = &ppuStack_b0;
  if (iStack_35c < 3) {
    ppuStack_b0 = *pppuStack_318;
    ppuStack_a8 = pppuStack_318[1];
  }
  else {
    uStack_100 = (ulong)uStack_360;
    func_0x000109a84868(&uStack_100,&uStack_360);
  }
  uStack_108 = 3;
  func_0x000109a3e710(&uStack_280,1,&uStack_100,1,&uStack_108,1);
  puStack_2a8._0_4_ = 0x1010000;
  puStack_298 = (uint *)0x0;
  uStack_2c8._0_4_ = 0x2010000;
  uStack_2b8 = 0;
  ppuVar11 = &puStack_2a8;
  ppuStack_2c0 = (undefined8 **)&uStack_360;
  puStack_2a0 = &uStack_360;
  func_0x000109b59078(CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                      0x406fe00000000000,ppuVar11,&uStack_2c8,0);
  puStack_2a8 = (uint *)CONCAT44(puStack_2a8._4_4_,0x3010000);
  puStack_298 = (uint *)0x0;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,0x8204000c);
  ppuStack_2c0 = &puStack_120;
  uStack_2b8 = 0;
  puStack_2a0 = &uStack_360;
  func_0x000109a91d90();
  uStack_2b0 = 0;
  func_0x000109adf8b0(&puStack_2a8,&uStack_2c8,ppuVar11,3,2,&uStack_2b0);
  ppuStack_2d8 = (uint **)0x0;
  ppuStack_2d0 = (uint **)0x0;
  puStack_2e0 = (uint *)0x0;
  if (puStack_120 != puStack_118) {
    uVar12 = ((long)puStack_118 - (long)puStack_120 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_10a5589ac;
    ppuStack_288 = &puStack_2e0;
    ppuVar11 = &puStack_2e0;
    FUN_10a050a00();
    puVar15 = (uint *)((long)ppuVar11 - ((long)ppuStack_2d8 - (long)puStack_2e0));
    _memcpy(puVar15);
    puStack_298 = puStack_2e0;
    ppuStack_290 = ppuStack_2d0;
    puStack_2a8 = puStack_2e0;
    puStack_2a0 = puStack_2e0;
    puStack_2e0 = puVar15;
    ppuStack_2d8 = ppuVar11;
    ppuStack_2d0 = ppuVar11 + uVar12 * 3;
    FUN_10a55bf18(&puStack_2a8);
    puVar9 = puStack_118;
    puVar14 = puStack_120;
    if (*(char *)(param_2 + 0xc0) == '\x01') {
      if (puStack_120 != puStack_118) {
        fVar6 = *(float *)(param_2 + 0x88);
        fVar21 = *(float *)(param_2 + 0x8c);
        uVar17 = SUB41(fVar21,0);
        uVar18 = (char)((uint)fVar21 >> 8);
        uVar19 = (char)((uint)fVar21 >> 0x10);
        uVar20 = (char)((uint)fVar21 >> 0x18);
        if (fVar21 <= fVar6) {
          uVar17 = SUB41(fVar6,0);
          uVar18 = (char)((uint)fVar6 >> 8);
          uVar19 = (char)((uint)fVar6 >> 0x10);
          uVar20 = (char)((uint)fVar6 >> 0x18);
        }
        dVar22 = (double)(float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
        do {
          puStack_2a8 = (uint *)0x0;
          puStack_2a0 = (uint *)0x0;
          puStack_298 = (uint *)0x0;
          piVar2 = (int *)puVar14[1];
          for (piVar16 = (int *)*puVar14; piVar16 != piVar2; piVar16 = piVar16 + 2) {
            dVar7 = (((double)*piVar16 + 0.5) / dVar22) * 100.0;
            dVar8 = (1.0 - ((double)piVar16[1] + 0.5) / dVar22) * 100.0;
            auVar5[8] = SUB81(dVar8,0);
            auVar5._0_8_ = dVar7;
            auVar5[9] = (char)((ulong)dVar8 >> 8);
            auVar5[10] = (char)((ulong)dVar8 >> 0x10);
            auVar5[0xb] = (char)((ulong)dVar8 >> 0x18);
            auVar5[0xc] = (char)((ulong)dVar8 >> 0x20);
            auVar5[0xd] = (char)((ulong)dVar8 >> 0x28);
            auVar5[0xe] = (char)((ulong)dVar8 >> 0x30);
            auVar5[0xf] = (char)((ulong)dVar8 >> 0x38);
            fVar6 = (float)auVar5._8_8_;
            uStack_2c8 = CONCAT17((char)((uint)fVar6 >> 0x18),
                                  CONCAT16((char)((uint)fVar6 >> 0x10),
                                           CONCAT15((char)((uint)fVar6 >> 8),
                                                    CONCAT14(SUB41(fVar6,0),(float)dVar7))));
            func_0x00010a558044(&puStack_2a8,&uStack_2c8);
          }
          FUN_10a558108(&puStack_2e0,&puStack_2a8);
          if (puStack_2a8 != (uint *)0x0) {
            puStack_2a0 = puStack_2a8;
            __ZdlPv();
          }
          puVar14 = puVar14 + 3;
        } while (puVar14 != puVar9);
      }
    }
    else {
      for (; puVar14 != puVar9; puVar14 = puVar14 + 3) {
        puStack_2a8 = (uint *)0x0;
        puStack_2a0 = (uint *)0x0;
        puStack_298 = (uint *)0x0;
        piVar2 = (int *)puVar14[1];
        for (piVar16 = (int *)*puVar14; piVar16 != piVar2; piVar16 = piVar16 + 2) {
          uStack_2c8 = CONCAT44(*(float *)(param_2 + 0x8c) - ((float)piVar16[1] + 0.5),
                                (float)*piVar16 + 0.5);
          func_0x00010a558044(&puStack_2a8,&uStack_2c8);
        }
        FUN_10a558108(&puStack_2e0,&puStack_2a8);
        if (puStack_2a8 != (uint *)0x0) {
          puStack_2a0 = puStack_2a8;
          __ZdlPv();
        }
      }
    }
  }
  if (lStack_c8 != 0) {
    piVar16 = (int *)(lStack_c8 + 0x14);
    do {
      iVar1 = *piVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar4) {
        *piVar16 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  lStack_c8 = 0;
  lStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  lStack_e0 = 0;
  if (0 < uStack_100._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(uStack_c0 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_100._4_4_);
  }
  if ((undefined8 ***)ppuStack_b8 != &ppuStack_b0 &&
      (undefined8 ***)ppuStack_b8 != (undefined8 ***)0x0) {
    _free(ppuStack_b8[-1]);
  }
  if (lStack_328 != 0) {
    piVar16 = (int *)(lStack_328 + 0x14);
    do {
      iVar1 = *piVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar4) {
        *piVar16 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_360);
    }
  }
  lStack_328 = 0;
  uStack_348 = 0;
  uStack_344 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_338 = 0;
  uStack_334 = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  if (0 < iStack_35c) {
    lVar13 = 0;
    do {
      *(undefined4 *)(uStack_320 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iStack_35c);
  }
  if ((undefined8 ****)pppuStack_318 != &pppuStack_310 &&
      (undefined8 ****)pppuStack_318 != (undefined8 ****)0x0) {
    _free(pppuStack_318[-1]);
  }
  if (lStack_248 != 0) {
    piVar16 = (int *)(lStack_248 + 0x14);
    do {
      iVar1 = *piVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar4) {
        *piVar16 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_280);
    }
  }
  lStack_248 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  if (0 < uStack_280._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_240 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_280._4_4_);
  }
  if (puStack_238 != &uStack_230 && puStack_238 != (undefined8 *)0x0) {
    _free(puStack_238[-1]);
  }
  uStack_280 = (uint **)&puStack_120;
  func_0x00010a001298(&uStack_280);
  FUN_10a54fce4(&puStack_2a8,puStack_2e0,ppuStack_2d8);
  FUN_10a54cbac(&puStack_120,&puStack_2a8,*(undefined1 *)(param_2 + 0x49));
  uVar12 = param_2 + 0x48;
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    puStack_238 = (undefined8 *)0x0;
    lStack_240 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_280 = (uint **)0x0;
    ppuStack_208 = &puStack_120;
    uStack_210 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    puStack_200 = &uStack_100;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_128 = 0;
    uStack_100 = uVar12;
    FUN_10a54dd20(&uStack_360,&uStack_280,uVar12);
    func_0x00010a559c08(&uStack_280);
  }
  else {
    FUN_10a559d94(&uStack_100,uVar12,&puStack_120);
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    puStack_238 = (undefined8 *)0x0;
    lStack_240 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_280 = (uint **)0x0;
    uStack_210 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_128 = 0;
    ppuStack_208 = &puStack_120;
    puStack_200 = &uStack_100;
    FUN_10a54ed44(&uStack_360,&uStack_280,uVar12);
    func_0x00010a55a0f4(&uStack_280);
    if (lStack_e8 != 0) {
      lStack_e0 = lStack_e8;
      __ZdlPv();
    }
  }
  uStack_280 = (uint **)&puStack_120;
  FUN_10a34ee04(&uStack_280);
  uStack_280 = &puStack_2a8;
  FUN_10a34ef08(&uStack_280);
  func_0x00010a552600(param_1,param_2,&uStack_360);
  if (lStack_300 != 0) {
    lStack_2f8 = lStack_300;
    __ZdlPv();
  }
  if ((undefined8 ****)pppuStack_318 != (undefined8 ****)0x0) {
    pppuStack_310 = pppuStack_318;
    _free();
  }
  if (CONCAT44(uStack_32c,uStack_330) != 0) {
    lStack_328 = CONCAT44(uStack_32c,uStack_330);
    _free();
  }
  if (CONCAT44(uStack_344,uStack_348) != 0) {
    uStack_340 = uStack_348;
    uStack_33c = uStack_344;
    _free();
  }
  if (CONCAT44(iStack_35c,uStack_360) != 0) {
    uStack_358 = uStack_360;
    iStack_354 = iStack_35c;
    _free();
  }
  uStack_280 = &puStack_2e0;
  func_0x00010a050870(&uStack_280);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
LAB_10a5589ac:
  FUN_10a0509ec();
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a5589b4);
  (*pcVar10)();
}



/* Entry: 10a558b54; end: 10a558e83;  */

/* WARNING: Removing unreachable block (ram,0x00010a558db0) */

long ** FUN_10a558b54(long **param_1)

{
  long **pplVar1;
  long **pplVar2;
  long lVar3;
  undefined4 auStack_1c0 [2];
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  long *plStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined4 uStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined4 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined4 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined4 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = param_1;
  if (param_1[0x20] == param_1[0x1f]) {
    FUN_10ab6e728();
    if (*(char *)((long)pplVar1 + 0x17) < '\0') {
      pplVar2 = &puStack_170;
      func_0x000107c3192c(pplVar2,*pplVar1,pplVar1[1]);
    }
    else {
      puStack_168 = pplVar1[1];
      puStack_170 = *pplVar1;
      puStack_160 = pplVar1[2];
      pplVar2 = pplVar1;
    }
    puStack_158 = pplVar1[3];
    uStack_140 = *(undefined4 *)(pplVar1 + 6);
    puStack_148 = pplVar1[5];
    puStack_150 = pplVar1[4];
    pplVar1 = &puStack_138;
    FUN_10ab6e9d8();
    if (*(char *)((long)pplVar2 + 0x17) < '\0') {
      func_0x000107c3192c(pplVar1,*pplVar2,pplVar2[1]);
    }
    else {
      puStack_128 = pplVar2[2];
      puStack_130 = pplVar2[1];
      puStack_138 = *pplVar2;
      pplVar1 = pplVar2;
    }
    puStack_120 = pplVar2[3];
    puStack_110 = pplVar2[5];
    puStack_118 = pplVar2[4];
    uStack_108 = *(undefined4 *)(pplVar2 + 6);
    pplVar2 = &puStack_100;
    FUN_10ab6eb18();
    if (*(char *)((long)pplVar1 + 0x17) < '\0') {
      func_0x000107c3192c(pplVar2,*pplVar1,pplVar1[1]);
    }
    else {
      puStack_f0 = pplVar1[2];
      puStack_f8 = pplVar1[1];
      puStack_100 = *pplVar1;
      pplVar2 = pplVar1;
    }
    puStack_e8 = pplVar1[3];
    puStack_d8 = pplVar1[5];
    puStack_e0 = pplVar1[4];
    uStack_d0 = *(undefined4 *)(pplVar1 + 6);
    pplVar1 = &puStack_c8;
    FUN_10ab6f020();
    if (*(char *)((long)pplVar2 + 0x17) < '\0') {
      func_0x000107c3192c(pplVar1,*pplVar2,pplVar2[1]);
    }
    else {
      puStack_b8 = pplVar2[2];
      puStack_c0 = pplVar2[1];
      puStack_c8 = *pplVar2;
      pplVar1 = pplVar2;
    }
    puStack_b0 = pplVar2[3];
    puStack_a0 = pplVar2[5];
    puStack_a8 = pplVar2[4];
    uStack_98 = *(undefined4 *)(pplVar2 + 6);
    FUN_10ab6f160();
    if (*(char *)((long)pplVar1 + 0x17) < '\0') {
      func_0x000107c3192c(&puStack_90,*pplVar1,pplVar1[1]);
    }
    else {
      puStack_80 = pplVar1[2];
      puStack_88 = pplVar1[1];
      puStack_90 = *pplVar1;
    }
    puStack_78 = pplVar1[3];
    puStack_68 = pplVar1[5];
    puStack_70 = pplVar1[4];
    uStack_60 = *(undefined4 *)(pplVar1 + 6);
    FUN_10ab6f520(auStack_1c0,&puStack_170,5);
    *(undefined4 *)(param_1 + 0x1e) = auStack_1c0[0];
    if (param_1 + 0x1e != (long **)auStack_1c0) {
      FUN_10a1903c4(param_1 + 0x1f,lStack_1b8,lStack_1b0,
                    (lStack_1b0 - lStack_1b8 >> 3) * 0x6db6db6db6db6db7);
    }
    param_1[0x23] = puStack_198;
    param_1[0x22] = puStack_1a0;
    param_1[0x25] = puStack_188;
    param_1[0x24] = puStack_190;
    param_1[0x26] = puStack_180;
    plStack_178 = &lStack_1b8;
    pplVar1 = &plStack_178;
    func_0x00010a190844();
    lVar3 = 0x118;
    do {
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  param_1[0x1d] = (long *)0x1;
  *(undefined1 *)((long)param_1 + 0x1ec) = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Unwind_Resume();
    *pplVar1 = (long *)&PTR_FUN_110bf0420;
    FUN_10a0e3194(pplVar1 + 7);
    func_0x00010a5610b8(pplVar1 + 5);
    func_0x00010a561060(pplVar1 + 3);
    *pplVar1 = (long *)&PTR_DAT_110b17898;
    func_0x00010a004dac(pplVar1 + 1);
    return pplVar1;
  }
  return pplVar1;
}



/* Entry: 10a558e84; end: 10a558e87;  */

undefined8 * FUN_10a558e84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf0420;
  FUN_10a0e3194(param_1 + 7);
  func_0x00010a5610b8(param_1 + 5);
  func_0x00010a561060(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a558e88; end: 10a558e9b;  */

void FUN_10a558e88(void)

{
  FUN_10a554160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a558e9c; end: 10a558f37;  */

undefined8 * FUN_10a558e9c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  param_1[0x36] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x37);
  *param_1 = &PTR_FUN_110c49f98;
  plVar1 = (long *)param_1[0x32];
  param_1[0x32] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x2c] = &PTR_DAT_110c4a7c8;
  if (param_1[0x2f] != 0) {
    param_1[0x30] = param_1[0x2f];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x1f;
  func_0x00010a190844(&puStack_28);
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    __ZdlPv();
  }
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x14;
  FUN_10ab550c4(&puStack_28);
  puStack_28 = param_1 + 0x11;
  func_0x00010ab55134(&puStack_28);
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xb;
  FUN_10a0d89d4(&puStack_28);
  puStack_28 = param_1 + 8;
  func_0x00010ab551a4(&puStack_28);
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a558f38; end: 10a558f43;  */

void FUN_10a558f38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  func_0x00010ab46e34(param_1 + -0x36);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a558f44; end: 10a558f57;  */

void FUN_10a558f44(void)

{
  func_0x00010a55bfa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a558f58; end: 10a558f5b;  */

void FUN_10a558f58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a558f5c; end: 10a558f6f;  */

void FUN_10a558f5c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a558f70; end: 10a55900b;  */

long FUN_10a558f70(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a55900c; end: 10a559183;  */

void FUN_10a55900c(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  plVar2 = param_1;
  if ((ulong)((param_1[2] - *param_1 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_4) {
    plVar1 = param_1;
    FUN_10a559184();
    if (0x2e8ba2e8ba2e8ba < param_4) {
      FUN_10a5599e4();
      param_1[1] = param_4;
      __Unwind_Resume();
      lVar4 = *plVar1;
      if (lVar4 != 0) {
        lVar6 = plVar1[1];
        lVar3 = lVar4;
        if (lVar6 != lVar4) {
          do {
            lVar6 = lVar6 + -0x58;
            FUN_10a559634(lVar6);
          } while (lVar6 != lVar4);
          lVar3 = *plVar1;
        }
        plVar1[1] = lVar4;
        __ZdlPv(lVar3);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * 0x5d1745d1745d1746;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x1745d1745d1745c < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
      uVar5 = 0x2e8ba2e8ba2e8ba;
    }
    FUN_10a5591e8(param_1,uVar5);
    FUN_10a559234(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar4 = param_1[1] - *param_1;
    if (param_4 <= (ulong)((lVar4 >> 3) * 0x2e8ba2e8ba2e8ba3)) {
      FUN_10a5596d8(&uStack_41,param_2,param_3);
      lVar4 = param_1[1];
      while (lVar4 != param_2) {
        lVar4 = lVar4 + -0x58;
        FUN_10a559634(lVar4);
      }
      param_1[1] = param_2;
      return;
    }
    FUN_10a5596d8(&uStack_42,param_2,param_2 + lVar4);
    FUN_10a559234(param_1,param_2 + lVar4,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10a559184; end: 10a5591e7;  */

void FUN_10a559184(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_10a559634(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a5591e8; end: 10a559233;  */

long * FUN_10a5591e8(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    plVar1 = param_1;
    FUN_10a5599f8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0xb);
    return plVar1;
  }
  FUN_10a5599e4();
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    FUN_10a5592b8(param_4,param_2);
    param_4 = param_4 + 0xb;
  }
  return param_4;
}



/* Entry: 10a559234; end: 10a5592b7;  */

long FUN_10a559234(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    FUN_10a5592b8(param_4,param_2);
    param_4 = param_4 + 0x58;
  }
  return param_4;
}



/* Entry: 10a5592b8; end: 10a559377;  */

undefined8 * FUN_10a5592b8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar4;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    func_0x000107c3192c(param_1 + 2,param_2[2],param_2[3]);
  }
  else {
    uVar6 = param_2[3];
    uVar4 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar6;
    param_1[2] = uVar4;
  }
  uVar4 = param_2[5];
  param_1[6] = 0;
  param_1[5] = uVar4;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_10a559378();
  lVar5 = param_2[10];
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}



/* Entry: 10a559378; end: 10a5593fb;  */

void FUN_10a559378(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a5593fc(param_1,param_4);
    lVar1 = param_1;
    FUN_10a55947c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a5593fc; end: 10a559433;  */

undefined1  [16]
FUN_10a5593fc(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_b0;
  undefined4 **ppuStack_a8;
  undefined4 **ppuStack_a0;
  undefined1 uStack_98;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_10a559448();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 4);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  FUN_10a559434();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar3 = (long)param_2 << 5;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  puVar4 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 8) {
    *param_4 = *param_2;
    *(undefined8 *)(param_4 + 4) = 0;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 *)(param_4 + 2) = 0;
    puVar4 = *(undefined4 **)(param_2 + 2);
    FUN_10a05151c(param_4 + 2,puVar4,*(long *)(param_2 + 4),*(long *)(param_2 + 4) - (long)puVar4);
    param_4 = puStack_88 + 8;
  }
  uStack_98 = 1;
  FUN_10a559530(&puStack_b0);
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a559434; end: 10a559447;  */

undefined1  [16]
FUN_10a559434(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puStack_90;
  undefined4 **ppuStack_88;
  undefined4 **ppuStack_80;
  undefined1 uStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar2 = (long)param_2 << 5;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  puVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 8) {
    *param_4 = *param_2;
    *(undefined8 *)(param_4 + 4) = 0;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 *)(param_4 + 2) = 0;
    puVar3 = *(undefined4 **)(param_2 + 2);
    FUN_10a05151c(param_4 + 2,puVar3,*(long *)(param_2 + 4),*(long *)(param_2 + 4) - (long)puVar3);
    param_4 = puStack_68 + 8;
  }
  uStack_78 = 1;
  FUN_10a559530(&puStack_90);
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = param_4;
  return auVar5;
}



/* Entry: 10a559448; end: 10a55947b;  */

undefined1  [16]
FUN_10a559448(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_80;
  undefined4 **ppuStack_78;
  undefined4 **ppuStack_70;
  undefined1 uStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar1 = (long)param_2 << 5;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  puVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 8) {
    *param_4 = *param_2;
    *(undefined8 *)(param_4 + 4) = 0;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 *)(param_4 + 2) = 0;
    puVar2 = *(undefined4 **)(param_2 + 2);
    FUN_10a05151c(param_4 + 2,puVar2,*(long *)(param_2 + 4),*(long *)(param_2 + 4) - (long)puVar2);
    param_4 = puStack_58 + 8;
  }
  uStack_68 = 1;
  FUN_10a559530(&uStack_80);
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a55947c; end: 10a55952f;  */

undefined4 *
FUN_10a55947c(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uStack_60;
  undefined4 **ppuStack_58;
  undefined4 **ppuStack_50;
  undefined1 uStack_48;
  undefined4 *puStack_40;
  undefined4 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 8) {
    *param_4 = *param_2;
    *(undefined8 *)(param_4 + 4) = 0;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 *)(param_4 + 2) = 0;
    FUN_10a05151c(param_4 + 2,*(long *)(param_2 + 2),*(long *)(param_2 + 4),
                  *(long *)(param_2 + 4) - *(long *)(param_2 + 2));
    param_4 = puStack_38 + 8;
  }
  uStack_48 = 1;
  FUN_10a559530(&uStack_60);
  return param_4;
}



/* Entry: 10a559530; end: 10a559563;  */

long FUN_10a559530(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a559564(param_1);
  }
  return param_1;
}



/* Entry: 10a559564; end: 10a5595e7;  */

void FUN_10a559564(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x20) {
    if (*(long *)(lVar1 + -0x18) != 0) {
      *(long *)(lVar1 + -0x10) = *(long *)(lVar1 + -0x18);
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a5595e8; end: 10a559633;  */

void FUN_10a5595e8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    if (*(long *)(lVar2 + -0x18) != 0) {
      *(long *)(lVar2 + -0x10) = *(long *)(lVar2 + -0x18);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a559634; end: 10a5596d7;  */

void FUN_10a559634(long param_1)

{
  long lStack_28;
  
  func_0x00010a559680(param_1 + 0x48);
  lStack_28 = param_1 + 0x30;
  func_0x00010a5595a8(&lStack_28);
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}



/* Entry: 10a5596d8; end: 10a55977f;  */

undefined1  [16] FUN_10a5596d8(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  if (param_2 != param_3) {
    plVar3 = param_2 + 7;
    do {
      lVar2 = plVar3[-7];
      *(int *)(param_4 + 1) = (int)plVar3[-6];
      *param_4 = lVar2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_4 + 2,plVar3 + -5);
      param_4[5] = plVar3[-2];
      if (param_4 != plVar3 + -7) {
        FUN_10a5597fc(param_4 + 6,plVar3[-1],*plVar3,*plVar3 - plVar3[-1] >> 5);
      }
      FUN_10a559780(param_4 + 9,plVar3 + 2);
      param_4 = param_4 + 0xb;
      plVar1 = plVar3 + 4;
      param_2 = param_3;
      plVar3 = plVar3 + 0xb;
    } while (plVar1 != param_3);
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = param_2;
  return auVar4;
}



/* Entry: 10a559780; end: 10a5597fb;  */

undefined8 * FUN_10a559780(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a5597fc; end: 10a55993b;  */

void FUN_10a5597fc(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  plVar2 = param_1;
  if ((ulong)(param_1[2] - *param_1 >> 5) < param_4) {
    plVar1 = param_1;
    FUN_10a55993c();
    if (param_4 >> 0x3b != 0) {
      FUN_10a559434();
      param_1[1] = param_4;
      __Unwind_Resume();
      if (*plVar1 != 0) {
        FUN_10a5595e8();
        __ZdlPv(*plVar1);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    uVar3 = param_1[2] - *param_1 >> 4;
    if (uVar3 <= param_4) {
      uVar3 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar3 = 0x7ffffffffffffff;
    }
    FUN_10a5593fc(param_1,uVar3);
    FUN_10a55947c(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar4 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar4 >> 5)) {
      FUN_10a559974(&uStack_41,param_2,param_3);
      for (lVar4 = param_1[1]; lVar4 != param_2; lVar4 = lVar4 + -0x20) {
        if (*(long *)(lVar4 + -0x18) != 0) {
          *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
          __ZdlPv();
        }
      }
      param_1[1] = param_2;
      return;
    }
    FUN_10a559974(&uStack_42,param_2,param_2 + lVar4);
    FUN_10a55947c(param_1,param_2 + lVar4,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10a55993c; end: 10a559973;  */

void FUN_10a55993c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a5595e8();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a559974; end: 10a5599e3;  */

undefined1  [16]
FUN_10a559974(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    *param_4 = *param_2;
    if (param_2 != param_4) {
      FUN_10a0cf2cc(param_4 + 2,*(long *)(param_2 + 2),*(long *)(param_2 + 4),
                    *(long *)(param_2 + 4) - *(long *)(param_2 + 2));
    }
    param_4 = param_4 + 8;
    puVar1 = param_3;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = puVar1;
  return auVar2;
}



/* Entry: 10a5599e4; end: 10a5599f7;  */

undefined1  [16] FUN_10a5599e4(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar2 = param_2 * 0x58;
    __Znwm(lVar2);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar2;
    return auVar9;
  }
  func_0x000109ffded8();
  lVar2 = puVar1[2];
  puVar7 = (undefined8 *)*puVar1;
  uVar6 = param_2;
  if ((ulong)((lVar2 - (long)puVar7 >> 3) * -0x5555555555555555) < param_4) {
    if (puVar7 != (undefined8 *)0x0) {
      puVar1[1] = puVar7;
      __ZdlPv(puVar7);
      lVar2 = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    if (param_4 < 0xaaaaaaaaaaaaaab) {
      uVar6 = (lVar2 >> 3) * 0x5555555555555556;
      if (uVar6 < param_4 || uVar6 - param_4 == 0) {
        uVar6 = param_4;
      }
      if (0x555555555555554 < (ulong)((lVar2 >> 3) * -0x5555555555555555)) {
        uVar6 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar6 < 0xaaaaaaaaaaaaaab) {
        puVar7 = puVar1;
        FUN_10a559bc4();
        *puVar1 = puVar7;
        puVar1[1] = puVar7;
        puVar1[2] = puVar7 + uVar6 * 3;
        param_3 = param_3 - param_2;
        puVar3 = puVar7;
        if (param_3 != 0) {
          _memmove(puVar7,param_2,param_3);
          uVar6 = param_2;
        }
        param_3 = (long)puVar7 + param_3;
        goto LAB_10a559b94;
      }
    }
    FUN_10a559bb0();
    plVar4 = (long *)&DAT_10f62a4d8;
    FUN_109ffde64();
    if (uVar6 < 0xaaaaaaaaaaaaaab) {
      lVar2 = uVar6 * 0x18;
      __Znwm(lVar2);
      auVar11._8_8_ = uVar6;
      auVar11._0_8_ = lVar2;
      return auVar11;
    }
    func_0x000109ffded8();
    FUN_10a559ce8(plVar4 + 0x29);
    FUN_10a559ce8(plVar4 + 0x26);
    FUN_10a559ce8(plVar4 + 0x23);
    if (plVar4[0x20] != 0) {
      plVar4[0x21] = plVar4[0x20];
      _free();
    }
    FUN_10a559ce8(plVar4 + 0x1d);
    if (plVar4[0x1a] != 0) {
      plVar4[0x1b] = plVar4[0x1a];
      _free();
    }
    if (plVar4[0x17] != 0) {
      plVar4[0x18] = plVar4[0x17];
      _free();
    }
    if (plVar4[0x14] != 0) {
      plVar4[0x15] = plVar4[0x14];
      __ZdlPv();
    }
    if (plVar4[0x11] != 0) {
      plVar4[0x12] = plVar4[0x11];
      _free();
    }
    if (plVar4[0xc] != 0) {
      plVar4[0xd] = plVar4[0xc];
      __ZdlPv();
    }
    if (plVar4[9] != 0) {
      plVar4[10] = plVar4[9];
      _free();
    }
    if (plVar4[6] != 0) {
      plVar4[7] = plVar4[6];
      _free();
    }
    if (plVar4[3] != 0) {
      plVar4[4] = plVar4[3];
      _free();
    }
    if (*plVar4 != 0) {
      plVar4[1] = *plVar4;
      _free();
    }
    auVar12._8_8_ = uVar6;
    auVar12._0_8_ = plVar4;
    return auVar12;
  }
  puVar8 = (undefined8 *)puVar1[1];
  puVar3 = puVar1;
  if ((ulong)(((long)puVar8 - (long)puVar7 >> 3) * -0x5555555555555555) < param_4) {
    uVar5 = param_2 + ((long)puVar8 - (long)puVar7);
    if (puVar8 != puVar7) {
      _memmove(puVar7,param_2);
      puVar8 = (undefined8 *)puVar1[1];
      puVar3 = puVar7;
    }
    param_3 = param_3 - uVar5;
    uVar6 = param_2;
    if (param_3 != 0) {
      puVar3 = puVar8;
      _memmove(puVar8,uVar5,param_3);
      uVar6 = uVar5;
    }
    param_3 = (long)puVar8 + param_3;
  }
  else {
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar3 = puVar7;
      _memmove(puVar7,param_2,param_3);
      uVar6 = param_2;
    }
    param_3 = (long)puVar7 + param_3;
  }
LAB_10a559b94:
  puVar1[1] = param_3;
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = puVar3;
  return auVar10;
}



/* Entry: 10a5599f8; end: 10a559a3f;  */

undefined1  [16] FUN_10a5599f8(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar1 = param_2 * 0x58;
    __Znwm(lVar1);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar1;
    return auVar8;
  }
  func_0x000109ffded8();
  lVar1 = param_1[2];
  puVar6 = (undefined8 *)*param_1;
  uVar5 = param_2;
  if ((ulong)((lVar1 - (long)puVar6 >> 3) * -0x5555555555555555) < param_4) {
    if (puVar6 != (undefined8 *)0x0) {
      param_1[1] = puVar6;
      __ZdlPv(puVar6);
      lVar1 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 < 0xaaaaaaaaaaaaaab) {
      uVar5 = (lVar1 >> 3) * 0x5555555555555556;
      if (uVar5 < param_4 || uVar5 - param_4 == 0) {
        uVar5 = param_4;
      }
      if (0x555555555555554 < (ulong)((lVar1 >> 3) * -0x5555555555555555)) {
        uVar5 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar5 < 0xaaaaaaaaaaaaaab) {
        puVar6 = param_1;
        FUN_10a559bc4();
        *param_1 = puVar6;
        param_1[1] = puVar6;
        param_1[2] = puVar6 + uVar5 * 3;
        param_3 = param_3 - param_2;
        puVar2 = puVar6;
        if (param_3 != 0) {
          _memmove(puVar6,param_2,param_3);
          uVar5 = param_2;
        }
        param_3 = (long)puVar6 + param_3;
        goto LAB_10a559b94;
      }
    }
    FUN_10a559bb0();
    plVar3 = (long *)&DAT_10f62a4d8;
    FUN_109ffde64();
    if (uVar5 < 0xaaaaaaaaaaaaaab) {
      lVar1 = uVar5 * 0x18;
      __Znwm(lVar1);
      auVar10._8_8_ = uVar5;
      auVar10._0_8_ = lVar1;
      return auVar10;
    }
    func_0x000109ffded8();
    FUN_10a559ce8(plVar3 + 0x29);
    FUN_10a559ce8(plVar3 + 0x26);
    FUN_10a559ce8(plVar3 + 0x23);
    if (plVar3[0x20] != 0) {
      plVar3[0x21] = plVar3[0x20];
      _free();
    }
    FUN_10a559ce8(plVar3 + 0x1d);
    if (plVar3[0x1a] != 0) {
      plVar3[0x1b] = plVar3[0x1a];
      _free();
    }
    if (plVar3[0x17] != 0) {
      plVar3[0x18] = plVar3[0x17];
      _free();
    }
    if (plVar3[0x14] != 0) {
      plVar3[0x15] = plVar3[0x14];
      __ZdlPv();
    }
    if (plVar3[0x11] != 0) {
      plVar3[0x12] = plVar3[0x11];
      _free();
    }
    if (plVar3[0xc] != 0) {
      plVar3[0xd] = plVar3[0xc];
      __ZdlPv();
    }
    if (plVar3[9] != 0) {
      plVar3[10] = plVar3[9];
      _free();
    }
    if (plVar3[6] != 0) {
      plVar3[7] = plVar3[6];
      _free();
    }
    if (plVar3[3] != 0) {
      plVar3[4] = plVar3[3];
      _free();
    }
    if (*plVar3 != 0) {
      plVar3[1] = *plVar3;
      _free();
    }
    auVar11._8_8_ = uVar5;
    auVar11._0_8_ = plVar3;
    return auVar11;
  }
  puVar7 = (undefined8 *)param_1[1];
  puVar2 = param_1;
  if ((ulong)(((long)puVar7 - (long)puVar6 >> 3) * -0x5555555555555555) < param_4) {
    uVar4 = param_2 + ((long)puVar7 - (long)puVar6);
    if (puVar7 != puVar6) {
      _memmove(puVar6,param_2);
      puVar7 = (undefined8 *)param_1[1];
      puVar2 = puVar6;
    }
    param_3 = param_3 - uVar4;
    uVar5 = param_2;
    if (param_3 != 0) {
      puVar2 = puVar7;
      _memmove(puVar7,uVar4,param_3);
      uVar5 = uVar4;
    }
    param_3 = (long)puVar7 + param_3;
  }
  else {
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar2 = puVar6;
      _memmove(puVar6,param_2,param_3);
      uVar5 = param_2;
    }
    param_3 = (long)puVar6 + param_3;
  }
LAB_10a559b94:
  param_1[1] = param_3;
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = puVar2;
  return auVar9;
}



/* Entry: 10a559a40; end: 10a559baf;  */

undefined1  [16] FUN_10a559a40(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar4 = param_1[2];
  puVar6 = (undefined8 *)*param_1;
  uVar5 = param_2;
  if (param_4 <= (ulong)((lVar4 - (long)puVar6 >> 3) * -0x5555555555555555)) {
    puVar7 = (undefined8 *)param_1[1];
    puVar1 = param_1;
    if ((ulong)(((long)puVar7 - (long)puVar6 >> 3) * -0x5555555555555555) < param_4) {
      uVar3 = param_2 + ((long)puVar7 - (long)puVar6);
      if (puVar7 != puVar6) {
        _memmove(puVar6,param_2);
        puVar7 = (undefined8 *)param_1[1];
        puVar1 = puVar6;
      }
      param_3 = param_3 - uVar3;
      uVar5 = param_2;
      if (param_3 != 0) {
        puVar1 = puVar7;
        _memmove(puVar7,uVar3,param_3);
        uVar5 = uVar3;
      }
      param_3 = (long)puVar7 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        puVar1 = puVar6;
        _memmove(puVar6,param_2,param_3);
        uVar5 = param_2;
      }
      param_3 = (long)puVar6 + param_3;
    }
LAB_10a559b94:
    param_1[1] = param_3;
    auVar8._8_8_ = uVar5;
    auVar8._0_8_ = puVar1;
    return auVar8;
  }
  if (puVar6 != (undefined8 *)0x0) {
    param_1[1] = puVar6;
    __ZdlPv(puVar6);
    lVar4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0xaaaaaaaaaaaaaab) {
    uVar5 = (lVar4 >> 3) * 0x5555555555555556;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x555555555555554 < (ulong)((lVar4 >> 3) * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar5 < 0xaaaaaaaaaaaaaab) {
      puVar6 = param_1;
      FUN_10a559bc4();
      *param_1 = puVar6;
      param_1[1] = puVar6;
      param_1[2] = puVar6 + uVar5 * 3;
      param_3 = param_3 - param_2;
      puVar1 = puVar6;
      if (param_3 != 0) {
        _memmove(puVar6,param_2,param_3);
        uVar5 = param_2;
      }
      param_3 = (long)puVar6 + param_3;
      goto LAB_10a559b94;
    }
  }
  FUN_10a559bb0();
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (uVar5 < 0xaaaaaaaaaaaaaab) {
    lVar4 = uVar5 * 0x18;
    __Znwm(lVar4);
    auVar9._8_8_ = uVar5;
    auVar9._0_8_ = lVar4;
    return auVar9;
  }
  func_0x000109ffded8();
  FUN_10a559ce8(plVar2 + 0x29);
  FUN_10a559ce8(plVar2 + 0x26);
  FUN_10a559ce8(plVar2 + 0x23);
  if (plVar2[0x20] != 0) {
    plVar2[0x21] = plVar2[0x20];
    _free();
  }
  FUN_10a559ce8(plVar2 + 0x1d);
  if (plVar2[0x1a] != 0) {
    plVar2[0x1b] = plVar2[0x1a];
    _free();
  }
  if (plVar2[0x17] != 0) {
    plVar2[0x18] = plVar2[0x17];
    _free();
  }
  if (plVar2[0x14] != 0) {
    plVar2[0x15] = plVar2[0x14];
    __ZdlPv();
  }
  if (plVar2[0x11] != 0) {
    plVar2[0x12] = plVar2[0x11];
    _free();
  }
  if (plVar2[0xc] != 0) {
    plVar2[0xd] = plVar2[0xc];
    __ZdlPv();
  }
  if (plVar2[9] != 0) {
    plVar2[10] = plVar2[9];
    _free();
  }
  if (plVar2[6] != 0) {
    plVar2[7] = plVar2[6];
    _free();
  }
  if (plVar2[3] != 0) {
    plVar2[4] = plVar2[3];
    _free();
  }
  if (*plVar2 != 0) {
    plVar2[1] = *plVar2;
    _free();
  }
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = plVar2;
  return auVar10;
}



/* Entry: 10a559bb0; end: 10a559bc3;  */

undefined1  [16] FUN_10a559bb0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  FUN_10a559ce8(plVar1 + 0x29);
  FUN_10a559ce8(plVar1 + 0x26);
  FUN_10a559ce8(plVar1 + 0x23);
  if (plVar1[0x20] != 0) {
    plVar1[0x21] = plVar1[0x20];
    _free();
  }
  FUN_10a559ce8(plVar1 + 0x1d);
  if (plVar1[0x1a] != 0) {
    plVar1[0x1b] = plVar1[0x1a];
    _free();
  }
  if (plVar1[0x17] != 0) {
    plVar1[0x18] = plVar1[0x17];
    _free();
  }
  if (plVar1[0x14] != 0) {
    plVar1[0x15] = plVar1[0x14];
    __ZdlPv();
  }
  if (plVar1[0x11] != 0) {
    plVar1[0x12] = plVar1[0x11];
    _free();
  }
  if (plVar1[0xc] != 0) {
    plVar1[0xd] = plVar1[0xc];
    __ZdlPv();
  }
  if (plVar1[9] != 0) {
    plVar1[10] = plVar1[9];
    _free();
  }
  if (plVar1[6] != 0) {
    plVar1[7] = plVar1[6];
    _free();
  }
  if (plVar1[3] != 0) {
    plVar1[4] = plVar1[3];
    _free();
  }
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    _free();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10a559bc4; end: 10a559ce7;  */

undefined1  [16] FUN_10a559bc4(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  FUN_10a559ce8(param_1 + 0x29);
  FUN_10a559ce8(param_1 + 0x26);
  FUN_10a559ce8(param_1 + 0x23);
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    _free();
  }
  FUN_10a559ce8(param_1 + 0x1d);
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    _free();
  }
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    _free();
  }
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    _free();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    _free();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    _free();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    _free();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    _free();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a559ce8; end: 10a559d4f;  */

void FUN_10a559ce8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_10a559d50(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a559d50; end: 10a559d93;  */

void FUN_10a559d50(long *param_1)

{
  long *plStack_28;
  
  plStack_28 = param_1 + 3;
  func_0x00010a1f4bf4(&plStack_28);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a559d94; end: 10a55a027;  */

long * FUN_10a559d94(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  float fVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  *param_1 = param_2;
  dVar16 = (double)(float)*(undefined8 *)(param_2 + 0x10) -
           (double)(float)*(undefined8 *)(param_2 + 8);
  dVar17 = (double)(float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) -
           (double)(float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar14 = *(float *)(param_2 + 0x38);
  dVar18 = (double)fVar14;
  if (0.5 / dVar18 <= dVar16 / dVar17) {
    dVar18 = 0.5 / dVar16;
  }
  else {
    dVar18 = dVar18 / dVar17;
  }
  param_1[1] = (long)dVar18;
  param_1[2] = (long)(double)((1.0 - fVar14) * 0.5);
  lVar11 = *param_3;
  lVar2 = param_3[1];
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (lVar11 != lVar2) {
    puVar7 = (undefined1 *)0x0;
    puVar13 = (undefined1 *)0x0;
    puVar12 = (undefined1 *)0x0;
    do {
      uVar15 = *(undefined8 *)(lVar11 + 0x30);
      lVar4 = 1;
      FUN_10a55a028(param_1,1,*(byte *)*param_1 >> 4 & 1);
      if (puVar12 < puVar13) {
        *puVar12 = 1;
        *(undefined8 *)(puVar12 + 8) = uVar15;
        puVar12 = puVar12 + 0x10;
        puVar10 = puVar7;
      }
      else {
        lVar8 = (long)puVar12 - (long)puVar7;
        uVar1 = (lVar8 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a55a0ac();
LAB_10a559ffc:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a55a000);
          (*pcVar3)();
        }
        uVar6 = (long)puVar13 - (long)puVar7 >> 3;
        if (uVar6 <= uVar1) {
          uVar6 = uVar1;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar13 - (long)puVar7)) {
          uVar6 = 0xfffffffffffffff;
        }
        FUN_10a55a0c0();
        puVar10 = (undefined1 *)(uVar6 + lVar8);
        puVar13 = (undefined1 *)(uVar6 + lVar4 * 0x10);
        *puVar10 = 1;
        *(undefined8 *)(puVar10 + 8) = uVar15;
        puVar12 = puVar10 + 0x10;
        puVar10 = puVar10 + (lVar8 >> 4) * -0x10;
        _memcpy(puVar10,puVar7,lVar8);
        param_1[3] = (long)puVar10;
        param_1[4] = (long)puVar12;
        param_1[5] = (long)puVar13;
        if (puVar7 != (undefined1 *)0x0) {
          __ZdlPv(puVar7);
        }
      }
      param_1[4] = (long)puVar12;
      lVar8 = *(long *)(lVar11 + 0x48);
      puVar7 = puVar10;
      for (lVar4 = *(long *)(lVar11 + 0x40); lVar4 != lVar8; lVar4 = lVar4 + 0x40) {
        uVar15 = *(undefined8 *)(lVar4 + 0x30);
        lVar5 = 0;
        FUN_10a55a028(param_1,0,*(byte *)*param_1 >> 5 & 1);
        if (puVar12 < puVar13) {
          *puVar12 = 0;
          *(undefined8 *)(puVar12 + 8) = uVar15;
          puVar12 = puVar12 + 0x10;
          puVar10 = puVar7;
        }
        else {
          lVar9 = (long)puVar12 - (long)puVar7;
          uVar1 = (lVar9 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_10a55a0ac();
            goto LAB_10a559ffc;
          }
          uVar6 = (long)puVar13 - (long)puVar7 >> 3;
          if (uVar6 <= uVar1) {
            uVar6 = uVar1;
          }
          if (0x7fffffffffffffef < (ulong)((long)puVar13 - (long)puVar7)) {
            uVar6 = 0xfffffffffffffff;
          }
          FUN_10a55a0c0();
          puVar10 = (undefined1 *)(uVar6 + lVar9);
          puVar13 = (undefined1 *)(uVar6 + lVar5 * 0x10);
          *puVar10 = 0;
          *(undefined8 *)(puVar10 + 8) = uVar15;
          puVar12 = puVar10 + 0x10;
          puVar10 = puVar10 + (lVar9 >> 4) * -0x10;
          _memcpy(puVar10,puVar7,lVar9);
          param_1[3] = (long)puVar10;
          param_1[4] = (long)puVar12;
          param_1[5] = (long)puVar13;
          if (puVar7 != (undefined1 *)0x0) {
            __ZdlPv(puVar7);
          }
        }
        param_1[4] = (long)puVar12;
        puVar7 = puVar10;
      }
      lVar11 = lVar11 + 0x58;
    } while (lVar11 != lVar2);
  }
  return param_1;
}



/* Entry: 10a55a028; end: 10a55a0ab;  */

double FUN_10a55a028(double param_1,long *param_2,int param_3,int param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_4 != 0) {
    return ((1.0 / param_1) * (double)*(float *)(*param_2 + 0x18)) / (double)param_2[2];
  }
  lVar1 = 4;
  if (param_3 == 0) {
    lVar1 = 6;
  }
  dVar2 = (double)param_2[2] * (param_1 / (double)*(float *)(*param_2 + 0x18)) *
          (double)(int)*(short *)(*param_2 + lVar1);
  dVar4 = (double)(long)dVar2;
  if (dVar4 <= 1.0) {
    dVar4 = 1.0;
  }
  dVar3 = (double)(long)dVar2 / dVar2;
  if ((double)(long)dVar2 / dVar2 <= 1.0 / (dVar4 / dVar2)) {
    dVar3 = dVar4 / dVar2;
  }
  return dVar3;
}



/* Entry: 10a55a0ac; end: 10a55a0bf;  */

undefined1  [16] FUN_10a55a0ac(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar3._8_8_ = plVar1;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  FUN_10a559ce8(plVar1 + 0x29);
  FUN_10a559ce8(plVar1 + 0x26);
  FUN_10a559ce8(plVar1 + 0x23);
  if (plVar1[0x20] != 0) {
    plVar1[0x21] = plVar1[0x20];
    _free();
  }
  FUN_10a559ce8(plVar1 + 0x1d);
  if (plVar1[0x1a] != 0) {
    plVar1[0x1b] = plVar1[0x1a];
    _free();
  }
  if (plVar1[0x17] != 0) {
    plVar1[0x18] = plVar1[0x17];
    _free();
  }
  if (plVar1[0x14] != 0) {
    plVar1[0x15] = plVar1[0x14];
    __ZdlPv();
  }
  if (plVar1[0x11] != 0) {
    plVar1[0x12] = plVar1[0x11];
    _free();
  }
  if (plVar1[0xc] != 0) {
    plVar1[0xd] = plVar1[0xc];
    __ZdlPv();
  }
  if (plVar1[9] != 0) {
    plVar1[10] = plVar1[9];
    _free();
  }
  if (plVar1[6] != 0) {
    plVar1[7] = plVar1[6];
    _free();
  }
  if (plVar1[3] != 0) {
    plVar1[4] = plVar1[3];
    _free();
  }
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    _free();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10a55a0c0; end: 10a55a1d3;  */

undefined1  [16] FUN_10a55a0c0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  FUN_10a559ce8(param_1 + 0x29);
  FUN_10a559ce8(param_1 + 0x26);
  FUN_10a559ce8(param_1 + 0x23);
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    _free();
  }
  FUN_10a559ce8(param_1 + 0x1d);
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    _free();
  }
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    _free();
  }
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    _free();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    _free();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    _free();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    _free();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    _free();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a55a1d4; end: 10a55a2b3;  */

void FUN_10a55a1d4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    uVar12 = *param_2;
    puVar7[1] = param_2[1];
    *puVar7 = uVar12;
    puVar7 = puVar7 + 2;
  }
  else {
    lVar11 = (long)puVar7 - *param_1;
    uVar1 = (lVar11 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a35e504();
      puVar7 = (undefined8 *)*param_1;
      puVar5 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)((long)puVar7 + (param_2[1] - (long)puVar5));
      puVar10 = puVar2;
      if (puVar5 != puVar7) {
        do {
          uVar12 = *puVar7;
          puVar10[1] = puVar7[1];
          *puVar10 = uVar12;
          uVar12 = puVar7[2];
          puVar10[3] = puVar7[3];
          puVar10[2] = uVar12;
          puVar7 = puVar7 + 4;
          puVar10 = puVar10 + 4;
        } while (puVar7 != puVar5);
        puVar7 = (undefined8 *)*param_1;
      }
      param_2[1] = puVar2;
      *param_1 = (long)puVar2;
      param_1[1] = (long)puVar7;
      param_2[1] = puVar7;
      lVar11 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar11;
      lVar11 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar11;
      *param_2 = param_2[1];
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar8 = (long)uVar6 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar8 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    func_0x000109435ef8(param_1,uVar8,0);
    puVar2 = (undefined8 *)((long)plVar3 + lVar11);
    uVar12 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar12;
    puVar7 = puVar2 + 2;
    puVar5 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
    lVar11 = (long)puVar5 - (long)puVar10;
    puVar2 = (undefined8 *)((long)puVar2 + lVar11);
    puVar9 = puVar2;
    if (lVar11 != 0) {
      do {
        puVar4 = puVar5 + 2;
        uVar12 = *puVar5;
        puVar9[1] = puVar5[1];
        *puVar9 = uVar12;
        puVar5 = puVar4;
        puVar9 = puVar9 + 2;
      } while (puVar4 != puVar10);
      puVar5 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar7;
    param_1[2] = (long)(plVar3 + uVar8 * 2);
    if (puVar5 != (undefined8 *)0x0) {
      _free();
    }
  }
  param_1[1] = (long)puVar7;
  return;
}



/* Entry: 10a55a2b4; end: 10a55a32b;  */

void FUN_10a55a2b4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar2));
  puVar5 = puVar1;
  if (puVar2 != puVar3) {
    do {
      uVar6 = *puVar3;
      puVar5[1] = puVar3[1];
      *puVar5 = uVar6;
      uVar6 = puVar3[2];
      puVar5[3] = puVar3[3];
      puVar5[2] = uVar6;
      puVar3 = puVar3 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar3 != puVar2);
    puVar3 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar3;
  param_2[1] = puVar3;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10a55a32c; end: 10a55a37b;  */

void FUN_10a55a32c(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    _free();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10a55a37c; end: 10a55a603;  */

undefined8 *
FUN_10a55a37c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  
  uVar7 = param_1[2];
  puVar3 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar7 - (long)puVar3) >> 5) < param_4) {
    puVar12 = param_2;
    puVar8 = param_3;
    uVar6 = param_4;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[1] = puVar3;
      _free();
      uVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3b != 0) {
      FUN_10a35e3ec();
      uVar7 = puVar3[2];
      puVar4 = (undefined8 *)*puVar3;
      if ((ulong)((long)(uVar7 - (long)puVar4) >> 4) < uVar6) {
        puVar13 = puVar12;
        if (puVar4 != (undefined8 *)0x0) {
          puVar3[1] = puVar4;
          _free();
          uVar7 = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
        }
        if (uVar6 >> 0x3c != 0) {
          FUN_10a35e504();
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          FUN_10a35e32c();
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          FUN_10a35e454();
          uVar11 = puVar13[6];
          uVar2 = *(undefined4 *)(puVar13 + 7);
          puVar4[8] = 0;
          *(undefined4 *)(puVar4 + 7) = uVar2;
          puVar4[6] = uVar11;
          puVar4[9] = 0;
          puVar4[10] = 0;
          FUN_10a35e518();
          return puVar4;
        }
        uVar1 = (long)uVar7 >> 3;
        if ((ulong)((long)uVar7 >> 3) <= uVar6) {
          uVar1 = uVar6;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar1 = 0xfffffffffffffff;
        }
        puVar4 = puVar3;
        FUN_10a35e4c4(puVar3,uVar1);
        puVar9 = (undefined8 *)puVar3[1];
        for (; puVar12 != puVar8; puVar12 = puVar12 + 2) {
          uVar11 = *puVar12;
          puVar9[1] = puVar12[1];
          *puVar9 = uVar11;
          puVar9 = puVar9 + 2;
        }
      }
      else {
        puVar13 = (undefined8 *)puVar3[1];
        lVar14 = (long)puVar13 - (long)puVar4;
        if (uVar6 <= (ulong)(lVar14 >> 4)) {
          for (; puVar12 != puVar8; puVar12 = puVar12 + 2) {
            uVar11 = *puVar12;
            puVar4[1] = puVar12[1];
            *puVar4 = uVar11;
            puVar4 = puVar4 + 2;
          }
          puVar3[1] = puVar4;
          return puVar4;
        }
        puVar10 = (undefined8 *)((long)puVar12 + lVar14);
        puVar5 = puVar4;
        puVar9 = puVar13;
        if (puVar13 != puVar4) {
          do {
            uVar11 = *puVar12;
            puVar4 = puVar5 + 2;
            puVar5[1] = puVar12[1];
            *puVar5 = uVar11;
            lVar14 = lVar14 + -0x10;
            puVar5 = puVar4;
            puVar12 = puVar12 + 2;
          } while (lVar14 != 0);
          puVar13 = (undefined8 *)puVar3[1];
          puVar9 = puVar13;
        }
        for (; puVar10 != puVar8; puVar10 = puVar10 + 2) {
          uVar11 = *puVar10;
          puVar13[1] = puVar10[1];
          *puVar13 = uVar11;
          puVar13 = puVar13 + 2;
          puVar9 = puVar9 + 2;
        }
      }
      puVar3[1] = puVar9;
      return puVar4;
    }
    uVar6 = (long)uVar7 >> 4;
    if ((ulong)((long)uVar7 >> 4) <= param_4) {
      uVar6 = param_4;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar6 = 0x7ffffffffffffff;
    }
    puVar3 = param_1;
    FUN_10a35e3ac(param_1,uVar6);
    puVar8 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 4) {
      uVar11 = *param_2;
      puVar8[1] = param_2[1];
      *puVar8 = uVar11;
      uVar11 = param_2[2];
      puVar8[3] = param_2[3];
      puVar8[2] = uVar11;
      puVar8 = puVar8 + 4;
    }
  }
  else {
    puVar12 = (undefined8 *)param_1[1];
    if (param_4 <= (ulong)((long)puVar12 - (long)puVar3 >> 5)) {
      for (; param_2 != param_3; param_2 = param_2 + 4) {
        uVar11 = *param_2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar11;
        uVar11 = param_2[2];
        puVar3[3] = param_2[3];
        puVar3[2] = uVar11;
        puVar3 = puVar3 + 4;
      }
      param_1[1] = puVar3;
      return puVar3;
    }
    puVar4 = (undefined8 *)((long)param_2 + ((long)puVar12 - (long)puVar3));
    puVar8 = puVar12;
    if (puVar12 != puVar3) {
      do {
        uVar11 = *param_2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar11;
        uVar11 = param_2[2];
        puVar3[3] = param_2[3];
        puVar3[2] = uVar11;
        param_2 = param_2 + 4;
        puVar3 = puVar3 + 4;
      } while (param_2 != puVar4);
      puVar12 = (undefined8 *)param_1[1];
      puVar8 = puVar12;
    }
    for (; puVar4 != param_3; puVar4 = puVar4 + 4) {
      uVar11 = *puVar4;
      puVar12[1] = puVar4[1];
      *puVar12 = uVar11;
      uVar11 = puVar4[2];
      puVar12[3] = puVar4[3];
      puVar12[2] = uVar11;
      puVar12 = puVar12 + 4;
      puVar8 = puVar8 + 4;
    }
  }
  param_1[1] = puVar8;
  return puVar3;
}



/* Entry: 10a55a604; end: 10a55a6b7;  */

undefined8 * FUN_10a55a604(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a35e32c();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a35e454();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 7) = uVar1;
  param_1[6] = uVar2;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_10a35e518();
  return param_1;
}



/* Entry: 10a55a6b8; end: 10a55a6cb;  */

long * FUN_10a55a6b8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x58;
    FUN_10a34ee74();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a55a6cc; end: 10a55a717;  */

long * FUN_10a55a6cc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x58;
    FUN_10a34ee74();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a55a718; end: 10a55a79f;  */

undefined8 * FUN_10a55a718(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a35e32c();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a35e454();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 10a55a7a0; end: 10a55a88b;  */

void FUN_10a55a7a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    do {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      uVar2 = *puVar1;
      param_3[1] = puVar1[1];
      *param_3 = uVar2;
      param_3[2] = puVar1[2];
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      uVar2 = puVar1[3];
      param_3[4] = puVar1[4];
      param_3[3] = uVar2;
      param_3[5] = puVar1[5];
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      uVar2 = puVar1[6];
      *(undefined4 *)(param_3 + 7) = *(undefined4 *)(puVar1 + 7);
      param_3[6] = uVar2;
      puVar1 = puVar1 + 8;
      param_3 = param_3 + 8;
    } while (puVar1 != param_2);
    do {
      FUN_10a34ef78(param_1);
      param_1 = param_1 + 8;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10a55a88c; end: 10a55a8b3;  */

void FUN_10a55a88c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    _free();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  lVar2 = *param_2;
  plVar1[1] = param_2[1];
  *plVar1 = lVar2;
  plVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10a55a8b4; end: 10a55a903;  */

void FUN_10a55a8b4(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    _free();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10a55a904; end: 10a55a917;  */

void FUN_10a55a904(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar3 = (long *)*puVar1;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar1[1];
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -3;
        if (*plVar4 != 0) {
          __ZdlPv();
        }
      } while (plVar4 != plVar3);
      plVar2 = (long *)*puVar1;
    }
    puVar1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 10a55a918; end: 10a55a97f;  */

void FUN_10a55a918(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -3;
        if (*plVar3 != 0) {
          __ZdlPv();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10a55a980; end: 10a55ab13;  */

undefined8 FUN_10a55a980(undefined1 (*param_1) [16],undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar8 = (long *)*param_2;
  puVar3 = (undefined8 *)*plVar8;
  puVar9 = (undefined8 *)plVar8[1];
  if (puVar3 != puVar9) {
    if (NAN((double)param_2[9])) {
      FUN_10a00946c(&UNK_10f6610d5);
      goto LAB_10a55aaf8;
    }
    puVar9[-2] = param_2[9];
  }
  if (puVar9 < (undefined8 *)plVar8[2]) {
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(undefined4 *)(puVar9 + 7) = 0;
    puVar9[6] = 0xbff0000000000000;
    puVar9 = puVar9 + 8;
  }
  else {
    uVar1 = ((long)puVar9 - (long)puVar3 >> 6) + 1;
    if (uVar1 >> 0x3a != 0) {
LAB_10a55aaf8:
      FUN_10a35e5d4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a55ab00);
      (*pcVar4)();
    }
    uVar6 = plVar8[2] - (long)puVar3;
    uVar7 = (long)uVar6 >> 5;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar6) {
      uVar7 = 0x3ffffffffffffff;
    }
    plVar5 = plVar8;
    plStack_48 = plVar8;
    FUN_10a35e5e8();
    puVar3 = (undefined8 *)((long)plVar5 + ((long)puVar9 - (long)puVar3));
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[6] = 0xbff0000000000000;
    puVar9 = puVar3 + 8;
    lVar2 = (long)puVar3 + (*plVar8 - plVar8[1]);
    FUN_10a55a7a0(*plVar8,plVar8[1],lVar2);
    lStack_68 = *plVar8;
    *plVar8 = lVar2;
    plVar8[1] = (long)puVar9;
    lStack_50 = plVar8[2];
    plVar8[2] = (long)(plVar5 + uVar7 * 8);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x00010a55a840(&lStack_68);
  }
  plVar8[1] = (long)puVar9;
  param_2[9] = 0;
  auVar11 = NEON_scvtf(*param_1,8);
  dVar10 = auVar11._0_8_ * 0.015625;
  dVar12 = auVar11._8_8_ * 0.015625;
  param_2[5] = dVar12;
  param_2[4] = dVar10;
  param_2[0xd] = dVar12;
  param_2[0xc] = dVar10;
  param_2[10] = 0;
  return 0;
}


