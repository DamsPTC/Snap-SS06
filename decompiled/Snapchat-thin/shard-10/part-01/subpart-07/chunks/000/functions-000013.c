/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078aec4c; end: 1078aec87;  */

void FUN_1078aec4c(void)

{
  func_0x0001078af52c();
  return;
}



/* Entry: 1078aee2c; end: 1078aee43;  */

void FUN_1078aee2c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001078aed90(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1078afd80; end: 1078afd93;  */

void FUN_1078afd80(void)

{
  func_0x0001078afd94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078aff18; end: 1078aff9b;  */

void FUN_1078aff18(long *param_1,undefined4 param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uStack_24;
  
  bVar6 = (char)param_1[1] != '\x01';
  lVar3 = 0x2a0;
  if (bVar6) {
    lVar3 = 0x288;
  }
  uVar4 = 8;
  if (bVar6) {
    uVar4 = 0x40;
  }
  plVar2 = (long *)(*param_1 + lVar3);
  if (uVar4 <= (ulong)(plVar2[1] - *plVar2 >> 2)) {
    plVar2 = (long *)(*param_1 + 0x300);
  }
  uStack_24 = param_2;
  func_0x0001009eba34(plVar2,&uStack_24);
  piVar1 = (int *)(*param_1 + 0x68);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
}



/* Entry: 1078b01b0; end: 1078b01eb;  */

void FUN_1078b01b0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_24;
  
  lVar1 = param_1 + 0x40;
  uStack_24 = param_2;
  func_0x000107272170(lVar1,&uStack_24);
  if (lVar1 != 0) {
    func_0x0001078b04dc(param_1 + 0x10,&uStack_24);
  }
  return;
}



/* Entry: 1078b0578; end: 1078b05cb;  */

long FUN_1078b0578(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1078b0a9c; end: 1078b0b53;  */

void FUN_1078b0a9c(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  func_0x0001078b0ca8();
  lVar3 = param_1[1];
  if (lVar3 == *param_1) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x0001078b0c84();
      lVar3 = extraout_x8;
      if (!bVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      lVar3 = unaff_x21;
    }
    else {
      lVar4 = (long)(uVar1 - lVar3) >> 2;
      if (uVar1 - lVar3 == 0) {
        lVar4 = 1;
      }
      lVar5 = lVar4 * 2;
      uStack_40 = *(undefined8 *)(unaff_x19 + 0x20);
      func_0x0001078b0b7c();
      lStack_58 = lVar4 + (lVar5 + 6U & 0xfffffffffffffff8);
      lStack_48 = lVar4 + lVar3 * 8;
      lStack_60 = lVar4;
      lStack_50 = lStack_58;
      func_0x0001078b0b54(&lStack_60,*(undefined8 *)(unaff_x19 + 8),
                          *(undefined8 *)(unaff_x19 + 0x10));
      func_0x0001078b0c1c();
      lVar3 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(lVar3 + -8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(lVar3 + -8);
  return;
}



/* Entry: 1078b0eac; end: 1078b0f0b;  */

void FUN_1078b0eac(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  
  lVar1 = *(long *)(param_1 + 8);
  if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x28) & 1) == 0)) && ((*(byte *)(lVar1 + 0x29) & 1) == 0)
     ) {
    func_0x0001078b1394();
    if (uStack_30 != 0) {
      (**(code **)(uStack_30 + 0x18))(0x88bf,*(undefined4 *)(lVar1 + 0x10));
    }
    func_0x0001078b13a0();
    *(undefined1 *)(lVar1 + 0x28) = 1;
  }
  return;
}



/* Entry: 1078b10f0; end: 1078b1117;  */

long FUN_1078b10f0(long param_1)

{
  func_0x0001078aec88(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1078b1250; end: 1078b1273;  */

void FUN_1078b1250(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e7890;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1078b151c; end: 1078b151f;  */

undefined8 * FUN_1078b151c(undefined8 *param_1)

{
  long lVar1;
  
  if ((*(byte *)((long)param_1 + 0x5a) & 1) == 0) {
    if (*(char *)((long)param_1 + 0x59) != '\x01') goto code_r0x0001078b1500;
    lVar1 = 0x28;
  }
  else {
    lVar1 = 0x20;
  }
  (**(code **)(*(long *)param_1[0xc] + lVar1))();
code_r0x0001078b1500:
  func_0x0001073ad824(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  func_0x0001073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  func_0x0001073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1078b1af4; end: 1078b1b23;  */

long FUN_1078b1af4(long param_1)

{
  func_0x0001078b27f0(param_1 + 0x28);
  func_0x0001074996e0(param_1 + 0x10);
  return param_1;
}



/* Entry: 1078b1fdc; end: 1078b1fe7;  */

long FUN_1078b1fdc(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  uint extraout_w9;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 8);
  func_0x0001078af578(lVar1);
  func_0x0001078aca5c(lVar1 + 0x278);
  func_0x0001078aca90(unaff_x20 + 0x27b,unaff_x19 + 1);
  func_0x0001078af2b0(unaff_x20 + 0x27e,unaff_x19 + 2);
  if (((extraout_w9 & 1) != 0) || (func_0x0001078af5a4(), !(bool)in_ZR)) {
    func_0x0001078af2c0();
    func_0x0001078b6594();
  }
  return unaff_x19;
}



/* Entry: 1078b27dc; end: 1078b27ef;  */

void FUN_1078b27dc(void)

{
  return;
}



/* Entry: 1078b3e14; end: 1078b3e1b;  */

undefined4 FUN_1078b3e14(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1078b415c; end: 1078b417f;  */

void FUN_1078b415c(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 1078b42d8; end: 1078b436b;  */

undefined1  [16] FUN_1078b42d8(ulong *param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar9;
  byte bVar15;
  undefined1 auVar16 [16];
  
  lVar2 = 0;
  uVar3 = *param_1;
  uVar4 = uVar3 >> 0xc ^ param_3 >> 7;
  bVar5 = (byte)param_3 & 0x7f;
  while( true ) {
    uVar4 = uVar4 & param_1[2];
    uVar9 = *(undefined8 *)(uVar3 + uVar4);
    bVar8 = (byte)((ulong)uVar9 >> 8);
    bVar10 = (byte)((ulong)uVar9 >> 0x10);
    bVar11 = (byte)((ulong)uVar9 >> 0x18);
    bVar12 = (byte)((ulong)uVar9 >> 0x20);
    bVar13 = (byte)((ulong)uVar9 >> 0x28);
    bVar14 = (byte)((ulong)uVar9 >> 0x30);
    bVar15 = (byte)((ulong)uVar9 >> 0x38);
    for (uVar6 = CONCAT17(-(bVar15 == bVar5),
                          CONCAT16(-(bVar14 == bVar5),
                                   CONCAT15(-(bVar13 == bVar5),
                                            CONCAT14(-(bVar12 == bVar5),
                                                     CONCAT13(-(bVar11 == bVar5),
                                                              CONCAT12(-(bVar10 == bVar5),
                                                                       CONCAT11(-(bVar8 == bVar5),
                                                                                -((byte)uVar9 ==
                                                                                 bVar5)))))))) &
                 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar7 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar4 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & param_1[2];
      if (*(ulong *)(param_1[1] + uVar7 * 0x10) == param_2) {
        auVar16._8_8_ = param_1[1] + uVar7 * 0x10;
        auVar16._0_8_ = uVar3 + uVar7;
        return auVar16;
      }
    }
    bVar8 = NEON_umaxv(CONCAT17(-(bVar15 == 0x80),
                                CONCAT16(-(bVar14 == 0x80),
                                         CONCAT15(-(bVar13 == 0x80),
                                                  CONCAT14(-(bVar12 == 0x80),
                                                           CONCAT13(-(bVar11 == 0x80),
                                                                    CONCAT12(-(bVar10 == 0x80),
                                                                             CONCAT11(-(bVar8 == 
                                                  0x80),-((byte)uVar9 == 0x80)))))))),1);
    if ((bVar8 & 1) != 0) break;
    lVar2 = lVar2 + 8;
    uVar4 = lVar2 + uVar4;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}



/* Entry: 1078b49f4; end: 1078b4a33;  */

undefined8 * FUN_1078b49f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e7c18;
  func_0x000107892b74(param_1 + 0xc);
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  *param_1 = &PTR_DAT_1109abcb0;
  func_0x0001073caf1c(param_1 + 1);
  return param_1;
}



/* Entry: 1078b4ec0; end: 1078b4ef7;  */

long FUN_1078b4ec0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e7d28);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078b50e8; end: 1078b512f;  */

undefined1 * FUN_1078b50e8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  if (puVar1 < *(undefined1 **)(param_1 + 0x10)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    func_0x0001078b5130();
  }
  *(undefined1 **)(param_1 + 8) = puVar2;
  return puVar2 + -1;
}



/* Entry: 1078b531c; end: 1078b532f;  */

void FUN_1078b531c(void)

{
  func_0x0001078b52c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b53e4; end: 1078b5427;  */

void FUN_1078b53e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001078ac1d4(*(long *)(param_1 + 0x28) + 0x184,param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBufferSubData_11034b3d8)(0x8a11,0,param_3,param_2);
  return;
}



/* Entry: 1078b57b4; end: 1078b5993;  */

void FUN_1078b57b4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  uStack_58 = param_3;
  func_0x0001078ab49c(auStack_78,*(undefined8 *)(*(long *)(param_2 + 0x20) + 8),0);
  puVar4 = &uStack_58;
  func_0x0001078b5334(puVar4,param_6);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x80);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + (long)puVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_80 = puVar4;
  func_0x0001078ab8f8(&lStack_88,auStack_78,&puStack_80);
  *param_1 = lStack_88;
  func_0x0001078b5994(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x1e0,1);
  func_0x0001078b59d4(param_2,lStack_88,param_3,param_4,param_6);
  func_0x0001078b6378(param_5,param_7,param_6);
  func_0x0001078b6358(0xde1);
  func_0x0001078b6344(0xde1);
  func_0x0001078af7e4((uint)param_5 & 0xff);
  func_0x0001078b6328(0xde1);
  func_0x0001078b6360();
  uVar6 = param_5 >> 0x20 & 0xff;
  if ((int)uVar6 == 0) {
    uVar6 = 0;
    uVar5 = 0x884c;
  }
  else {
    func_0x0001078b62ac(0xde1);
    func_0x0001078af874(uVar6);
    uVar5 = 0x884d;
  }
  _glTexParameteri(0xde1,uVar5,uVar6);
  if ((int)param_7 != 0) {
    _glGenerateMipmap(0xde1);
    *(undefined1 *)(lStack_88 + 0x35) = 1;
  }
  func_0x0001078ae5e4(auStack_78);
  return;
}



/* Entry: 1078b623c; end: 1078b6277;  */

void FUN_1078b623c(void)

{
  func_0x0001078b634c();
  return;
}



/* Entry: 1078b651c; end: 1078b6647;  */

void FUN_1078b651c(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBlendColor_11034b3a0)(*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}



/* Entry: 1078b67e4; end: 1078b6827;  */

undefined8
FUN_1078b67e4(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = param_3;
  uStack_21 = param_2;
  func_0x0001078b6828(param_1,&uStack_21,&uStack_22,param_4);
  return param_1;
}



/* Entry: 1078b6a3c; end: 1078b6ad3;  */

undefined8 FUN_1078b6a3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(puVar1);
  func_0x00010bf433e0(puVar1);
  func_0x0001078b6d34();
  func_0x0001078b6d48();
  return param_1;
}



/* Entry: 1078b6c58; end: 1078b6d13;  */

ulong * FUN_1078b6c58(ulong *param_1,uint param_2,int param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uVar1 = 0x80;
  }
  *param_1 = uVar1 | param_2 ^ 1;
  if (*(char *)(param_4 + 0x18) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    _objc_alloc();
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026a60();
    param_1[1] = (ulong)puVar2;
    func_0x0001078b6d40();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320();
    _objc_retainAutoreleasedReturnValue();
    param_1[1] = (ulong)puVar2;
  }
  return param_1;
}



/* Entry: 1078b7078; end: 1078b70a3;  */

undefined8 * FUN_1078b7078(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e8018;
  func_0x0001078b9a14(param_1 + 1);
  return param_1;
}



/* Entry: 1078b8dc8; end: 1078b8e43;  */

void FUN_1078b8dc8(long *param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar2 = param_1;
  func_0x0001078b9e28();
  func_0x00010002b838(&lStack_48,param_3);
  lVar1 = lStack_38;
  *(undefined1 *)plVar2 = param_2;
  plVar2[2] = lStack_40;
  plVar2[1] = lStack_48;
  lStack_48 = 0;
  lStack_40 = 0;
  lStack_38 = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[3] = lVar1;
  *param_1 = (long)plVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_48);
  return;
}



/* Entry: 1078b9328; end: 1078b93bb;  */

long * FUN_1078b9328(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1078b9ab0; end: 1078b9ab3;  */

void FUN_1078b9ab0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8100;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078b9c64; end: 1078b9c6f;  */

undefined ** FUN_1078b9c64(void)

{
  return &PTR_DAT_1109e81b0;
}



/* Entry: 1078ba1ec; end: 1078ba547;  */

void FUN_1078ba1ec(undefined8 param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  char *pcStack_180;
  char *pcStack_178;
  char *pcStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [256];
  
  if ((((((0xb < param_3) && (*param_2 == 'R')) && (param_2[1] == 'I')) &&
       ((param_2[2] == 'F' && (param_2[3] == 'F')))) &&
      ((param_2[8] == 'W' && ((param_2[9] == 'E' && (param_2[10] == 'B')))))) &&
     (param_2[0xb] == 'P')) {
    _objc_autoreleasePoolPush();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x0001078baa30();
    func_0x00010b696b1c();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    func_0x0001078ba078(param_1);
    _objc_release(puVar3);
    func_0x0001078ba9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_2);
    return;
  }
  func_0x0001078ba994();
  _CFDataCreateWithBytesNoCopy();
  pcStack_170 = param_2;
  if (param_2 == (char *)0x0) {
    func_0x0001078ba978();
    __ZNSt13runtime_errorC1EPKc();
    func_0x0001078ba964();
    func_0x0001078baa1c();
  }
  else {
    _CGImageSourceCreateWithData();
    pcStack_178 = param_2;
    if (param_2 == (char *)0x0) {
      func_0x0001078ba978();
      __ZNSt13runtime_errorC1EPKc();
      func_0x0001078ba964();
      func_0x0001078baa1c();
    }
    else {
      func_0x0001078ba9d0();
      pcStack_180 = param_2;
      if (param_2 != (char *)0x0) {
        func_0x0001078ba078(param_1);
        func_0x0001078ba548(&pcStack_180);
        func_0x0001078ba56c(&pcStack_178);
        func_0x0001078ba590(&pcStack_170);
        return;
      }
      func_0x0001078ba978();
      func_0x00010002b838(auStack_1b0,&UNK_10f433ae2);
      func_0x000105680760(auStack_168);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(auStack_158,param_3);
      func_0x00010549023c();
      uVar1 = (uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU);
      if (0xf < (int)uVar1) {
        uVar1 = 0x10;
      }
      for (uVar4 = (ulong)uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
        _snprintf(auStack_1c8,4,&DAT_10f40a4ff);
        func_0x00010549023c(auStack_158,auStack_1c8);
        func_0x00010549023c();
      }
      func_0x000105491b64(auStack_1c8,auStack_150);
      func_0x000105673d7c(auStack_168);
      func_0x00010533a9c0(auStack_198,auStack_1b0,auStack_1c8);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (param_2,auStack_198);
      func_0x0001078ba964();
      func_0x0001078baa1c();
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1078ba478);
  (*pcVar2)();
}



/* Entry: 1078baa70; end: 1078baaf3;  */

void FUN_1078baa70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  uVar1 = 8;
  __Znwm();
  func_0x00010028af84(auStack_50,param_2);
  FUN_1078bb564(uVar1,auStack_50);
  *param_1 = uVar1;
  func_0x0001001148fc(auStack_50);
  return;
}



/* Entry: 1078baf60; end: 1078baf83;  */

void FUN_1078baf60(void)

{
  func_0x0001078bb6d8();
  _CFRelease();
  return;
}



/* Entry: 1078bb564; end: 1078bb68f;  */

undefined8 * FUN_1078bb564(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_1 = 0;
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25cd60();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001078bb6ec();
  _objc_release(puVar1);
  if (*(char *)(param_2 + 0x18) == '\x01') {
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if ((undefined *)*param_1 != (undefined *)0x0) {
      puVar1 = (undefined *)*param_1;
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001078bb6ec();
    func_0x0001078bb6e4();
    _objc_release(puVar2);
  }
  return param_1;
}



/* Entry: 1078bb940; end: 1078bb977; -[MGLNativeNetworkManager cancelDownloadEventForResponse:] */

void FUN_1078bb940(void)

{
  func_0x0001078bba4c();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001078bba7c();
  func_0x00010bf2e280();
  func_0x0001078bba5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1078bbb08; end: 1078bbb3f;  */

long FUN_1078bbb08(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  else {
    func_0x0001078bbb90();
  }
  return param_1;
}



/* Entry: 1078bbf24; end: 1078bbf8f;  */

void FUN_1078bbf24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_11034d1a8)(PTR__OBJC_CLASS___NSString_1126ae4d0);
  return;
}



/* Entry: 1078bc078; end: 1078bc0c7;  */

void FUN_1078bc078(void)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x0001078bd6f8();
  if (*(char *)(unaff_x19 + 0x50) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x50) = 0;
    plVar1 = *(long **)(unaff_x19 + 0x40);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,0x1132309e0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1078bc1b4; end: 1078bc1ff;  */

void FUN_1078bc1b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  __ZNSt3__15mutex4lockEv();
  func_0x0001078bc68c(param_1 + 0x88,param_2,&uStack_28);
  func_0x0001078bd6e0();
  __ZNSt3__15mutex6unlockEv(param_1);
  return;
}



/* Entry: 1078bc504; end: 1078bc53f;  */

void FUN_1078bc504(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001078bc540();
  func_0x0001078bc588(*param_1,param_2,param_3);
  return;
}



/* Entry: 1078bc668; end: 1078bc68b;  */

long FUN_1078bc668(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  func_0x00010028ad60(lVar1,*(undefined8 *)(param_1 + 0x28));
  func_0x00010028adc0(lVar1,0);
  return lVar1;
}



/* Entry: 1078bca0c; end: 1078bca1f;  */

void FUN_1078bca0c(void)

{
  func_0x0001078bcc34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bcc84; end: 1078bceb3;  */

undefined1  [16] FUN_1078bcc84(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x26;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  plVar5 = param_1 + 3;
  func_0x000100102e7c();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x26 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar7 <= plVar5) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar1 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1078bcd50;
          plVar3 = (long *)plVar6[1];
          if (plVar3 != plVar5) break;
          plVar3 = plVar6 + 2;
          func_0x0001000e107c(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar2 = 0;
            goto LAB_1078bce80;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar8);
        }
        else if (plVar7 <= plVar3) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar7;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar7);
        }
      } while (plVar3 == unaff_x26);
    }
  }
LAB_1078bcd50:
  plVar3 = param_1 + 2;
  plVar6 = (long *)0x30;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = (long)plVar5;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar6 + 2,param_3);
  plVar6[5] = *param_4;
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    func_0x0001078bd784((long)plVar7 << 1);
    func_0x0001078bca2c(param_1);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  lVar4 = *param_1;
  plVar5 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar6 = *plVar3;
    *plVar3 = (long)plVar6;
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar3;
    if (*plVar6 != 0) {
      plVar5 = *(long **)(*plVar6 + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar4 + (long)plVar5 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar5;
    *plVar5 = (long)plVar6;
  }
  param_1[3] = param_1[3] + 1;
  func_0x0001078bd76c();
  uVar2 = 1;
LAB_1078bce80:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 1078bd090; end: 1078bd0a7;  */

void FUN_1078bd090(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078bd22c; end: 1078bd26f;  */

void FUN_1078bd22c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x0001078bd79c();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1078bd40c; end: 1078bd48f;  */

void FUN_1078bd40c(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  
  if ((bRam0000000113726a20 & 1) == 0) {
    lVar1 = 0x113726a20;
    ___cxa_guard_acquire();
    if ((int)lVar1 != 0) {
      func_0x0001078bd6e8();
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      func_0x0001078bd660(&PTR_DAT_1109e8250);
    }
  }
  lVar1 = lRam0000000113726a18;
  *param_1 = uRam0000000113726a10;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001078bd79c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1078bd630; end: 1078bd65f;  */

void FUN_1078bd630(long param_1)

{
  func_0x000107874b20(param_1 + 0x58);
  func_0x0001072adb2c(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 1078bdb2c; end: 1078bdb4f;  */

void FUN_1078bdb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078bdb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078bde1c; end: 1078bdedb;  */

/* WARNING: Removing unreachable block (ram,0x0001078bdee0) */
/* WARNING: Removing unreachable block (ram,0x0001078bdee8) */
/* WARNING: Removing unreachable block (ram,0x0001078bdef0) */
/* WARNING: Removing unreachable block (ram,0x0001078bdef8) */
/* WARNING: Removing unreachable block (ram,0x0001078bdefc) */
/* WARNING: Removing unreachable block (ram,0x0001078bdf00) */

void FUN_1078bde1c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  iVar3 = (int)param_2[1];
  iVar4 = *(int *)((long)param_2 + 0xc);
  uVar1 = 2;
  if (iVar3 != 3) {
    uVar1 = 4;
  }
  uVar2 = 1;
  if (iVar3 != 2) {
    uVar2 = uVar1;
  }
  uVar1 = 0xe;
  if (iVar3 != 0) {
    uVar1 = uVar2;
  }
  if ((param_2[3] == 0) || (func_0x000108343e58(&lStack_48), lStack_48 == 0)) {
    func_0x000108343a94(&lStack_50);
    func_0x0001078be08c();
    lStack_48 = lStack_50;
  }
  uVar2 = 0x100000000;
  if (iVar4 != 0) {
    uVar2 = 0x300000000;
  }
  lVar5 = *param_2;
  *param_1 = lStack_48;
  param_1[1] = uVar2 | uVar1;
  param_1[2] = lVar5;
  func_0x0001078be08c();
  return;
}



/* Entry: 1078be074; end: 1078be0a7;  */

void FUN_1078be074(void)

{
  return;
}



/* Entry: 1078be880; end: 1078be8a7;  */

void FUN_1078be880(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x0001078bdfec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078be948; end: 1078be9e3;  */

undefined8 * FUN_1078be948(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b2960;
  func_0x0001078bebf8(param_1 + 0x5e);
  func_0x0001078bebf8(param_1 + 0x58);
  func_0x0001074734f0(param_1 + 0x56);
  func_0x000107276ba4(param_1 + 0x41);
  func_0x00010747396c(param_1 + 0x3d);
  func_0x00010746fdb4(param_1 + 4);
  func_0x000107473948(param_1 + 2);
  return param_1;
}



/* Entry: 1078becd0; end: 1078bece3;  */

void FUN_1078becd0(void)

{
  func_0x0001078bec74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bee98; end: 1078beedb;  */

void FUN_1078bee98(undefined8 *param_1)

{
  func_0x0001078bef80();
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}



/* Entry: 1078bf068; end: 1078bf08f;  */

long FUN_1078bf068(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001078bf090();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1078bf18c; end: 1078bf1c7;  */

/* WARNING: Possible PIC construction at 0x0001078bf1a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078bf1a8) */
/* WARNING: Removing unreachable block (ram,0x0001078bf1c4) */
/* WARNING: Removing unreachable block (ram,0x0001078bf1bc) */
/* WARNING: Removing unreachable block (ram,0x0001078bf524) */

void FUN_1078bf18c(undefined8 param_1)

{
  undefined1 uStack_51;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x0001078bf4e8();
  uStack_48 = 0x1078bf1a8;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x0001078bf1e8(auStack_38,&uStack_51,param_1);
  return;
}



/* Entry: 1078bf304; end: 1078bf317;  */

void FUN_1078bf304(void)

{
  func_0x0001078bf320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bf5e8; end: 1078bf677;  */

void FUN_1078bf5e8(undefined1 *param_1,long param_2)

{
  int iVar1;
  undefined1 auStack_40 [32];
  
  iVar1 = *(int *)(param_2 + 0x68);
  if ((((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) || ((iVar1 == 3 || (iVar1 == 4)))) ||
      ((iVar1 == 5 || ((iVar1 == 6 || (iVar1 == 7)))))) || (iVar1 == 8)) {
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    func_0x0001078c47e8(auStack_40,param_2 + 8);
    func_0x0001078c58a8(param_1,auStack_40);
    func_0x0001078c6084();
  }
  return;
}



/* Entry: 1078c1ab0; end: 1078c1f8f;  */

void FUN_1078c1ab0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 **ppuVar10;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  long alStack_198 [3];
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined4 *puStack_158;
  undefined1 uStack_150;
  long *plStack_148;
  byte bStack_138;
  undefined1 auStack_130 [56];
  undefined8 auStack_f8 [2];
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  func_0x0001078c5bdc();
  lVar11 = *param_5;
  lStack_180 = param_5[1];
  alStack_198[2] = lVar11;
  uStack_98 = extraout_x8;
  if (lStack_180 != 0) {
    do {
      func_0x0001078c5d48();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2f64c(auStack_130);
  alStack_198[0] = 0;
  alStack_198[1] = 0;
  puStack_158 = (undefined4 *)(lVar11 + 0x208);
  uStack_150 = 1;
  func_0x00010724e404();
  func_0x0001078c1794(alStack_198,*(undefined8 *)(lVar11 + 0x330),*(undefined8 *)(lVar11 + 0x338));
  func_0x0001077805c4(&puStack_d0,*(undefined8 *)(lVar11 + 0x2b0));
  ppuVar10 = &puStack_d0;
  func_0x000104c2f1f0(auStack_130);
  func_0x000104c2f714(&puStack_d0);
  func_0x00010724e49c(&puStack_158);
  lVar11 = alStack_198[0];
  func_0x0001078c2088(alStack_198[0]);
  uVar13 = *(ulong *)(*(long *)(lVar11 + 0x140) + 0x1b8);
  uVar2 = *(ulong *)(*(long *)(lVar11 + 0x140) + 0x1c0);
  lVar16 = uVar2 - uVar13;
  do {
    uVar7 = uVar13 == uVar2;
    if ((bool)uVar7) {
      uVar12 = *(undefined8 *)(lVar11 + 0x90);
      lVar11 = *(long *)(lVar11 + 0x140);
      uVar19 = *(undefined8 *)(lVar11 + 0x1e0);
      uVar4 = *(undefined8 *)(lVar11 + 0x1e8);
      func_0x0001078c4538(&puStack_d0,lVar11 + 0x1f0);
      func_0x0001074c61ec(&puStack_158,&puStack_d0);
      auStack_f8[0] = 0;
      func_0x0001078d3484(param_1,uVar12,auStack_130,lVar11,uVar19,uVar4,&puStack_158,auStack_f8);
      func_0x0001073c5f18(&puStack_158);
      func_0x0001074736dc(&puStack_d0);
LAB_1078c1e60:
      func_0x0001078c17e0(alStack_198);
      func_0x000104c2f714(auStack_130);
      func_0x0001078c5f2c();
      func_0x0001078c5b3c(uStack_98);
      if ((bool)uVar7) {
        return;
      }
      ___stack_chk_fail();
LAB_1078c1ebc:
      func_0x00010ae87d60(&UNK_10f40ec73);
LAB_1078c1ec8:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1078c1ecc);
      (*pcVar6)();
    }
    uVar8 = uVar13;
    func_0x000104c2d614();
    if ((uVar8 & 1) == 0) {
      uVar8 = uVar13;
      func_0x000104c2d614();
      if (((uVar8 & 1) == 0) && (func_0x0001078c6030(), uVar8 != 0)) {
        ppuVar10 = ppuVar10 + 7;
        FUN_1078c451c(&puStack_158);
        if ((bStack_138 & 1) == 0) goto LAB_1078c1d1c;
        lVar15 = *(long *)(lVar11 + 0x140);
        lVar3 = plStack_148[1];
        uVar19 = param_3;
        for (lVar14 = *plStack_148; puVar9 = puStack_158, lVar14 != lVar3; lVar14 = lVar14 + 0x38) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&puStack_d0,lVar14);
          uStack_b0 = *(undefined8 *)(uVar13 + 0x50);
          uStack_b8 = *(undefined8 *)(uVar13 + 0x48);
          uStack_a0 = *(undefined8 *)(uVar13 + 0x60);
          param_2 = *(ulong *)(uVar13 + 0x58);
          ppuVar10 = &puStack_d0;
          uStack_a8 = param_2;
          func_0x0001074c5cd0(lVar15 + 0x1f0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_d0);
        }
        if ((bStack_138 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1078c1ec8;
        }
        func_0x0001078c2250(*(long *)(uVar13 + 0x38) + 0xc0);
        param_3 = uVar19;
        if (puVar9 == (undefined4 *)0x0) {
LAB_1078c1c78:
          if ((bStack_138 & 1) != 0) {
            func_0x0001078d2cb0(&puStack_e0,puStack_158);
            uVar7 = puStack_e0 == (undefined8 *)0x1;
            if ((bool)uVar7) {
              ppuVar10 = &puStack_d8;
              func_0x00010811e74c(*(undefined8 *)(uVar13 + 0x38));
              func_0x0001078c6010();
              func_0x0001078c6044();
              goto LAB_1078c1cac;
            }
            func_0x0001078c6004();
            func_0x0001078c6058(&UNK_10f433ce3);
            func_0x0001078c5d1c();
            func_0x0001078c60d0();
            func_0x0001078c6010();
            goto LAB_1078c1e5c;
          }
          func_0x000104bdc2c8();
          goto LAB_1078c1ec8;
        }
        fVar20 = **(float **)(lVar11 + 0x90);
        func_0x00010778196c();
        fVar17 = (float)NEON_ucvtf(*puVar9);
        fVar18 = (float)param_2 / fVar20;
        param_2 = (ulong)(uint)fVar18;
        if (lVar16 != 0x68 || (int)(fVar17 / fVar20) != (int)fVar18) goto LAB_1078c1c78;
        fVar17 = (float)NEON_ucvtf(puVar9[1]);
        param_2 = (ulong)(uint)(fVar17 / fVar20);
        uVar7 = (int)(fVar17 / fVar20) == (int)((float)uVar19 / fVar20);
        if (!(bool)uVar7) goto LAB_1078c1c78;
        func_0x0001078c6030();
        if (puVar9 == (undefined4 *)0x0) goto LAB_1078c1ebc;
        func_0x000107273b60(auStack_f8,1);
        puVar1 = puStack_e8;
        puStack_e8[2] = 0;
        *puStack_e8 = &PTR_DAT_110996440;
        puStack_e8[1] = 0;
        func_0x000104c2fe00(&puStack_d0,auStack_130);
        puStack_d8 = ppuVar10[8];
        puStack_e0 = ppuVar10[7];
        if (ppuVar10[8] != (undefined8 *)0x0) {
          do {
            func_0x0001078c5d48();
          } while (extraout_w10_00 != 0);
        }
        func_0x00010778149c(puVar1 + 3,&puStack_d0,&puStack_e0);
        func_0x00010725af58(&puStack_e0);
        func_0x000104c2f714(&puStack_d0);
        puVar5 = puStack_e8;
        puStack_e8 = (undefined8 *)0x0;
        puVar1 = puVar5 + 3;
        func_0x000107273c84(auStack_f8);
        puStack_d0 = (undefined8 *)0x0;
        puStack_c8 = (undefined8 *)0x0;
        func_0x000107272e90(&puStack_d0);
        puStack_160 = puVar5;
        uStack_178 = 0;
        uStack_170 = 0;
        puStack_168 = puVar1;
        func_0x000107272e90(&uStack_178);
        puStack_c8 = puVar5;
        puStack_d0 = puVar1;
        if (puVar5 != (undefined8 *)0x0) {
          do {
            func_0x0001078c5d48();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001078c4538(auStack_f8,*(long *)(lVar11 + 0x140) + 0x1f0);
        func_0x0001074c61ec(auStack_c0,auStack_f8);
        FUN_1078c476c(param_1,&puStack_d0);
        func_0x000107470508(&puStack_d0);
        func_0x0001074736dc(auStack_f8);
        func_0x00010725af58(&puStack_168);
      }
      else {
        puStack_158 = (undefined4 *)((ulong)puStack_158 & 0xffffffffffffff00);
        bStack_138 = 0;
LAB_1078c1d1c:
        func_0x0001078c6004();
        func_0x0001078c6058(&UNK_10f433cce);
        func_0x0001078c5d1c();
        func_0x0001078c60d0();
      }
LAB_1078c1e5c:
      func_0x0001078c6044();
      goto LAB_1078c1e60;
    }
LAB_1078c1cac:
    uVar13 = uVar13 + 0x68;
  } while( true );
}



/* Entry: 1078c22b8; end: 1078c22cb;  */

void FUN_1078c22b8(void)

{
  func_0x0001078c22ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078c2c9c; end: 1078c2fc7;  */

void FUN_1078c2c9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  undefined8 *puVar7;
  long extraout_x8_00;
  undefined8 *puVar8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  func_0x0001078c5e7c();
  func_0x0001078c30a8();
  if (param_1 != 0) goto LAB_1078c2f50;
  if ((ulong)unaff_x19[4] < 0x55) {
    puVar8 = (undefined8 *)unaff_x19[1];
    puVar14 = (undefined8 *)unaff_x19[2];
    puVar10 = (undefined8 *)*unaff_x19;
    puVar16 = unaff_x19 + 3;
    puVar9 = (undefined8 *)*puVar16;
    if ((ulong)((long)puVar9 - (long)puVar10) <= (ulong)((long)puVar14 - (long)puVar8)) {
      lVar5 = (long)puVar9 - (long)puVar10 >> 2;
      if (puVar9 == puVar10) {
        lVar5 = 1;
      }
      func_0x0001078c3174(&puStack_b8,lVar5,(long)puVar14 - (long)puVar8 >> 3,puVar16);
      uVar4 = 0xff0;
      __Znwm();
      puVar8 = puStack_b0;
      puStack_c8 = unaff_x19 + 5;
      uStack_c0 = 0x55;
      puVar14 = puStack_b8;
      puVar16 = puStack_a0;
      if (puStack_a8 == puStack_a0) {
        uStack_d0 = uVar4;
        if (puStack_b0 < puStack_b8 || (long)puStack_b0 - (long)puStack_b8 == 0) {
          uVar6 = (long)puStack_a8 - (long)puStack_b8 >> 2;
          if ((long)puStack_a8 - (long)puStack_b8 == 0) {
            uVar6 = 1;
          }
          func_0x0001078c3174(&puStack_90,uVar6,uVar6 >> 2,uStack_98);
          func_0x0001078c3230(&puStack_90,puStack_b0,puStack_a8);
          puVar16 = puStack_78;
          puVar9 = puStack_80;
          puVar14 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_90 = puStack_b8;
          puStack_88 = puVar8;
          puStack_80 = puStack_a8;
          puStack_78 = puStack_a0;
          func_0x0001078c5ff4();
          puStack_a8 = puVar9;
        }
        else {
          func_0x0001078c6128((long)puStack_b0 - (long)puStack_b8);
          puVar8 = puStack_b0 + extraout_x8 / -2;
          lVar5 = (long)puStack_a8 - (long)puStack_b0;
          if (lVar5 != 0) {
            _memmove(puVar8,puStack_b0,lVar5);
          }
          puStack_a8 = (undefined8 *)((long)puVar8 + lVar5);
          puStack_b0 = puVar8;
        }
      }
      puVar8 = puStack_a8 + 1;
      *puStack_a8 = uVar4;
      uStack_d0 = 0;
      puVar9 = (undefined8 *)unaff_x19[2];
      while (puVar10 = puStack_b0, puVar7 = (undefined8 *)unaff_x19[1], puVar9 != puVar7) {
        puVar7 = puStack_b0;
        if (puStack_b0 == puVar14) {
          if (puVar8 < puVar16) {
            func_0x0001078c6128((long)puVar16 - (long)puVar8);
            lVar5 = (long)puVar8 - (long)puVar14;
            puVar1 = puVar8 + extraout_x8_00 / 2;
            puVar7 = (undefined8 *)((long)puVar1 - ((long)puVar8 - (long)puVar14));
            puVar8 = puVar1;
            if (lVar5 != 0) {
              _memmove(puVar7,puVar10,lVar5);
            }
          }
          else {
            lVar5 = (long)puVar16 - (long)puVar14 >> 2;
            if ((long)puVar16 - (long)puVar14 == 0) {
              lVar5 = 1;
            }
            func_0x0001078c3174(&puStack_90,lVar5,lVar5 + 3U >> 2,uStack_98);
            func_0x0001078c3230(&puStack_90,puVar14,puVar8);
            puVar3 = puStack_78;
            puVar2 = puStack_80;
            puVar7 = puStack_88;
            puVar1 = puStack_90;
            puStack_88 = puVar10;
            puStack_90 = puVar14;
            puStack_80 = puVar8;
            puStack_78 = puVar16;
            func_0x0001078c5ff4();
            puVar8 = puVar2;
            puVar14 = puVar1;
            puVar16 = puVar3;
          }
        }
        puVar9 = puVar9 + -1;
        puStack_b0 = puVar7 + -1;
        *puStack_b0 = *puVar9;
      }
      puStack_b8 = (undefined8 *)*unaff_x19;
      *unaff_x19 = puVar14;
      unaff_x19[1] = puStack_b0;
      puStack_a0 = (undefined8 *)unaff_x19[3];
      puStack_a8 = (undefined8 *)unaff_x19[2];
      unaff_x19[2] = puVar8;
      unaff_x19[3] = puVar16;
      puStack_b0 = puVar7;
      func_0x0001078c31cc(&uStack_d0);
      func_0x0001078c31f0(&puStack_b8);
      goto LAB_1078c2f50;
    }
    uVar4 = 0xff0;
    __Znwm();
    if (puVar9 != puVar14) {
      *puVar14 = uVar4;
      unaff_x19[2] = puVar14 + 1;
      goto LAB_1078c2f50;
    }
    if (puVar8 == puVar10) {
      lVar5 = (long)puVar9 - (long)puVar8 >> 2;
      if (puVar14 == puVar8) {
        lVar5 = 1;
      }
      func_0x0001078c3174(&puStack_90,lVar5,lVar5 + 3U >> 2,puVar16);
      func_0x0001078c3230(&puStack_90,unaff_x19[1],unaff_x19[2]);
      puVar14 = (undefined8 *)unaff_x19[1];
      puVar8 = (undefined8 *)*unaff_x19;
      puVar9 = (undefined8 *)unaff_x19[3];
      puVar16 = (undefined8 *)unaff_x19[2];
      unaff_x19[1] = puStack_88;
      *unaff_x19 = puStack_90;
      unaff_x19[3] = puStack_78;
      unaff_x19[2] = puStack_80;
      puStack_90 = puVar8;
      puStack_88 = puVar14;
      puStack_80 = puVar16;
      puStack_78 = puVar9;
      func_0x0001078c5ff4();
      puVar8 = (undefined8 *)unaff_x19[1];
    }
    puVar8[-1] = uVar4;
    unaff_x19[1] = puVar8;
    func_0x0001078c5f10();
  }
  else {
    func_0x0001078c5fb0(unaff_x19[4] - 0x55);
  }
  func_0x0001078c30c4();
LAB_1078c2f50:
  puVar8 = (undefined8 *)
           (*(long *)(unaff_x19[1] + ((ulong)(unaff_x19[5] + unaff_x19[4]) / 0x55) * 8) +
           ((ulong)(unaff_x19[5] + unaff_x19[4]) % 0x55) * 0x30);
  uVar11 = unaff_x20[1];
  uVar4 = *unaff_x20;
  uVar12 = unaff_x20[2];
  uVar15 = unaff_x20[5];
  uVar13 = unaff_x20[4];
  puVar8[3] = unaff_x20[3];
  puVar8[2] = uVar12;
  puVar8[5] = uVar15;
  puVar8[4] = uVar13;
  puVar8[1] = uVar11;
  *puVar8 = uVar4;
  unaff_x19[5] = unaff_x19[5] + 1;
  return;
}



/* Entry: 1078c3258; end: 1078c329b;  */

/* WARNING: Possible PIC construction at 0x0001078c3278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078c327c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3298) */
/* WARNING: Removing unreachable block (ram,0x0001078c3290) */
/* WARNING: Removing unreachable block (ram,0x0001078c5e60) */

void FUN_1078c3258(undefined8 param_1)

{
  undefined1 uStack_51;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x0001078c5bdc();
  uStack_48 = 0x1078c327c;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x0001078c32c0(auStack_38,&uStack_51,param_1);
  return;
}



/* Entry: 1078c36ac; end: 1078c370f;  */

/* WARNING: Possible PIC construction at 0x0001078c37c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c37fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c383c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c38e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c391c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c3794: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078c3920) */
/* WARNING: Removing unreachable block (ram,0x0001078c38e8) */
/* WARNING: Removing unreachable block (ram,0x0001078c3840) */
/* WARNING: Removing unreachable block (ram,0x0001078c3800) */
/* WARNING: Removing unreachable block (ram,0x0001078c380c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3848) */
/* WARNING: Removing unreachable block (ram,0x0001078c3820) */
/* WARNING: Removing unreachable block (ram,0x0001078c3830) */
/* WARNING: Removing unreachable block (ram,0x0001078c384c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3854) */
/* WARNING: Removing unreachable block (ram,0x0001078c37cc) */
/* WARNING: Removing unreachable block (ram,0x0001078c37d8) */
/* WARNING: Removing unreachable block (ram,0x0001078c37e4) */
/* WARNING: Removing unreachable block (ram,0x0001078c3838) */
/* WARNING: Removing unreachable block (ram,0x0001078c37fc) */
/* WARNING: Removing unreachable block (ram,0x0001078c3798) */

void FUN_1078c36ac(undefined8 param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined1 *puVar7;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 ***pppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_100 [8];
  undefined1 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [104];
  undefined8 uStack_28;
  
  puVar6 = auStack_90;
  puVar4 = auStack_90;
  func_0x0001078c5e98();
  func_0x0001078c5bdc();
  uStack_28 = extraout_x8;
  func_0x0001078c6064(auStack_90);
  func_0x0001078c3da8();
  func_0x0001078c3da8();
  func_0x0001078c2c24();
  func_0x0001078c5b3c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_100;
  puStack_98 = &UNK_1078c3710;
  pppuVar8 = &ppuStack_a0;
  if (param_3 == 0) {
    return;
  }
  ppuStack_a0 = (undefined8 **)&stack0xfffffffffffffff0;
  if (param_3 == 2) {
    puStack_f0 = &uStack_e8;
    uStack_e8 = 0;
    puVar7 = puVar6 + -0x68;
    puVar1 = (uint *)(puVar6 + -0x28);
    puVar6 = puVar4;
    if (*(uint *)(puVar4 + 0x40) <= *puVar1) {
      puVar6 = puVar7;
      puVar7 = puVar4;
    }
    puVar9 = &UNK_1078c3798;
    puVar5 = param_4;
  }
  else {
    if (param_3 != 1) {
      puVar7 = puVar6;
      puStack_f8 = param_4;
      if ((long)param_3 < 9) {
        if (puVar4 != puVar6) {
          puStack_f0 = &uStack_e8;
          uStack_e8 = 0;
          func_0x0001078c5f10();
          puVar9 = &UNK_1078c37cc;
          puVar3 = auStack_100;
          puVar5 = puVar4;
          goto code_r0x0001078c3378;
        }
      }
      else {
        param_3 = param_3 >> 1;
        puVar2 = puVar4 + param_3 * 0x68;
        func_0x0001078c33e8(puVar4,puVar2,param_3,param_4,param_3);
        puVar5 = puVar2;
        func_0x0001078c33e8();
        puStack_f0 = &uStack_e8;
        uStack_e8 = 0;
        puVar3 = puVar2;
        while (puVar4 != puVar2) {
          if (puVar3 == puVar6) {
            if (puVar4 == puVar2) goto code_r0x0001078c3934;
            func_0x0001078c5f10();
            puVar9 = &UNK_1078c3920;
            puVar3 = auStack_100;
            goto code_r0x0001078c3378;
          }
          puVar5 = param_4;
          if (*(uint *)(puVar4 + 0x40) <= *(uint *)(puVar3 + 0x40)) {
            puVar9 = &UNK_1078c38e8;
            puVar3 = auStack_100;
            puVar7 = puVar4;
            goto code_r0x0001078c3378;
          }
          func_0x0001078c60b8();
          puVar3 = puVar3 + 0x68;
          func_0x0001078c5c88();
          param_4 = param_4 + 0x68;
        }
        for (; puVar3 != puVar6; puVar3 = puVar3 + 0x68) {
          func_0x0001078c60b8(param_4);
          param_4 = param_4 + 0x68;
          func_0x0001078c5c88();
        }
code_r0x0001078c3934:
        puStack_f8 = (undefined1 *)0x0;
        func_0x0001078c395c(&puStack_f8);
      }
      return;
    }
    func_0x0001078c5f10();
    puVar3 = auStack_90;
    puVar5 = puVar4;
    puVar7 = puVar6;
    param_4 = unaff_x19;
    puVar6 = unaff_x20;
    pppuVar8 = (undefined8 ***)ppuStack_a0;
    puVar9 = puStack_98;
  }
code_r0x0001078c3378:
  *(undefined1 **)(puVar3 + -0x20) = puVar6;
  *(undefined1 **)(puVar3 + -0x18) = param_4;
  *(undefined8 ****)(puVar3 + -0x10) = pppuVar8;
  *(undefined **)(puVar3 + -8) = puVar9;
  func_0x000104c318bc();
  *(undefined8 *)(puVar5 + 0x38) = *(undefined8 *)(puVar7 + 0x38);
  *(undefined8 *)(puVar7 + 0x38) = 0;
  uVar11 = *(undefined8 *)(puVar7 + 0x48);
  uVar10 = *(undefined8 *)(puVar7 + 0x40);
  uVar13 = *(undefined8 *)(puVar7 + 0x58);
  uVar12 = *(undefined8 *)(puVar7 + 0x50);
  *(undefined8 *)(puVar5 + 0x60) = *(undefined8 *)(puVar7 + 0x60);
  *(undefined8 *)(puVar5 + 0x48) = uVar11;
  *(undefined8 *)(puVar5 + 0x40) = uVar10;
  *(undefined8 *)(puVar5 + 0x58) = uVar13;
  *(undefined8 *)(puVar5 + 0x50) = uVar12;
  return;
}



/* Entry: 1078c412c; end: 1078c41ef;  */

void FUN_1078c412c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x0001078c5e7c();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == (undefined8 *)*puStack_50) {
    uVar5 = *unaff_x19;
    uVar2 = unaff_x19[1];
    bVar1 = uVar2 == uVar5;
    if (uVar5 < uVar2) {
      func_0x0001078c5f74();
      if (!bVar1) {
        func_0x0001078c6024();
        uVar2 = unaff_x19[1];
      }
      puVar3 = (undefined8 *)(unaff_x21 + unaff_x22);
      unaff_x19[1] = uVar2 + unaff_x23 * 8;
    }
    else {
      uVar4 = (long)((long)puVar3 - uVar5) >> 2;
      if ((long)puVar3 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar5 = uVar4;
      func_0x0001078c4218();
      uStack_68 = uVar5 + (uVar4 >> 2) * 8;
      uStack_58 = uVar5 + uVar2 * 8;
      uStack_70 = uVar5;
      uStack_60 = uStack_68;
      func_0x0001078c41f0(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar2 = unaff_x19[1];
      uVar5 = *unaff_x19;
      uVar6 = unaff_x19[3];
      uVar4 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar5;
      uStack_68 = uVar2;
      uStack_60 = uVar4;
      uStack_58 = uVar6;
      func_0x0001078c4270(&uStack_70);
      puVar3 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar3 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar3 + 1);
  return;
}



/* Entry: 1078c451c; end: 1078c4537;  */

void FUN_1078c451c(long param_1)

{
  func_0x000107471ec0();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1078c476c; end: 1078c4783;  */

void FUN_1078c476c(void)

{
  func_0x0001078c4784();
  return;
}



/* Entry: 1078c495c; end: 1078c4a07;  */

/* WARNING: Possible PIC construction at 0x0001078c4988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078c498c) */
/* WARNING: Removing unreachable block (ram,0x0001078c49ec) */
/* WARNING: Removing unreachable block (ram,0x0001078c4a04) */
/* WARNING: Removing unreachable block (ram,0x0001078c49d4) */

void FUN_1078c495c(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char **ppcVar2;
  char **in_x3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined1 uStack_34e;
  undefined1 uStack_34d;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined1 auStack_330 [56];
  undefined1 auStack_2f8 [56];
  undefined1 auStack_2c0 [96];
  undefined8 uStack_260;
  undefined8 uStack_258;
  char *apcStack_200 [13];
  undefined8 uStack_198;
  undefined1 auStack_148 [280];
  
  func_0x0001078c5bdc();
  func_0x0001078c5bdc();
  apcStack_200[0] = "image";
  ppcVar2 = apcStack_200;
  uStack_198 = extraout_x8;
  func_0x0001078c55bc();
  if (in_x3 == (char **)0x0) {
    FUN_1077e3670(auStack_2c0);
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c4a68 + (ulong)(byte)(&UNK_10ded9730)[extraout_x8_00] * 4))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_00;
    in_ZR = (uint)extraout_x8_00 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b8c();
      func_0x0001078c5d9c();
      func_0x0001078c5b6c();
    }
    else {
      func_0x0001078c5b8c();
      func_0x0001078c5d9c();
      func_0x0001078c5b6c();
    }
    func_0x00010726b164(&uStack_260);
    in_x3 = apcStack_200;
    func_0x00010726b144();
  }
  apcStack_200[0] = "encryption-key";
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    func_0x0001077e3748(auStack_2f8);
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c4b5c + (ulong)(byte)(&UNK_10ded9738)[extraout_x8_01] * 4))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_01;
    in_ZR = (uint)extraout_x8_01 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b2c();
    }
    else {
      func_0x0001078c5b2c();
    }
    func_0x0001077e3748(&uStack_260);
    func_0x0001078c6078(auStack_2f8);
    func_0x000104c2f714(&uStack_260);
    in_x3 = apcStack_200;
    func_0x00010724b3d8();
  }
  apcStack_200[0] = "encryption-iv";
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    func_0x0001077e37f4(auStack_330);
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c4c18 + (ulong)(byte)(&UNK_10ded9740)[extraout_x8_02] * 4))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_02;
    in_ZR = (uint)extraout_x8_02 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b2c();
    }
    else {
      func_0x0001078c5b2c();
    }
    func_0x0001077e37f4(&uStack_260);
    func_0x0001078c6078(auStack_330);
    func_0x000104c2f714(&uStack_260);
    in_x3 = apcStack_200;
    func_0x00010724b3d8();
  }
  apcStack_200[0] = "x";
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    uStack_334 = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c4cd4 + (ulong)(byte)(&UNK_10ded9748)[extraout_x8_03] * 4))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_03;
    in_ZR = (uint)extraout_x8_03 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uStack_334 = 0;
    if (!(bool)in_ZR) {
      uStack_334 = param_1;
    }
  }
  apcStack_200[0] = "y";
  uVar4 = uStack_334;
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    uStack_338 = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c4d74 + (ulong)(byte)(&UNK_10ded9750)[extraout_x8_04] * 4))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_04;
    in_ZR = (uint)extraout_x8_04 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uStack_338 = 0;
    if (!(bool)in_ZR) {
      uStack_338 = uVar4;
    }
  }
  apcStack_200[0] = "anchor";
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    uStack_340 = 0xbf800000;
    uVar4 = 0xbf800000;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c4e14 + (ulong)(byte)(&UNK_10ded9758)[extraout_x8_05] * 4))();
      return;
    }
    if ((int)extraout_x8_05 == 8) {
      func_0x0001078c5c38();
    }
    else {
      func_0x0001078c5c38();
    }
    uVar4 = (undefined4)((ulong)in_x3 >> 0x20);
    in_ZR = ((ulong)ppcVar2 & 1) == 0;
    in_CY = 0;
    param_3 = 0xbf800000;
    uStack_340 = SUB84(in_x3,0);
    if ((bool)in_ZR) {
      uVar4 = 0xbf800000;
      uStack_340 = 0xbf800000;
    }
  }
  apcStack_200[0] = "z-index";
  uStack_33c = uVar4;
  uVar3 = uStack_340;
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    uStack_344 = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c4ec8 + (ulong)(byte)(&UNK_10ded9760)[extraout_x8_06] * 4))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_06;
    in_ZR = (uint)extraout_x8_06 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0;
    uStack_344 = 0;
    if (!(bool)in_ZR) {
      uStack_344 = uVar3;
    }
  }
  apcStack_200[0] = "width";
  uVar3 = uStack_344;
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    uStack_348 = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c4f68 + (ulong)(byte)(&UNK_10ded9768)[extraout_x8_07] * 4))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_07;
    in_ZR = (uint)extraout_x8_07 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0;
    uStack_348 = 0;
    if (!(bool)in_ZR) {
      uStack_348 = uVar3;
    }
  }
  apcStack_200[0] = "height";
  uVar3 = uStack_348;
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    uStack_34c = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c5004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c5008 + (ulong)(byte)(&UNK_10ded9770)[extraout_x8_08] * 4))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_08;
    in_ZR = (uint)extraout_x8_08 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0;
    uStack_34c = 0;
    if (!(bool)in_ZR) {
      uStack_34c = uVar3;
    }
  }
  apcStack_200[0] = "mirror-x";
  uVar3 = uStack_34c;
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    uStack_34d = false;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c50a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c50a8 + (ulong)(byte)(&UNK_10ded9778)[extraout_x8_09] * 4))();
      return;
    }
    if ((int)extraout_x8_09 == 8) {
      func_0x0001078c5b9c();
    }
    else {
      func_0x0001078c5b9c();
    }
    in_ZR = (((uint)in_x3 ^ 0xffffffff) & 0x101) == 0;
    in_CY = 0;
    uStack_34d = in_ZR;
  }
  apcStack_200[0] = "mirror-y";
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    uStack_34e = false;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c5148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c514c + (ulong)(byte)(&UNK_10ded9780)[extraout_x8_10] * 4))();
      return;
    }
    if ((int)extraout_x8_10 == 8) {
      func_0x0001078c5b9c();
    }
    else {
      func_0x0001078c5b9c();
    }
    in_ZR = (((uint)in_x3 ^ 0xffffffff) & 0x101) == 0;
    in_CY = 0;
    uStack_34e = in_ZR;
  }
  apcStack_200[0] = "rotation";
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    uStack_354 = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c51ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c51f0 + (ulong)(byte)(&UNK_10ded9788)[extraout_x8_11] * 4))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_11;
    in_ZR = (uint)extraout_x8_11 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0;
    uStack_354 = 0;
    if (!(bool)in_ZR) {
      uStack_354 = uVar3;
    }
  }
  apcStack_200[0] = "scale";
  uVar3 = uStack_354;
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    uStack_358 = 0x3f800000;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c528c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c5290 + (ulong)(byte)(&UNK_10ded9790)[extraout_x8_12] * 4))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_12;
    in_ZR = (uint)extraout_x8_12 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0x3f800000;
    uStack_358 = 0x3f800000;
    if (!(bool)in_ZR) {
      uStack_358 = uVar3;
    }
  }
  apcStack_200[0] = "tint-color";
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    param_4 = 0;
    uVar3 = 0x3f800000;
    uVar4 = 0x3f800000;
    param_3 = 0x3f800000;
  }
  else {
    uVar1 = *(uint *)(ppcVar2 + 0x14);
    in_CY = 6 < uVar1;
    in_ZR = uVar1 == 7;
    switch(uVar1) {
    case 0:
      func_0x0001078c5b7c();
      break;
    case 1:
      func_0x0001078c5b7c();
      break;
    case 2:
      func_0x0001078c5b7c();
      break;
    case 3:
      func_0x0001078c5b7c();
      break;
    case 4:
      uVar3 = *(undefined4 *)(ppcVar2 + 8);
      uVar4 = *(undefined4 *)((long)ppcVar2 + 0x44);
      param_3 = *(undefined4 *)(ppcVar2 + 9);
      param_4 = *(undefined4 *)((long)ppcVar2 + 0x4c);
      goto code_r0x0001078c53bc;
    case 5:
      func_0x0001078c5b7c();
      break;
    case 6:
      func_0x0001078c5b7c();
      break;
    case 7:
      func_0x0001078c5b7c();
      break;
    default:
      in_CY = 7 < uVar1;
      in_ZR = uVar1 == 8;
      if ((bool)in_ZR) {
        func_0x0001078c5b7c();
      }
      else {
        func_0x0001078c5b7c();
      }
    }
    uVar3 = 0x3f800000;
    uStack_258 = 0x3f800000;
    uStack_260 = 0x3f8000003f800000;
    in_x3 = apcStack_200;
    func_0x0001078c5674(in_x3,&uStack_260);
  }
code_r0x0001078c53bc:
  apcStack_200[0] = "opacity";
  uStack_368 = uVar3;
  uStack_364 = uVar4;
  uStack_360 = param_3;
  uStack_35c = param_4;
  func_0x0001078c5bc0();
  if (in_x3 == (char **)0x0) {
    uVar4 = 0x3f800000;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c53f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078c53f8 + (ulong)(byte)(&UNK_10ded97a0)[extraout_x8_13] * 4))();
      return;
    }
    in_ZR = (int)extraout_x8_13 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0x3f800000;
    if (!(bool)in_ZR) {
      uVar4 = uVar3;
    }
  }
  uStack_260 = CONCAT44(uStack_260._4_4_,uVar4);
  FUN_1077e32d8(auStack_148,auStack_2c0,auStack_2f8,auStack_330,&uStack_334,&uStack_338,&uStack_340,
                &uStack_344,&uStack_348,&uStack_34c,&uStack_34d,&uStack_34e,&uStack_354,&uStack_358,
                &uStack_368,&uStack_260);
  func_0x000104c2f714(auStack_330);
  func_0x000104c2f714(auStack_2f8);
  func_0x00010726b164(auStack_2c0);
  func_0x0001078c5b3c(uStack_198);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726b164(&uStack_260);
  func_0x00010726b144(apcStack_200);
  do {
    func_0x0001078c5cc8();
  } while( true );
}



/* Entry: 1078c57b0; end: 1078c5827;  */

bool FUN_1078c57b0(undefined8 *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010727a3f0(param_2,*param_1,param_2 + 0x38);
  _strlen();
  func_0x00010014c53c();
  func_0x00010014c2bc();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (unaff_x21 == unaff_x19) {
    func_0x000100067218(&stack0xffffffffffffffe0,unaff_x20,unaff_x19);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1078c5948; end: 1078c595b;  */

void FUN_1078c5948(void)

{
  func_0x0001078c5914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078cad58; end: 1078caebb;  */

/* WARNING: Possible PIC construction at 0x0001078cadbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078cadc0) */
/* WARNING: Removing unreachable block (ram,0x0001078cae28) */
/* WARNING: Removing unreachable block (ram,0x0001078cae2c) */
/* WARNING: Removing unreachable block (ram,0x0001078cae3c) */
/* WARNING: Removing unreachable block (ram,0x0001078cae40) */
/* WARNING: Removing unreachable block (ram,0x0001078cae7c) */
/* WARNING: Removing unreachable block (ram,0x0001078cae90) */
/* WARNING: Removing unreachable block (ram,0x0001078caea8) */
/* WARNING: Removing unreachable block (ram,0x0001078cae5c) */

undefined8 * FUN_1078cad58(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  undefined1 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_70 [64];
  
  func_0x0001078d2214();
  func_0x000104c2f64c(auStack_70);
  uStack_b8 = 0;
  lStack_b0 = 0;
  lVar1 = *param_2;
  lStack_c0 = param_2[1];
  lStack_c8 = lVar1;
  if (lStack_c0 != 0) {
    do {
      func_0x0001078d2394();
    } while (extraout_w10 != 0);
  }
  lStack_d8 = lVar1 + 0x208;
  uStack_d0 = 1;
  func_0x00010724e404();
  uVar2 = *(undefined8 *)(lVar1 + 0x330);
  lVar3 = *(long *)(lVar1 + 0x338);
  uStack_e8 = 0x1078cadc0;
  lStack_100 = lVar1;
  plStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (lVar3 != 0) {
    do {
      func_0x0001078d2394();
    } while (extraout_w10_00 != 0);
  }
  uStack_108 = lStack_b0;
  uStack_110 = uStack_b8;
  uStack_b8 = uVar2;
  lStack_b0 = lVar3;
  func_0x0001078caf08(&uStack_110);
  return &uStack_b8;
}



/* Entry: 1078cbd94; end: 1078cbdbb;  */

void FUN_1078cbd94(void)

{
  undefined1 in_ZR;
  
  func_0x0001078d2bd8();
  if (!(bool)in_ZR) {
    func_0x0001078d2480();
    func_0x0001078cd108();
  }
  return;
}



/* Entry: 1078cd440; end: 1078cd47f;  */

ulong FUN_1078cd440(float param_1,float *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    func_0x00010726a954();
    return (ulong)(uint)(param_1 * *param_2) | 0x100000000;
  }
  return 0;
}



/* Entry: 1078cdcb8; end: 1078cdd3f;  */

long FUN_1078cdcb8(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  
  lVar3 = 0;
  lVar2 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 3;
  while( true ) {
    if (lVar2 == lVar3) {
      return lVar2;
    }
    func_0x00010811f618(&lStack_48,param_1,lVar3);
    lVar1 = lStack_48;
    lVar4 = *param_2;
    func_0x0001078bee2c(&lStack_48);
    if (lVar1 == lVar4) break;
    lVar3 = lVar3 + 1;
  }
  return lVar3;
}



/* Entry: 1078ce040; end: 1078ce0ef;  */

void FUN_1078ce040(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  func_0x0001078d25ec();
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == *(undefined8 **)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    uVar2 = unaff_x19[1];
    bVar1 = uVar2 == uVar4;
    if (uVar4 < uVar2) {
      func_0x0001078d2888();
      if (!bVar1) {
        func_0x0001078d29ac();
        uVar2 = unaff_x19[1];
      }
      puVar3 = (undefined8 *)(unaff_x21 + unaff_x22);
      unaff_x19[1] = uVar2 + unaff_x23 * 8;
    }
    else {
      uVar2 = (long)((long)puVar3 - uVar4) >> 2;
      if ((long)puVar3 - uVar4 == 0) {
        uVar2 = 1;
      }
      func_0x0001078ce0f0(&uStack_70,uVar2,uVar2 >> 2);
      func_0x0001078ce1b0(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar2 = unaff_x19[1];
      uVar4 = *unaff_x19;
      uVar6 = unaff_x19[3];
      uVar5 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar4;
      uStack_68 = uVar2;
      uStack_60 = uVar5;
      uStack_58 = uVar6;
      func_0x0001078ce170(&uStack_70);
      puVar3 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar3 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar3 + 1);
  return;
}



/* Entry: 1078ce27c; end: 1078ce2c7;  */

ulong FUN_1078ce27c(float *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x00010726a954();
    return (ulong)(uint)(int)*param_1 | 0x100000000;
  }
  return 0;
}



/* Entry: 1078ce3fc; end: 1078ce44f;  */

void FUN_1078ce3fc(long param_1,long param_2)

{
  int extraout_w11;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x0001078d2300();
      } while (extraout_w11 != 0);
    }
    func_0x0001078d2a6c();
    func_0x0001078d2a80();
    return;
  }
  return;
}



/* Entry: 1078ce538; end: 1078ce55f;  */

long FUN_1078ce538(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001078ce560();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1078ce654; end: 1078ce717;  */

void FUN_1078ce654(long param_1)

{
  long *unaff_x19;
  long lVar1;
  
  func_0x0001078d2be4();
  lVar1 = *unaff_x19;
  while (param_1 != lVar1) {
    param_1 = param_1 + -0x40;
    func_0x0001078cddf8();
  }
  unaff_x19[1] = lVar1;
  return;
}



/* Entry: 1078cea28; end: 1078cea53;  */

long FUN_1078cea28(long param_1)

{
  func_0x0001078cd000(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1078cf084; end: 1078cf0ab;  */

void FUN_1078cf084(long param_1,undefined8 *param_2,long param_3)

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



/* Entry: 1078cf384; end: 1078cf42f;  */

/* WARNING: Possible PIC construction at 0x0001078cf3b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078cf3b4) */
/* WARNING: Removing unreachable block (ram,0x0001078cf414) */
/* WARNING: Removing unreachable block (ram,0x0001078cf42c) */
/* WARNING: Removing unreachable block (ram,0x0001078cf3fc) */
/* WARNING: Type propagation algorithm not settling */

mach_header *
FUN_1078cf384(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  mach_header *pmVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  mach_header *in_x3;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  mach_header *pmVar4;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  undefined8 uVar5;
  uint uVar6;
  dword dVar7;
  dword dVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  mach_header mStack_5b8;
  undefined1 uStack_585;
  dword dStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined1 uStack_572;
  undefined1 uStack_571;
  undefined4 uStack_570;
  undefined1 uStack_56c;
  undefined4 uStack_568;
  undefined1 uStack_564;
  undefined4 uStack_560;
  undefined1 uStack_55c;
  undefined4 uStack_558;
  undefined1 uStack_554;
  undefined4 uStack_550;
  undefined1 uStack_54c;
  undefined4 uStack_548;
  undefined1 uStack_544;
  undefined4 uStack_540;
  undefined1 uStack_53c;
  undefined4 uStack_538;
  undefined1 uStack_534;
  undefined4 uStack_530;
  undefined1 uStack_52c;
  undefined4 uStack_528;
  undefined1 uStack_524;
  undefined4 uStack_520;
  undefined1 uStack_51c;
  undefined1 uStack_514;
  undefined1 uStack_513;
  undefined1 uStack_512;
  undefined1 uStack_511;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 uStack_500;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4e0;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined4 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  undefined1 uStack_492;
  undefined1 uStack_491;
  undefined1 uStack_490;
  undefined1 uStack_48f;
  undefined1 uStack_48e;
  undefined1 uStack_48d;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  uint uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined1 uStack_441;
  undefined1 auStack_440 [56];
  undefined1 auStack_408 [56];
  mach_header amStack_3d0 [3];
  undefined8 uStack_370;
  undefined8 uStack_368;
  char *apcStack_310 [13];
  undefined8 uStack_2a8;
  undefined1 auStack_258 [552];
  
  func_0x0001078d2214();
  func_0x0001078d2214();
  apcStack_310[0] = "type";
  pmVar1 = (mach_header *)apcStack_310;
  uStack_2a8 = extraout_x8;
  func_0x0001078c55bc();
  if (in_x3 == (mach_header *)0x0) {
    uStack_441 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cf490 + (ulong)(byte)(&UNK_10ded992c)[extraout_x8_00] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_00;
    in_ZR = (uint)extraout_x8_00 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2230();
    }
    else {
      func_0x0001078d2230();
    }
    func_0x0001078d2710();
    uStack_441 = extraout_w8;
  }
  apcStack_310[0] = "fill-color";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    func_0x0001078d2810();
    param_4 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cf528 + (ulong)(byte)(&UNK_10ded9934)[extraout_x8_01] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_01;
    in_ZR = (uint)extraout_x8_01 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d1fe8();
    }
    else {
      func_0x0001078d1fe8();
    }
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x0001078d24c0();
  }
  apcStack_310[0] = "border-radius";
  uStack_454 = param_1;
  uStack_450 = param_2;
  uStack_44c = param_3;
  uStack_448 = param_4;
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_458 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cf5d4 + (ulong)(byte)(&UNK_10ded993c)[extraout_x8_02] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_02;
    in_ZR = (uint)extraout_x8_02 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    param_2 = 0;
    uStack_458 = 0;
    if (!(bool)in_ZR) {
      uStack_458 = param_1;
    }
  }
  apcStack_310[0] = "border-width";
  uVar11 = uStack_458;
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_45c = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cf674 + (ulong)(byte)(&UNK_10ded9944)[extraout_x8_03] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_03;
    in_ZR = (uint)extraout_x8_03 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    param_2 = 0;
    uStack_45c = 0;
    if (!(bool)in_ZR) {
      uStack_45c = uVar11;
    }
  }
  apcStack_310[0] = "border-color";
  uVar11 = uStack_45c;
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    param_4 = 0x3f800000;
    func_0x0001078d2810();
  }
  else {
    uVar6 = pmVar1[5].magic;
    in_CY = 6 < uVar6;
    in_ZR = uVar6 == 7;
    switch(uVar6) {
    case 0:
      func_0x0001078d1fe8();
      break;
    case 1:
      func_0x0001078d1fe8();
      break;
    case 2:
      func_0x0001078d1fe8();
      break;
    case 3:
      func_0x0001078d1fe8();
      break;
    case 4:
      func_0x0001078d2acc();
      goto code_r0x0001078cf78c;
    case 5:
      func_0x0001078d1fe8();
      break;
    case 6:
      func_0x0001078d1fe8();
      break;
    case 7:
      func_0x0001078d1fe8();
      break;
    default:
      in_CY = 7 < uVar6;
      in_ZR = uVar6 == 8;
      if ((bool)in_ZR) {
        func_0x0001078d1fe8();
      }
      else {
        func_0x0001078d1fe8();
      }
    }
    uVar11 = 0;
    uStack_368 = 0x3f80000000000000;
    uStack_370 = 0;
    func_0x0001078d24c0();
  }
code_r0x0001078cf78c:
  apcStack_310[0] = "opacity";
  uStack_46c = uVar11;
  uStack_468 = param_2;
  uStack_464 = param_3;
  uStack_460 = param_4;
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_470 = 0x3f800000;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cf7d0 + (ulong)(byte)(&UNK_10ded9954)[extraout_x8_04] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_04;
    in_ZR = (uint)extraout_x8_04 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    uStack_470 = 0x3f800000;
    if (!(bool)in_ZR) {
      uStack_470 = uVar11;
    }
  }
  apcStack_310[0] = "drop-shadow-offset";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_474 = 0x3f800000;
    uVar11 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cf870 + (ulong)(byte)(&UNK_10ded995c)[extraout_x8_05] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_05 == 8) {
      func_0x0001078d2278();
    }
    else {
      func_0x0001078d2278();
    }
    uVar11 = SUB84(in_x3,0);
    uStack_474 = (uint)((ulong)in_x3 >> 0x20);
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    if ((bool)in_ZR) {
      uStack_474 = 0x3f800000;
    }
    param_3 = 0;
    if ((bool)in_ZR) {
      uVar11 = 0;
    }
  }
  apcStack_310[0] = "drop-shadow-blur";
  uStack_478 = uVar11;
  uVar6 = uStack_474;
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uVar9 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cf92c + (ulong)(byte)(&UNK_10ded9964)[extraout_x8_06] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_06;
    in_ZR = (uint)extraout_x8_06 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    uVar11 = 0;
    uVar9 = 0;
    if (!(bool)in_ZR) {
      uVar9 = (ulong)uVar6;
    }
  }
  uVar5 = 0;
  uStack_47c = (undefined4)uVar9;
  apcStack_310[0] = "drop-shadow-color";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    func_0x0001078d2810();
    param_4 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cf9cc + (ulong)(byte)(&UNK_10ded996c)[extraout_x8_07] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_07;
    in_ZR = (uint)extraout_x8_07 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d1fe8();
    }
    else {
      func_0x0001078d1fe8();
    }
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x0001078d24c0();
  }
  uStack_48c = (undefined4)uVar9;
  apcStack_310[0] = "direction";
  uStack_488 = uVar11;
  uStack_484 = param_3;
  uStack_480 = param_4;
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_48d = 1;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cfa78 + (ulong)(byte)(&UNK_10ded9974)[extraout_x8_08] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_08 == 8) {
      func_0x0001078d2260();
    }
    else {
      func_0x0001078d2260();
    }
    uStack_48d = SUB81(in_x3,0);
    in_ZR = ((ulong)in_x3 & 0x100) == 0;
    in_CY = 0;
    if ((bool)in_ZR) {
      uStack_48d = 1;
    }
  }
  apcStack_310[0] = "flex-direction";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_48e = 2;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cfb14 + (ulong)(byte)(&UNK_10ded997c)[extraout_x8_09] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_09 == 8) {
      func_0x0001078d223c();
    }
    else {
      func_0x0001078d223c();
    }
    in_ZR = ((ulong)in_x3 & 0x100) == 0;
    in_CY = 0;
    uStack_48e = 2;
    if (!(bool)in_ZR) {
      uStack_48e = (char)in_x3;
    }
  }
  apcStack_310[0] = "justify-content";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_48f = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cfbb4 + (ulong)(byte)(&UNK_10ded9984)[extraout_x8_10] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_10;
    in_ZR = (uint)extraout_x8_10 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2254();
    }
    else {
      func_0x0001078d2254();
    }
    func_0x0001078d2710();
    uStack_48f = extraout_w8_00;
  }
  apcStack_310[0] = "align-items";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_490 = 4;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cfc4c + (ulong)(byte)(&UNK_10ded998c)[extraout_x8_11] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_11 == 8) {
      func_0x0001078d21bc();
    }
    else {
      func_0x0001078d21bc();
    }
    in_ZR = ((ulong)in_x3 & 0x100) == 0;
    in_CY = 0;
    uStack_490 = 4;
    if (!(bool)in_ZR) {
      uStack_490 = (char)in_x3;
    }
  }
  apcStack_310[0] = "align-content";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_491 = 1;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cfcec + (ulong)(byte)(&UNK_10ded9994)[extraout_x8_12] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_12 == 8) {
      func_0x0001078d21bc();
    }
    else {
      func_0x0001078d21bc();
    }
    uStack_491 = SUB81(in_x3,0);
    in_ZR = ((ulong)in_x3 & 0x100) == 0;
    in_CY = 0;
    if ((bool)in_ZR) {
      uStack_491 = 1;
    }
  }
  apcStack_310[0] = "align-self";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_492 = 4;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cfd88 + (ulong)(byte)(&UNK_10ded999c)[extraout_x8_13] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_13 == 8) {
      func_0x0001078d21bc();
    }
    else {
      func_0x0001078d21bc();
    }
    in_ZR = ((ulong)in_x3 & 0x100) == 0;
    in_CY = 0;
    uStack_492 = 4;
    if (!(bool)in_ZR) {
      uStack_492 = (char)in_x3;
    }
  }
  apcStack_310[0] = "padding";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_4b0 = (ulong)uStack_4b0._4_4_ << 0x20;
    uStack_4a0 = 0;
  }
  else {
    func_0x0001078d2858();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cfe28 + (ulong)(byte)(&UNK_10ded99a4)[extraout_x8_14] * 4))();
      return in_x3;
    }
    func_0x0001078d1f64();
    func_0x0001078d22b0();
    uStack_4a0 = *(undefined4 *)(extraout_x8_15 + 0x10);
    uStack_4b0 = uVar9;
    uStack_4a8 = uVar5;
  }
  apcStack_310[0] = "margin";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_4d0 = (ulong)uStack_4d0._4_4_ << 0x20;
    uStack_4c0 = 0;
  }
  else {
    func_0x0001078d2858();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cfec4 + (ulong)(byte)(&UNK_10ded99ad)[extraout_x8_16] * 4))();
      return in_x3;
    }
    func_0x0001078d1f64();
    func_0x0001078d22b0();
    uStack_4c0 = *(undefined4 *)(extraout_x8_17 + 0x10);
    uStack_4d0 = uVar9;
    uStack_4c8 = uVar5;
  }
  apcStack_310[0] = "border";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_4f0 = (ulong)uStack_4f0._4_4_ << 0x20;
    uStack_4e0 = 0;
  }
  else {
    func_0x0001078d2858();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cff5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cff60 + (ulong)(byte)(&UNK_10ded99b6)[extraout_x8_18] * 4))();
      return in_x3;
    }
    func_0x0001078d1f64();
    func_0x0001078d22b0();
    uStack_4e0 = *(undefined4 *)(extraout_x8_19 + 0x10);
    uStack_4f0 = uVar9;
    uStack_4e8 = uVar5;
  }
  apcStack_310[0] = "position";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_510 = (ulong)uStack_510._4_4_ << 0x20;
    uStack_500 = 0;
  }
  else {
    func_0x0001078d2858();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078cfffc + (ulong)(byte)(&UNK_10ded99bf)[extraout_x8_20] * 4))();
      return in_x3;
    }
    func_0x0001078d1f64();
    func_0x0001078d22b0();
    uStack_500 = *(undefined4 *)(extraout_x8_21 + 0x10);
    uStack_510 = uVar9;
    uStack_508 = uVar5;
  }
  dVar7 = (dword)uVar9;
  apcStack_310[0] = "position-type";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_511 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0098 + (ulong)(byte)(&UNK_10ded99c8)[extraout_x8_22] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_22;
    in_ZR = (uint)extraout_x8_22 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2224();
    }
    else {
      func_0x0001078d2224();
    }
    func_0x0001078d2710();
    uStack_511 = extraout_w8_01;
  }
  apcStack_310[0] = "flex-wrap";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_512 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d012c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0130 + (ulong)(byte)(&UNK_10ded99d0)[extraout_x8_23] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_23;
    in_ZR = (uint)extraout_x8_23 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2248();
    }
    else {
      func_0x0001078d2248();
    }
    func_0x0001078d2710();
    uStack_512 = extraout_w8_02;
  }
  apcStack_310[0] = "overflow";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_513 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d01c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d01c8 + (ulong)(byte)(&UNK_10ded99d8)[extraout_x8_24] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_24;
    in_ZR = (uint)extraout_x8_24 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d226c();
    }
    else {
      func_0x0001078d226c();
    }
    func_0x0001078d2710();
    uStack_513 = extraout_w8_03;
  }
  apcStack_310[0] = "display";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_514 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0260 + (ulong)(byte)(&UNK_10ded99e0)[extraout_x8_25] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_25;
    in_ZR = (uint)extraout_x8_25 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2290();
    }
    else {
      func_0x0001078d2290();
    }
    func_0x0001078d2710();
    uStack_514 = extraout_w8_04;
  }
  apcStack_310[0] = "flex";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d02f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d02f8 + (ulong)(byte)(&UNK_10ded99e8)[extraout_x8_26] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_26 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = in_x3;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_520 = SUB84(pmVar4,0);
  uStack_51c = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_310[0] = "flex-grow";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    pmVar4 = &MACH_HEADER;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d039c + (ulong)(byte)(&UNK_10ded99f0)[extraout_x8_27] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_27 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = in_x3;
    if ((bool)in_ZR) {
      pmVar4 = &MACH_HEADER;
    }
  }
  uStack_528 = SUB84(pmVar4,0);
  uStack_524 = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_310[0] = "flex-shrink";
  func_0x0001078d2128();
  pmVar4 = (mach_header *)0x13f800000;
  if (in_x3 != (mach_header *)0x0) {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d044c + (ulong)(byte)(&UNK_10ded99f8)[extraout_x8_28] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_28 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = in_x3;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x13f800000;
    }
  }
  uStack_530 = SUB84(pmVar4,0);
  uStack_52c = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_310[0] = "flex-basis";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d04e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d04e8 + (ulong)(byte)(&UNK_10ded9a00)[extraout_x8_29] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_29 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = in_x3;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_538 = SUB84(pmVar4,0);
  uStack_534 = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_310[0] = "width";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d058c + (ulong)(byte)(&UNK_10ded9a08)[extraout_x8_30] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_30 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = in_x3;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_540 = SUB84(pmVar4,0);
  uStack_53c = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_310[0] = "height";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d062c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0630 + (ulong)(byte)(&UNK_10ded9a10)[extraout_x8_31] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_31 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = in_x3;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_548 = SUB84(pmVar4,0);
  uStack_544 = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_310[0] = "min-width";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d06d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d06d4 + (ulong)(byte)(&UNK_10ded9a18)[extraout_x8_32] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_32 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = in_x3;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_550 = SUB84(pmVar4,0);
  uStack_54c = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_310[0] = "min-height";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0778 + (ulong)(byte)(&UNK_10ded9a20)[extraout_x8_33] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_33 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = in_x3;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_558 = SUB84(pmVar4,0);
  uStack_554 = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_310[0] = "max-width";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d081c + (ulong)(byte)(&UNK_10ded9a28)[extraout_x8_34] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_34 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = in_x3;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_560 = SUB84(pmVar4,0);
  uStack_55c = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_310[0] = "max-height";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d08bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d08c0 + (ulong)(byte)(&UNK_10ded9a30)[extraout_x8_35] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_35 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = in_x3;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_568 = SUB84(pmVar4,0);
  uStack_564 = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_310[0] = "aspect-ratio";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0964 + (ulong)(byte)(&UNK_10ded9a38)[extraout_x8_36] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_36 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = in_x3;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_570 = SUB84(pmVar4,0);
  uStack_56c = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_310[0] = "image";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    func_0x0001077e8c44(amStack_3d0);
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0a08 + (ulong)(byte)(&UNK_10ded9a40)[extraout_x8_37] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_37;
    in_ZR = (uint)extraout_x8_37 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20d0();
      FUN_107777548();
      func_0x0001078d2548();
      func_0x0001078d2144();
    }
    else {
      func_0x0001078d20d0();
      FUN_107777548();
      func_0x0001078d2548();
      func_0x0001078d2144();
    }
    func_0x00010726b164(&uStack_370);
    in_x3 = (mach_header *)apcStack_310;
    func_0x00010726b144();
  }
  apcStack_310[0] = "encryption-key";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    func_0x0001077e8d1c(auStack_408);
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0b20 + (ulong)(byte)(&UNK_10ded9a48)[extraout_x8_38] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_38;
    in_ZR = (uint)extraout_x8_38 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2060();
    }
    else {
      func_0x0001078d2060();
    }
    func_0x0001077e8d1c(&uStack_370);
    func_0x0001078d28ec(auStack_408);
    func_0x000104c2f714(&uStack_370);
    in_x3 = (mach_header *)apcStack_310;
    func_0x00010724b3d8();
  }
  apcStack_310[0] = "encryption-iv";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    func_0x0001077e8dc8(auStack_440);
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0bdc + (ulong)(byte)(&UNK_10ded9a50)[extraout_x8_39] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_39;
    in_ZR = (uint)extraout_x8_39 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2060();
    }
    else {
      func_0x0001078d2060();
    }
    func_0x0001077e8dc8(&uStack_370);
    func_0x0001078d28ec(auStack_440);
    func_0x000104c2f714(&uStack_370);
    in_x3 = (mach_header *)apcStack_310;
    func_0x00010724b3d8();
  }
  apcStack_310[0] = "mirror-x";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_571 = false;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0c98 + (ulong)(byte)(&UNK_10ded9a58)[extraout_x8_40] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_40 == 8) {
      func_0x0001078d21e4();
    }
    else {
      func_0x0001078d21e4();
    }
    in_ZR = (((uint)in_x3 ^ 0xffffffff) & 0x101) == 0;
    in_CY = 0;
    uStack_571 = in_ZR;
  }
  apcStack_310[0] = "mirror-y";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_572 = false;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0d3c + (ulong)(byte)(&UNK_10ded9a60)[extraout_x8_41] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_41 == 8) {
      func_0x0001078d21e4();
    }
    else {
      func_0x0001078d21e4();
    }
    in_ZR = (((uint)in_x3 ^ 0xffffffff) & 0x101) == 0;
    in_CY = 0;
    uStack_572 = in_ZR;
  }
  apcStack_310[0] = "tint-color";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    param_4 = 0;
    dVar7 = 0x3f800000;
    uVar11 = 0x3f800000;
    param_3 = 0x3f800000;
  }
  else {
    uVar6 = pmVar1[5].magic;
    in_CY = 6 < uVar6;
    in_ZR = uVar6 == 7;
    switch(uVar6) {
    case 0:
      func_0x0001078d1fe8();
      break;
    case 1:
      func_0x0001078d1fe8();
      break;
    case 2:
      func_0x0001078d1fe8();
      break;
    case 3:
      func_0x0001078d1fe8();
      break;
    case 4:
      func_0x0001078d2acc();
      goto code_r0x0001078d0e5c;
    case 5:
      func_0x0001078d1fe8();
      break;
    case 6:
      func_0x0001078d1fe8();
      break;
    case 7:
      func_0x0001078d1fe8();
      break;
    default:
      in_CY = 7 < uVar6;
      in_ZR = uVar6 == 8;
      if ((bool)in_ZR) {
        func_0x0001078d1fe8();
      }
      else {
        func_0x0001078d1fe8();
      }
    }
    dVar7 = 0x3f800000;
    uStack_368 = 0x3f800000;
    uStack_370 = 0x3f8000003f800000;
    func_0x0001078d24c0();
  }
code_r0x0001078d0e5c:
  apcStack_310[0] = "fitting-mode";
  dStack_584 = dVar7;
  uStack_580 = uVar11;
  uStack_57c = param_3;
  uStack_578 = param_4;
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    uStack_585 = 3;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0ea0 + (ulong)(byte)(&UNK_10ded9a70)[extraout_x8_42] * 4))();
      return in_x3;
    }
    if ((int)extraout_x8_42 == 8) {
      func_0x0001078d2284();
    }
    else {
      func_0x0001078d2284();
    }
    in_ZR = ((ulong)in_x3 & 0x100) == 0;
    in_CY = 0;
    uStack_585 = 3;
    if (!(bool)in_ZR) {
      uStack_585 = (char)in_x3;
    }
  }
  apcStack_310[0] = "text-field";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    func_0x0001077e8f74(&mStack_5b8.flags);
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d0f40 + (ulong)(byte)(&UNK_10ded9a78)[extraout_x8_43] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_43;
    in_ZR = (uint)extraout_x8_43 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20d0();
      func_0x0001074040e8();
      func_0x0001078d2540();
      func_0x0001078d2134();
    }
    else {
      func_0x0001078d20d0();
      func_0x0001074040e8();
      func_0x0001078d2540();
      func_0x0001078d2134();
    }
    func_0x00010726afc0(&uStack_370);
    in_x3 = (mach_header *)apcStack_310;
    func_0x0001074030e4();
  }
  apcStack_310[0] = "max-num-lines";
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    mStack_5b8.sizeofcmds = 0x3f800000;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d1054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d1058 + (ulong)(byte)(&UNK_10ded9a80)[extraout_x8_44] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_44;
    in_ZR = (uint)extraout_x8_44 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    mStack_5b8.sizeofcmds = 0x3f800000;
    if (!(bool)in_ZR) {
      mStack_5b8.sizeofcmds = dVar7;
    }
  }
  apcStack_310[0] = "line-height-multiplier";
  dVar7 = mStack_5b8.sizeofcmds;
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    mStack_5b8.ncmds = 0x3f800000;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d10f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d10f8 + (ulong)(byte)(&UNK_10ded9a88)[extraout_x8_45] * 4))();
      return in_x3;
    }
    in_CY = 7 < (uint)extraout_x8_45;
    in_ZR = (uint)extraout_x8_45 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    mStack_5b8.ncmds = 0x3f800000;
    if (!(bool)in_ZR) {
      mStack_5b8.ncmds = dVar7;
    }
  }
  apcStack_310[0] = "points";
  dVar7 = mStack_5b8.ncmds;
  func_0x0001078d2128();
  if (in_x3 == (mach_header *)0x0) {
    pmVar1 = &mStack_5b8;
    func_0x0001072f6da0();
  }
  else {
    func_0x0001078d2858();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d1194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d1198 + (ulong)(byte)(&UNK_10ded9a90)[extraout_x8_46] * 4))();
      return in_x3;
    }
    func_0x0001078d20d0();
    func_0x0001077754c8();
    func_0x0001078d2510();
    func_0x0001078d20ec();
    func_0x0001072dbd40(&uStack_370);
    pmVar1 = (mach_header *)apcStack_310;
    func_0x0001072dbe34();
  }
  apcStack_310[0] = "shape-blur";
  func_0x0001078d2128();
  if (pmVar1 == (mach_header *)0x0) {
    dVar8 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d12a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078d12ac + (ulong)(byte)(&UNK_10ded9a99)[extraout_x8_47] * 4))();
      return pmVar1;
    }
    in_ZR = (int)extraout_x8_47 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    dVar8 = 0;
    if (!(bool)in_ZR) {
      dVar8 = dVar7;
    }
  }
  uStack_370 = CONCAT44(uStack_370._4_4_,dVar8);
  puVar2 = &uStack_441;
  puVar3 = (undefined8 *)&uStack_454;
  func_0x0001077e770c(auStack_258,puVar2,puVar3,&uStack_458,&uStack_45c,&uStack_46c,&uStack_470,
                      &uStack_478,&uStack_47c,&uStack_48c,&uStack_48d,&uStack_48e,&uStack_48f,
                      &uStack_490,&uStack_491,&uStack_492,&uStack_4b0,&uStack_4d0,&uStack_4f0,
                      &uStack_510,&uStack_511,&uStack_512,&uStack_513,&uStack_514,&uStack_520,
                      &uStack_528,&uStack_530,&uStack_538,&uStack_540,&uStack_548,&uStack_550,
                      &uStack_558,&uStack_560,&uStack_568,&uStack_570,amStack_3d0,auStack_408,
                      auStack_440,&uStack_571,&uStack_572,&dStack_584,&uStack_585,&mStack_5b8.flags,
                      &mStack_5b8.sizeofcmds,&mStack_5b8.ncmds,&mStack_5b8,&uStack_370);
  func_0x0001072dbd40(&mStack_5b8);
  func_0x00010726afc0(&mStack_5b8.flags);
  func_0x000104c2f714(auStack_440);
  func_0x000104c2f714(auStack_408);
  pmVar1 = amStack_3d0;
  func_0x00010726b164();
  func_0x0001078d208c(uStack_2a8);
  if ((bool)in_ZR) {
    return pmVar1;
  }
  ___stack_chk_fail();
  func_0x00010726afc0(&uStack_370);
  func_0x0001074030e4((mach_header *)apcStack_310);
  func_0x000104c2f714(auStack_440);
  func_0x000104c2f714(auStack_408);
  pmVar1 = amStack_3d0;
  func_0x00010726b164();
  func_0x0001078d2494();
  if (puVar2[0x18] == '\x01') {
    pmVar1->magic = 0;
    pmVar1->cputype = 0;
    pmVar1->cpusubtype = 0;
    pmVar1->filetype = 0;
    pmVar1->ncmds = 0;
    pmVar1->sizeofcmds = 0;
    func_0x000107278820();
    return pmVar1;
  }
  uVar10 = puVar3[1];
  uVar5 = *puVar3;
  pmVar1->cpusubtype = (int)uVar10;
  pmVar1->filetype = (int)((ulong)uVar10 >> 0x20);
  pmVar1->magic = (int)uVar5;
  pmVar1->cputype = (int)((ulong)uVar5 >> 0x20);
  uVar5 = puVar3[2];
  pmVar1->ncmds = (int)uVar5;
  pmVar1->sizeofcmds = (int)((ulong)uVar5 >> 0x20);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  return pmVar1;
}



/* Entry: 1078d19b8; end: 1078d19d3;  */

void FUN_1078d19b8(void)

{
  func_0x0001078d2ad8();
  func_0x00010755bdf4();
  return;
}



/* Entry: 1078d1bac; end: 1078d1bc7;  */

void FUN_1078d1bac(long param_1)

{
  func_0x000104c2f64c();
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1078d1e8c; end: 1078d1eaf;  */

void FUN_1078d1e8c(long param_1)

{
  func_0x0001078d28a0();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078d2d24; end: 1078d30eb;  */

/* WARNING: Possible PIC construction at 0x0001078d2d94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d2d98) */
/* WARNING: Removing unreachable block (ram,0x0001078d2dc4) */
/* WARNING: Removing unreachable block (ram,0x0001078d3018) */
/* WARNING: Removing unreachable block (ram,0x0001078d3064) */
/* WARNING: Removing unreachable block (ram,0x0001078d30dc) */
/* WARNING: Removing unreachable block (ram,0x0001078d3038) */
/* WARNING: Removing unreachable block (ram,0x0001078d2dcc) */
/* WARNING: Removing unreachable block (ram,0x0001078d2e24) */
/* WARNING: Removing unreachable block (ram,0x0001078d2e2c) */
/* WARNING: Removing unreachable block (ram,0x0001078d2e30) */
/* WARNING: Removing unreachable block (ram,0x0001078d2e38) */
/* WARNING: Removing unreachable block (ram,0x0001078d2e48) */
/* WARNING: Removing unreachable block (ram,0x0001078d2e4c) */
/* WARNING: Removing unreachable block (ram,0x0001078d2e58) */
/* WARNING: Removing unreachable block (ram,0x0001078d2e5c) */
/* WARNING: Removing unreachable block (ram,0x0001078d2e84) */
/* WARNING: Removing unreachable block (ram,0x0001078d2e70) */
/* WARNING: Removing unreachable block (ram,0x0001078d2e94) */
/* WARNING: Removing unreachable block (ram,0x0001078d2eac) */
/* WARNING: Removing unreachable block (ram,0x0001078d2ea0) */
/* WARNING: Removing unreachable block (ram,0x0001078d2eb8) */
/* WARNING: Removing unreachable block (ram,0x0001078d2edc) */
/* WARNING: Removing unreachable block (ram,0x0001078d2f40) */
/* WARNING: Removing unreachable block (ram,0x0001078d2ee8) */
/* WARNING: Removing unreachable block (ram,0x0001078d2f48) */
/* WARNING: Removing unreachable block (ram,0x0001078d2f30) */
/* WARNING: Removing unreachable block (ram,0x0001078d2f4c) */
/* WARNING: Removing unreachable block (ram,0x0001078d2f5c) */
/* WARNING: Removing unreachable block (ram,0x0001078d2f78) */
/* WARNING: Removing unreachable block (ram,0x0001078d2f9c) */
/* WARNING: Removing unreachable block (ram,0x0001078d2fb0) */
/* WARNING: Removing unreachable block (ram,0x0001078d2fbc) */
/* WARNING: Removing unreachable block (ram,0x0001078d2fd0) */
/* WARNING: Removing unreachable block (ram,0x0001078d2fd4) */
/* WARNING: Removing unreachable block (ram,0x0001078d2fd8) */
/* WARNING: Removing unreachable block (ram,0x0001078d2fe4) */
/* WARNING: Removing unreachable block (ram,0x0001078d2ffc) */
/* WARNING: Removing unreachable block (ram,0x0001078d3008) */

void FUN_1078d2d24(undefined8 param_1,long *param_2,long *param_3)

{
  undefined1 **ppuVar1;
  long unaff_x23;
  undefined1 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [784];
  
  func_0x0001078d4a0c();
  puStack_3b8 = auStack_3a0;
  uStack_3a8 = 4;
  uStack_3b0 = 0;
  ppuVar1 = &puStack_3b8;
  if ((ulong)((param_3[1] - *param_3) / 0x120) < 5) {
    return;
  }
  func_0x0001078d4afc();
  func_0x0001078d3ac4();
  func_0x0001078d4a24(param_2,ppuVar1,param_1,*param_2 + param_2[1] * 0xb0,0,0,0);
  func_0x0001078d4b6c();
  func_0x0001078d3fc8();
  if (unaff_x23 != 0) {
    func_0x0001078d4b20();
    func_0x0001078d4b14();
  }
  func_0x0001078d4a6c();
  return;
}



/* Entry: 1078d38c4; end: 1078d394f;  */

void FUN_1078d38c4(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined1 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_2;
  plVar1 = param_2;
  func_0x0001078d3a54(param_2,param_4);
  plVar2 = param_2;
  func_0x0001078d3ac4(param_2,plVar1);
  FUN_1078d3aec(param_2,plVar2,plVar1,param_3,param_4,param_5);
  *param_1 = *param_2 + (param_3 - lVar3);
  return;
}



/* Entry: 1078d3aec; end: 1078d3b3f;  */

void FUN_1078d3aec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x23;
  
  func_0x0001078d4a24();
  func_0x0001078d4b6c();
  func_0x0001078d3b70();
  if (unaff_x23 != 0) {
    func_0x0001078d4b20(param_1,param_2,*(undefined8 *)(unaff_x20 + 8));
    func_0x0001078d4b14(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  }
  func_0x0001078d4a6c();
  return;
}



/* Entry: 1078d3d08; end: 1078d3d23;  */

void FUN_1078d3d08(long param_1)

{
  func_0x0001078d3d24();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1078d3edc; end: 1078d3f17;  */

void FUN_1078d3edc(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010724cbe8();
  lVar1 = *(long *)(param_2 + 0x20);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001078d4a5c();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(long *)(param_1 + 0x20) = lVar1;
  return;
}



/* Entry: 1078d4120; end: 1078d41df;  */

void FUN_1078d4120(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = (param_3 - param_2) / 0xb0;
  if (uVar1 <= (ulong)param_1[2]) {
    func_0x0001078d424c(param_1,param_2,uVar1,*param_1,param_1[1]);
    param_1[1] = uVar1;
    return;
  }
  plVar2 = param_1;
  func_0x0001078d3ac4(param_1,uVar1);
  plVar4 = (long *)*param_1;
  if ((plVar4 != (long *)0x0) && (func_0x0001078d41e0(param_1), param_1 + 3 != plVar4)) {
    __ZdlPv(plVar4);
  }
  param_1[1] = 0;
  param_1[2] = uVar1;
  *param_1 = (long)plVar2;
  lVar3 = *param_1 + param_1[1] * 0xb0;
  plVar2 = param_1;
  func_0x0001078d42e0(param_1,param_2,param_3,lVar3);
  param_1[1] = ((long)plVar2 - lVar3) / 0xb0 + param_1[1];
  return;
}



/* Entry: 1078d4460; end: 1078d448b;  */

void FUN_1078d4460(void)

{
  undefined1 in_ZR;
  
  func_0x0001078d4af0();
  if (!(bool)in_ZR) {
    func_0x0001078d49f8();
    FUN_107807aac();
  }
  return;
}



/* Entry: 1078d45b4; end: 1078d45e3;  */

long FUN_1078d45b4(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == *(char *)(param_2 + 8)) {
    if (cVar1 != '\0') {
      if (param_1 != param_2) {
        func_0x00010090c190(param_1);
      }
      return param_1;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 8) == '\x01') {
        func_0x0001003a8c94();
        *(undefined1 *)(param_1 + 8) = 0;
      }
      return param_1;
    }
    func_0x0001078d4b54();
  }
  return param_1;
}



/* Entry: 1078d4894; end: 1078d489f;  */

undefined ** FUN_1078d4894(void)

{
  return &PTR_DAT_1109e8bf8;
}



/* Entry: 1078d4c80; end: 1078d4d0f;  */

void FUN_1078d4c80(undefined8 param_1,long *param_2)

{
  long lVar1;
  int extraout_w10;
  long lStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *param_2;
  lStack_38 = param_2[1];
  lStack_40 = lVar1;
  if (lStack_38 != 0) {
    do {
      func_0x0001078d5428();
    } while (extraout_w10 != 0);
  }
  lStack_50 = lVar1 + 0x208;
  uStack_48 = 1;
  func_0x00010724e404();
  func_0x00010724e49c(&lStack_50);
  func_0x0001078d4c58(&lStack_40);
  return;
}



/* Entry: 1078d50e8; end: 1078d50ef;  */

void FUN_1078d50e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d5458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078d530c; end: 1078d534f;  */

undefined8 * FUN_1078d530c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8d58;
  func_0x000104c33970(param_1 + 0x3f);
  func_0x0001078d53d0(param_1 + 0x36);
  func_0x0001078bee2c(param_1 + 0x35);
  *param_1 = &PTR_DAT_110a255a0;
  func_0x0001078d4914(param_1 + 0x34);
  func_0x000108123684(param_1 + 0x33);
  func_0x00010810071c(param_1 + 0x1d);
  func_0x0001078bee2c(param_1 + 0x1c);
  func_0x000108123524(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1078d563c; end: 1078d571b;  */

void FUN_1078d563c(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x0001078d6b20();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x0001003ae9f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x0001078d6b20();
        } while (extraout_w10 != 0);
      }
    }
    func_0x0001003a90c4(&lStack_30);
  }
  return;
}


