/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078b0a00; end: 1078b0a9b;  */

void FUN_1078b0a00(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  
  func_0x0001078b0ca8();
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar4;
    if (uVar4 < uVar3) {
      func_0x0001078b0c58();
      if (!bVar2) {
        func_0x0001078b0c70();
      }
      func_0x0001078b0cd4();
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10) - uVar4;
      uVar4 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar4 = 0;
      }
      uStack_50 = unaff_x19[4];
      func_0x0001078b0ce4();
      lStack_68 = param_1 + (uVar4 >> 2) * 8;
      lStack_58 = param_1 + uVar3 * 8;
      lStack_70 = param_1;
      lStack_60 = lStack_68;
      func_0x0001078b0b54(&lStack_70,unaff_x19[1],unaff_x19[2]);
      func_0x0001078b0c1c();
    }
  }
  func_0x0001078b0cb4();
  return;
}



/* Entry: 1078b0e5c; end: 1078b0eab;  */

void FUN_1078b0e5c(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x0001078b1394();
    if (uStack_30 != 0) {
      (**(code **)(uStack_30 + 0x28))(*(undefined4 *)(lVar1 + 0x10),0x8e28);
    }
    func_0x0001078b13a0();
    *(undefined1 *)(lVar1 + 0x29) = 1;
  }
  return;
}



/* Entry: 1078b10d4; end: 1078b10ef;  */

void FUN_1078b10d4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078b10f0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b1228; end: 1078b124f;  */

void FUN_1078b1228(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001078b13ec();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109e7890;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1078b14c0; end: 1078b151b;  */

undefined8 * FUN_1078b14c0(undefined8 *param_1)

{
  long lVar1;
  
  if ((*(byte *)((long)param_1 + 0x5a) & 1) == 0) {
    if (*(char *)((long)param_1 + 0x59) != '\x01') goto LAB_1078b1500;
    lVar1 = 0x28;
  }
  else {
    lVar1 = 0x20;
  }
  (**(code **)(*(long *)param_1[0xc] + lVar1))();
LAB_1078b1500:
  func_0x0001073ad824(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  func_0x0001073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  func_0x0001073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1078b1940; end: 1078b1af3;  */

undefined8 * FUN_1078b1940(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_DAT_1109e7a48;
  param_1[1] = param_2;
  uVar1 = param_3;
  _strlen(param_3);
  param_1[2] = param_2;
  (**(code **)*param_2)(param_2,param_3,uVar1);
  param_1[3] = *(undefined8 *)*param_4;
  func_0x00010785f1f4();
  lStack_60._0_1_ = 1;
  param_2 = param_2 + 0xe2;
  func_0x00010724e2c8(param_2,&lStack_60);
  *(char *)(param_1 + 4) = (char)param_2;
  func_0x00010785f1f4();
  lStack_60 = (ulong)lStack_60._1_7_ << 8;
  param_2 = param_2 + 0x150;
  func_0x00010724e2c8(param_2,&lStack_60);
  *(char *)((long)param_1 + 0x21) = (char)param_2;
  puVar2 = (undefined4 *)0x90;
  __Znwm();
  _bzero();
  *puVar2 = 0x38;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined1 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x14) = 0;
  *(undefined8 *)(puVar2 + 0x12) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x16) = 0;
  *(undefined8 *)(puVar2 + 0x1c) = 0;
  *(undefined8 *)(puVar2 + 0x1a) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x1e) = 0;
  puVar2[0x22] = 0;
  param_1[5] = puVar2;
  (**(code **)(**(long **)(*param_4 + 8) + 0x18))();
  puStack_48 = (undefined8 *)param_1[1];
  (**(code **)*puStack_48)(puStack_48,"clear",5);
  lStack_58 = param_4[2];
  lStack_60 = param_4[1];
  uStack_50 = (undefined4)param_4[3];
  func_0x0001078ac83c(*(undefined8 *)(param_1[1] + 8),&lStack_60,
                      *(undefined8 *)((long)param_4 + 0x1c),*(undefined8 *)((long)param_4 + 0x24));
  func_0x0001078ae17c(*(undefined8 *)(param_1[1] + 8));
  func_0x0001074996e0(&puStack_48);
  return param_1;
}



/* Entry: 1078b1fa4; end: 1078b1fdb;  */

void FUN_1078b1fa4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_1078acaf0(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 8);
  if (*(int *)(param_3 + 4) == 7 && *(int *)(param_3 + 0xc) == 0) {
    lStack_48 = (ulong)lStack_48._1_7_ << 8;
    func_0x0001078af4d0();
  }
  else {
    lStack_48._0_1_ = 1;
    func_0x0001078af4d0();
    func_0x0001078ac9f4(lVar1 + 0x1f8,(int *)(param_3 + 0xc));
    lStack_48 = CONCAT53(lStack_48._3_5_,*(undefined3 *)(param_3 + 0x10));
    func_0x0001078accec(lVar1 + 0x203,&lStack_48);
    lStack_48 = lVar1;
    lStack_40 = param_3;
    func_0x00010788f324(param_3);
    uVar2 = (ulong)*(uint *)(param_3 + 4);
    if (*(uint *)(param_3 + 4) == 0xffffffff) {
      uVar2 = 0xffffffffffffffff;
    }
    plStack_38 = &lStack_48;
    (*(code *)(&PTR_DAT_1109e73f8)[uVar2])(&plStack_38,param_3);
  }
  return;
}



/* Entry: 1078b26f0; end: 1078b27db;  */

void FUN_1078b26f0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *puVar7;
  
  lVar6 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar6 + 8) == 0) {
    return;
  }
  uVar3 = *(char *)(lVar6 + 0x30) != '\0';
  uVar4 = *(char *)(lVar6 + 0x30) == '\x01';
  if ((bool)uVar4) {
    func_0x0001078ace74(*(undefined8 *)(*(long *)(param_1 + 8) + 8),*(undefined8 *)(lVar6 + 0x38),
                        lVar6 + 0x48,*(undefined4 *)(lVar6 + 0x88),*(long *)(lVar6 + 8),lVar6 + 0x10
                        ,*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                        *(undefined1 *)(param_1 + 0x20));
    lVar6 = *(long *)(param_1 + 0x28);
    *(undefined1 *)(lVar6 + 0x30) = 0;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  if (*(long *)(lVar6 + 0x38) == 0) {
    func_0x0001078af3e0(uVar5,param_2);
    if (!(bool)uVar3 || (bool)uVar4) {
      func_0x0001078af4c4();
    }
    puVar2 = PTR__glDrawArraysInstanced_113230880;
    uVar4 = param_4 == 1;
    if ((bool)uVar4) {
      func_0x0001078af294();
      _glDrawArrays();
    }
    else if ((*(byte *)(unaff_x19 + 0x3e9) & 1) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0xd8);
      if ((lVar6 == 0) || (uVar4 = *(char *)(lVar6 + 0x30) == '\x02', (bool)uVar4))
      goto code_r0x0001078adb58;
      puVar7 = *(undefined8 **)(lVar6 + 0x38);
      func_0x0001078af294();
      (*(code *)*puVar7)();
    }
    else {
      func_0x0001078af294();
      (*(code *)puVar2)();
    }
    *(int *)(unaff_x19 + 0xa8) = *(int *)(unaff_x19 + 0xa8) + param_4;
code_r0x0001078adb58:
    func_0x0001078af3f8();
    if ((bool)uVar4) {
      func_0x0001078af410();
    }
    return;
  }
  cVar1 = *(char *)(lVar6 + 0x40);
  func_0x0001078af3e0(uVar5,param_2);
  if (!(bool)uVar3 || (bool)uVar4) {
    func_0x0001078af4c4();
  }
  puVar2 = PTR__glDrawElementsInstanced_113230888;
  uVar4 = param_4 == 1;
  if ((bool)uVar4) {
    func_0x0001078af294();
    uVar4 = cVar1 == '\0';
    _glDrawElements();
  }
  else if ((*(byte *)(unaff_x19 + 0x3e9) & 1) == 0) {
    lVar6 = *(long *)(unaff_x19 + 0xd8);
    if ((lVar6 == 0) || (uVar4 = 1, *(char *)(lVar6 + 0x30) == '\x02')) goto code_r0x0001078ada40;
    puVar7 = *(undefined8 **)(lVar6 + 0x40);
    func_0x0001078af294();
    uVar4 = cVar1 == '\0';
    (*(code *)*puVar7)();
  }
  else {
    func_0x0001078af294();
    uVar4 = cVar1 == '\0';
    (*(code *)puVar2)();
  }
  *(int *)(unaff_x19 + 0xa8) = *(int *)(unaff_x19 + 0xa8) + param_4;
code_r0x0001078ada40:
  func_0x0001078af3f8();
  if ((bool)uVar4) {
    func_0x0001078af410();
  }
  return;
}



/* Entry: 1078b3e00; end: 1078b3e13;  */

void FUN_1078b3e00(void)

{
  func_0x0001078b3d90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b411c; end: 1078b415b;  */

long * FUN_1078b411c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -5;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078b42cc; end: 1078b42d7;  */

undefined1  [16] FUN_1078b42cc(ulong *param_1,ulong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined1 auVar18 [16];
  
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (undefined4)param_3;
  func_0x0001078b45e8();
  lVar4 = 0;
  uVar5 = *param_1;
  uVar6 = uVar5 >> 0xc ^ CONCAT44(uVar3,uVar2) >> 7;
  bVar7 = (byte)uVar2 & 0x7f;
  while( true ) {
    uVar6 = uVar6 & param_1[2];
    uVar11 = *(undefined8 *)(uVar5 + uVar6);
    bVar10 = (byte)((ulong)uVar11 >> 8);
    bVar12 = (byte)((ulong)uVar11 >> 0x10);
    bVar13 = (byte)((ulong)uVar11 >> 0x18);
    bVar14 = (byte)((ulong)uVar11 >> 0x20);
    bVar15 = (byte)((ulong)uVar11 >> 0x28);
    bVar16 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == bVar7),
                          CONCAT16(-(bVar16 == bVar7),
                                   CONCAT15(-(bVar15 == bVar7),
                                            CONCAT14(-(bVar14 == bVar7),
                                                     CONCAT13(-(bVar13 == bVar7),
                                                              CONCAT12(-(bVar12 == bVar7),
                                                                       CONCAT11(-(bVar10 == bVar7),
                                                                                -((byte)uVar11 ==
                                                                                 bVar7)))))))) &
                 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar6 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & param_1[2];
      if (*(ulong *)(param_1[1] + uVar9 * 0x10) == param_2) {
        auVar18._8_8_ = param_1[1] + uVar9 * 0x10;
        auVar18._0_8_ = uVar5 + uVar9;
        return auVar18;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                 CONCAT16(-(bVar16 == 0x80),
                                          CONCAT15(-(bVar15 == 0x80),
                                                   CONCAT14(-(bVar14 == 0x80),
                                                            CONCAT13(-(bVar13 == 0x80),
                                                                     CONCAT12(-(bVar12 == 0x80),
                                                                              CONCAT11(-(bVar10 ==
                                                                                        0x80),-((
                                                  byte)uVar11 == 0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar6 = lVar4 + uVar6;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}



/* Entry: 1078b49a0; end: 1078b49f3;  */

bool FUN_1078b49a0(long param_1)

{
  func_0x0001073caeb8();
  return *(int *)(param_1 + 0xf4) == -1;
}



/* Entry: 1078b4e68; end: 1078b4ebf;  */

void FUN_1078b4e68(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109e7cb8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1078b50c8; end: 1078b50e7;  */

void FUN_1078b50c8(void)

{
  func_0x0001078b525c();
  return;
}



/* Entry: 1078b5318; end: 1078b531b;  */

undefined8 * FUN_1078b5318(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1109e7e38;
  lVar4 = param_1[7];
  plVar1 = (long *)(param_1[3] + 0x80);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 - lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x0001078ae5e4(param_1 + 2);
  *param_1 = &PTR_DAT_1109e4228;
  func_0x00010724e5b8(param_1 + 1);
  return param_1;
}



/* Entry: 1078b53c4; end: 1078b53e3;  */

bool FUN_1078b53c4(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  _glIsBuffer(iVar1);
  return iVar1 != 0;
}



/* Entry: 1078b5744; end: 1078b57b3;  */

void FUN_1078b5744(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001078b636c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  func_0x0001078b5704(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x1b8,*(undefined4 *)(param_2 + 8))
  ;
  _glBufferSubData(0x8893,0,param_4,param_3);
  return;
}



/* Entry: 1078b6234; end: 1078b623b;  */

void FUN_1078b6234(void)

{
  return;
}



/* Entry: 1078b64e4; end: 1078b651b;  */

void FUN_1078b64e4(byte *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1;
  func_0x0001078af81c(uVar1);
  uVar2 = (ulong)param_1[1];
  func_0x0001078af81c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBlendFunc_11034b3b8)(uVar1,uVar2);
  return;
}



/* Entry: 1078b6794; end: 1078b67e3;  */

undefined8 FUN_1078b6794(int *param_1)

{
  if (*param_1 - 1U < 0x38) {
    return *(undefined8 *)(&UNK_10ded8e00 + (ulong)(*param_1 - 1U) * 8);
  }
  return 0x101e;
}



/* Entry: 1078b69a4; end: 1078b6a3b;  */

void FUN_1078b69a4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c09e220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x00010002b838(param_1,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1078b6c40; end: 1078b6c57;  */

void FUN_1078b6c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1078b7044; end: 1078b7077;  */

void FUN_1078b7044(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  __Znwm();
  func_0x0001078b93bc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1078b8da0; end: 1078b8dc7;  */

long FUN_1078b8da0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 0x18) = lVar1;
  return param_1;
}



/* Entry: 1078b90a8; end: 1078b9327;  */

void FUN_1078b90a8(undefined8 param_1,undefined8 ***param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auStack_f0 [24];
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  ulong *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puStack_d8 = (ulong *)0x0;
  puStack_d0 = (ulong *)0x0;
  puStack_c8 = (ulong *)0x0;
  pppuVar7 = param_2;
  __ZNSt3__15mutex4lockEv(param_4 + 8);
  lVar1 = *(long *)(param_4 + 0x50);
  for (lVar9 = *(long *)(param_4 + 0x48); lVar9 != lVar1; lVar9 = lVar9 + 0x20) {
    lVar4 = lVar9;
    pppuVar7 = param_2;
    func_0x0001000e107c();
    puVar2 = puStack_d0;
    if ((int)lVar4 != 0) {
      if (puStack_d0 < puStack_c8) {
        func_0x0001078b9eb0();
        puStack_d0 = puVar2 + 4;
      }
      else {
        ppuVar5 = &puStack_d8;
        func_0x0001078b8ef4(ppuVar5,((long)puStack_d0 - (long)puStack_d8 >> 5) + 1);
        func_0x0001078b8f34(&puStack_c0,ppuVar5,(long)puStack_d0 - (long)puStack_d8 >> 5,&puStack_c8
                           );
        puVar3 = puStack_b0;
        func_0x0001078b9eb0();
        puStack_b0 = (undefined *)((long)puVar3 + 0x20);
        pppuVar7 = (undefined8 ***)&puStack_c0;
        func_0x0001078b8f90(&puStack_d8);
        puVar2 = puStack_d0;
        func_0x0001078b904c(&puStack_c0);
        puStack_d0 = puVar2;
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(param_4 + 8);
  puVar2 = puStack_d0;
  puStack_78 = (ulong *)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  for (ppuVar8 = (undefined8 **)puStack_d8; ppuVar8 != (undefined8 **)puVar2; ppuVar8 = ppuVar8 + 4)
  {
    lVar9 = *(long *)*param_3;
    puVar10 = ppuVar8[3];
    ppuVar6 = ppuVar8;
    func_0x0001005d466c();
    puStack_b0 = (undefined *)((lVar9 - (long)puVar10) / 1000000);
    uStack_a8 = 0;
    puStack_c0 = (ulong *)ppuVar6;
    ppuStack_b8 = (ulong **)pppuVar7;
    func_0x0001003a91d4(&UNK_10f433a4e);
    func_0x0001003a9204(&ppuStack_90);
    pppuVar7 = &ppuStack_90;
    func_0x0001000fecf4(&puStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_90);
  }
  puStack_c0 = puStack_78;
  ppuStack_b8 = (ulong **)uStack_70;
  puStack_b0 = &DAT_10f68f19e;
  uStack_a8 = 2;
  ppuStack_90 = &puStack_c0;
  puStack_88 = &UNK_1072ac1a8;
  func_0x0001003a91d4(&DAT_10f2fb62f);
  func_0x0001003a9204(auStack_f0);
  func_0x0001000e30f4(&puStack_78);
  func_0x000105988308(&puStack_c0,param_5,auStack_f0);
  func_0x0001003a91d4(&UNK_10f433a3e);
  func_0x0001003a9204(param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  func_0x0001078b9328(&puStack_d8);
  return;
}



/* Entry: 1078b9a9c; end: 1078b9aaf;  */

void FUN_1078b9a9c(void)

{
  func_0x0001078b9c70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b9c2c; end: 1078b9c63;  */

long FUN_1078b9c2c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e81b0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078ba1c8; end: 1078ba1eb;  */

void FUN_1078ba1c8(void)

{
  func_0x0001078ba988();
  _CGContextRelease();
  return;
}



/* Entry: 1078baa3c; end: 1078baa6f;  */

undefined8 * FUN_1078baa3c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_1109e81d0;
  func_0x0001078baa70(param_1 + 1,param_2);
  return param_1;
}



/* Entry: 1078baf3c; end: 1078baf5f;  */

void FUN_1078baf3c(void)

{
  func_0x0001078bb6d8();
  _CGColorSpaceRelease();
  return;
}



/* Entry: 1078bb540; end: 1078bb563;  */

void FUN_1078bb540(void)

{
  func_0x0001078bb6d8();
  _CFRelease();
  return;
}



/* Entry: 1078bb8d8; end: 1078bb93f; -[MGLNativeNetworkManager startDownloadEvent:type:] */

void FUN_1078bb8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24ea40();
  func_0x0001078bba5c();
  func_0x0001078bba64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1078bba88; end: 1078bbb07;  */

void FUN_1078bba88(undefined8 param_1)

{
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (appuStack_38,&UNK_10f433c10,param_1);
  if (-1 < cStack_21) {
    appuStack_38[0] = appuStack_38;
  }
  _pthread_setname_np(appuStack_38[0]);
  (*(code *)PTR___tlv_bootstrap_11340dc48)();
  func_0x0001078bbb08();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_38);
  return;
}



/* Entry: 1078bbeac; end: 1078bbf23;  */

void FUN_1078bbeac(undefined8 param_1)

{
  func_0x0001078bbf24();
  func_0x0001078bbf60();
  func_0x0001078bbf78();
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bf260e0();
  func_0x0001078bbf38();
  func_0x0001078bbf48();
  func_0x0001078bbf58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1078bc070; end: 1078bc077;  */

void FUN_1078bc070(undefined8 *param_1)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x0001078bd6f8(*param_1);
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



/* Entry: 1078bc1ac; end: 1078bc1b3;  */

void FUN_1078bc1ac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_28 = param_3;
  __ZNSt3__15mutex4lockEv();
  func_0x0001078bc68c(lVar1 + 0x88,param_2,&uStack_28);
  func_0x0001078bd6e0();
  __ZNSt3__15mutex6unlockEv(lVar1);
  return;
}



/* Entry: 1078bc35c; end: 1078bc503;  */

void FUN_1078bc35c(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long *plVar4;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  undefined **ppuStack_260;
  undefined1 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [504];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_258 = auStack_240;
  ppuStack_260 = &PTR_DAT_11099bc38;
  uStack_248 = 500;
  uStack_250 = 0;
  func_0x0001078bd774(param_2[4]);
  while (unaff_x22 = (long *)*unaff_x22, unaff_x22 != (long *)0x0) {
    param_3 = (long)(unaff_x22 + 2);
    func_0x00010563bf9c(&lStack_2b0,param_3,unaff_x22 + 5);
    func_0x0001078bd7ac();
    func_0x0001078bd6b8();
    func_0x0001072b9f3c();
  }
  func_0x0001078bd774(param_2[6]);
  plVar4 = (long *)0x0;
  while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
    lVar1 = (long)(plVar4 + 2);
    func_0x0001005d466c();
    lStack_2a0 = plVar4[5];
    uStack_298 = 0;
    lStack_2b0 = lVar1;
    lStack_2a8 = param_3;
    func_0x0001078bd7ac();
    func_0x0001078bd6b8();
    func_0x0001072b9f3c();
  }
  func_0x0001078bd774(param_2[8]);
  plVar4 = (long *)0x0;
  while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
    lVar1 = (long)(plVar4 + 2);
    func_0x0001005d466c();
    lStack_2a0 = plVar4[5];
    uStack_298 = 0;
    lStack_2b0 = lVar1;
    lStack_2a8 = param_3;
    func_0x0001078bd7ac();
    func_0x0001078bd6b8();
    func_0x0001072b9f3c();
  }
  lStack_2b0 = *param_2;
  lStack_2a0 = param_2[1];
  lStack_290 = param_2[2];
  uStack_280 = (ulong)*(uint *)(param_2 + 3);
  uStack_270 = (ulong)*(uint *)((long)param_2 + 0x1c);
  lStack_2a8 = 0;
  uStack_298 = 0;
  uStack_288 = 0;
  uStack_278 = 0;
  uStack_268 = 0;
  func_0x0001003a91d4();
  func_0x0001078bd6b8();
  uVar3 = 0x22aaa;
  func_0x0001072b9f3c();
  func_0x0001003ac6d0(param_1,&ppuStack_260);
  func_0x0001003ac644();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pppuVar2 = &ppuStack_260;
  func_0x0001003ac644();
  func_0x0001078bd6b0();
  func_0x0001078bc540();
  func_0x0001078bc588(*pppuVar2,param_3,uVar3);
  return;
}



/* Entry: 1078bc654; end: 1078bc667;  */

void FUN_1078bc654(void)

{
  func_0x0001078bc674();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bca08; end: 1078bca0b;  */

void FUN_1078bca08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e82a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078bcc4c; end: 1078bcc83;  */

void FUN_1078bcc4c(long param_1,ulong param_2,undefined8 *param_3)

{
  func_0x0001078bcc84(param_1,param_2,param_2,param_3);
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x28) = *param_3;
  }
  return;
}



/* Entry: 1078bcfc4; end: 1078bd08f;  */

void FUN_1078bcfc4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    func_0x0001078bd090(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    func_0x0001078bd0a8(plVar6);
    func_0x0001078bd090(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x0001078bd808();
      func_0x0001078bd7f4();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x0001078bd700();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1078bd20c; end: 1078bd22b;  */

void FUN_1078bd20c(void)

{
  func_0x0001078bd760();
  func_0x0001078bd22c();
  return;
}



/* Entry: 1078bd3ec; end: 1078bd40b;  */

void FUN_1078bd3ec(void)

{
  func_0x0001078bd760();
  func_0x0001078bd40c();
  return;
}



/* Entry: 1078bd614; end: 1078bd62f;  */

void FUN_1078bd614(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078bd630(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bdb18; end: 1078bdb2b;  */

void FUN_1078bdb18(void)

{
  func_0x0001078bdb3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bddd4; end: 1078bde1b;  */

void FUN_1078bddd4(long param_1,long param_2)

{
  func_0x00010835c5d8();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return;
}



/* Entry: 1078be044; end: 1078be073;  */

undefined8 * FUN_1078be044(long *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001078bdf70(param_1 + 4);
  func_0x00010810a400(param_1 + 1);
  func_0x0001078be09c();
  *unaff_x19 = 0;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return unaff_x19;
}



/* Entry: 1078be878; end: 1078be87f;  */

void FUN_1078be878(void)

{
  return;
}



/* Entry: 1078be940; end: 1078be947;  */

void FUN_1078be940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078bf520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078bec74; end: 1078beccf;  */

undefined8 * FUN_1078bec74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e84d0;
  FUN_1078bee5c(param_1[0x4c]);
  __ZNSt3__15mutexD1Ev(param_1 + 0x43);
  func_0x0001078be8a8(param_1 + 0x42);
  func_0x000104c2f714(param_1 + 0x39);
  func_0x0001078bedfc(param_1 + 0x36);
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



/* Entry: 1078bee5c; end: 1078bee97;  */

void FUN_1078bee5c(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x0001078bf5b4();
    FUN_1078bee5c();
    FUN_1078bee5c(*(undefined8 *)(unaff_x19 + 8));
    func_0x000107470508(unaff_x19 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078bf04c; end: 1078bf067;  */

void FUN_1078bf04c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x0001078bf55c();
      } while (extraout_w11 != 0);
    }
    func_0x0001078bf5a8();
    func_0x0001003a90c4(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1078bf17c; end: 1078bf18b;  */

void FUN_1078bf17c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078bf300; end: 1078bf303;  */

void FUN_1078bf300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e85b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078bf4d4; end: 1078bf5e7;  */

void FUN_1078bf4d4(void)

{
  return;
}



/* Entry: 1078c1808; end: 1078c1aaf;  */

void FUN_1078c1808(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined1 in_ZR;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long *plVar14;
  undefined8 **ppuVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar16;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  undefined8 uVar25;
  float fVar26;
  long alStack_338 [3];
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined4 *puStack_2f8;
  undefined1 uStack_2f0;
  long *plStack_2e8;
  byte bStack_2d8;
  undefined1 auStack_2d0 [56];
  undefined8 auStack_298 [2];
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined1 auStack_260 [8];
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_198;
  long lStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_198 = *param_5;
  lStack_190 = param_5[1];
  if (lStack_190 != 0) {
    plVar14 = (long *)(lStack_190 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = *plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar16 = *(long *)(lStack_198 + 0x330);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar24 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  lStack_e8 = 0;
  lStack_f0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  plVar14 = (long *)(lVar16 + 8);
  func_0x0001078c3df0(&uStack_110);
  while (lStack_e8 != 0) {
    lVar16 = 0;
    if (lStack_100 != lStack_108) {
      lVar16 = (lStack_100 - lStack_108) * 0x40 + -1;
    }
    lStack_e8 = lStack_e8 + -1;
    uVar10 = lStack_f0 + lStack_e8;
    plVar18 = *(long **)(*(long *)(lStack_108 + (uVar10 >> 9) * 8) + (uVar10 & 0x1ff) * 8);
    if (0x3ff < lVar16 - uVar10) {
      __ZdlPv(*(undefined8 *)(lStack_100 + -8));
      lStack_100 = lStack_100 + -8;
    }
    lVar16 = *plVar18;
    uVar10 = lVar16 + 8;
    func_0x000104c2d614();
    if ((uVar10 & 1) == 0) {
      lVar21 = *plVar18;
      uVar10 = lVar21 + 0x68;
      func_0x000104c2d614();
      bVar6 = (uVar10 & 1) == 0;
      if (bVar6) {
        func_0x00010724ef84(&uStack_148,lVar21 + 0x68);
        uVar24 = uStack_148;
        uStack_128 = uStack_140;
        uStack_130 = uStack_148;
        uStack_120 = uStack_138;
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_148 = 0;
      }
      else {
        uStack_130 = uStack_130 & 0xffffffffffffff00;
      }
      uVar11 = lVar21 + 0xa0;
      uStack_118 = bVar6;
      func_0x000104c2d614();
      bVar6 = (uVar11 & 1) == 0;
      if (bVar6) {
        func_0x00010724ef84(&uStack_188,lVar21 + 0xa0);
        uVar24 = uStack_188;
        uStack_168 = uStack_180;
        uStack_170 = uStack_188;
        uStack_160 = uStack_178;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_188 = 0;
      }
      else {
        uStack_170 = uStack_170 & 0xffffffffffffff00;
      }
      uStack_158 = bVar6;
      func_0x000107780018(&lStack_e0,lVar16 + 8,&uStack_130,&uStack_170);
      plVar14 = &lStack_e0;
      func_0x0001078c42cc(param_1);
      func_0x0001074730f4(auStack_d8);
      func_0x0001001148fc(&uStack_170);
      if ((uVar11 & 1) == 0) {
        func_0x0001078c5f34();
      }
      func_0x0001001148fc(&uStack_130);
      if ((uVar10 & 1) == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_148);
      }
    }
    plVar2 = (long *)plVar18[2];
    for (plVar18 = (long *)plVar18[1]; in_ZR = plVar18 == plVar2, !(bool)in_ZR;
        plVar18 = plVar18 + 4) {
      plVar14 = plVar18;
      func_0x0001078c3df0(&uStack_110);
    }
  }
  func_0x0001078c4458(&uStack_110);
  func_0x0001078c1614();
  func_0x0001078c5b3c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078c4458(&uStack_110);
  func_0x00010747305c(param_1);
  func_0x0001078c1614(&lStack_198);
  func_0x0001078c5e90();
  func_0x0001078c5bdc();
  lVar16 = *plVar14;
  lStack_320 = plVar14[1];
  alStack_338[2] = lVar16;
  uStack_238 = extraout_x8_00;
  if (lStack_320 != 0) {
    do {
      func_0x0001078c5d48();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2f64c(auStack_2d0);
  alStack_338[0] = 0;
  alStack_338[1] = 0;
  puStack_2f8 = (undefined4 *)(lVar16 + 0x208);
  uStack_2f0 = 1;
  func_0x00010724e404();
  func_0x0001078c1794(alStack_338,*(undefined8 *)(lVar16 + 0x330),*(undefined8 *)(lVar16 + 0x338));
  func_0x0001077805c4(&puStack_270,*(undefined8 *)(lVar16 + 0x2b0));
  ppuVar15 = &puStack_270;
  func_0x000104c2f1f0(auStack_2d0);
  func_0x000104c2f714(&puStack_270);
  func_0x00010724e49c(&puStack_2f8);
  lVar16 = alStack_338[0];
  func_0x0001078c2088(alStack_338[0]);
  uVar10 = *(ulong *)(*(long *)(lVar16 + 0x140) + 0x1b8);
  uVar11 = *(ulong *)(*(long *)(lVar16 + 0x140) + 0x1c0);
  lVar21 = uVar11 - uVar10;
  do {
    uVar9 = uVar10 == uVar11;
    if ((bool)uVar9) {
      uVar17 = *(undefined8 *)(lVar16 + 0x90);
      lVar16 = *(long *)(lVar16 + 0x140);
      uVar25 = *(undefined8 *)(lVar16 + 0x1e0);
      uVar4 = *(undefined8 *)(lVar16 + 0x1e8);
      func_0x0001078c4538(&puStack_270,lVar16 + 0x1f0);
      func_0x0001074c61ec(&puStack_2f8,&puStack_270);
      auStack_298[0] = 0;
      func_0x0001078d3484(extraout_x8,uVar17,auStack_2d0,lVar16,uVar25,uVar4,&puStack_2f8,
                          auStack_298);
      func_0x0001073c5f18(&puStack_2f8);
      func_0x0001074736dc(&puStack_270);
code_r0x0001078c1e60:
      func_0x0001078c17e0(alStack_338);
      func_0x000104c2f714(auStack_2d0);
      func_0x0001078c5f2c();
      func_0x0001078c5b3c(uStack_238);
      if ((bool)uVar9) {
        return;
      }
      ___stack_chk_fail();
code_r0x0001078c1ebc:
      func_0x00010ae87d60(&UNK_10f40ec73);
code_r0x0001078c1ec8:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1078c1ecc);
      (*pcVar8)();
    }
    uVar12 = uVar10;
    func_0x000104c2d614();
    if ((uVar12 & 1) == 0) {
      uVar12 = uVar10;
      func_0x000104c2d614();
      if (((uVar12 & 1) == 0) && (func_0x0001078c6030(), uVar12 != 0)) {
        ppuVar15 = ppuVar15 + 7;
        func_0x0001078c451c(&puStack_2f8);
        if ((bStack_2d8 & 1) == 0) goto code_r0x0001078c1d1c;
        lVar20 = *(long *)(lVar16 + 0x140);
        lVar3 = plStack_2e8[1];
        uVar25 = param_3;
        for (lVar19 = *plStack_2e8; puVar13 = puStack_2f8, lVar19 != lVar3; lVar19 = lVar19 + 0x38)
        {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&puStack_270,lVar19);
          uStack_250 = *(undefined8 *)(uVar10 + 0x50);
          uStack_258 = *(undefined8 *)(uVar10 + 0x48);
          uStack_240 = *(undefined8 *)(uVar10 + 0x60);
          uVar24 = *(ulong *)(uVar10 + 0x58);
          ppuVar15 = &puStack_270;
          uStack_248 = uVar24;
          func_0x0001074c5cd0(lVar20 + 0x1f0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_270);
        }
        if ((bStack_2d8 & 1) == 0) {
          func_0x000104bdc2c8();
          goto code_r0x0001078c1ec8;
        }
        func_0x0001078c2250(*(long *)(uVar10 + 0x38) + 0xc0);
        param_3 = uVar25;
        if (puVar13 == (undefined4 *)0x0) {
code_r0x0001078c1c78:
          if ((bStack_2d8 & 1) != 0) {
            FUN_1078d2cb0(&puStack_280,puStack_2f8);
            uVar9 = puStack_280 == (undefined8 *)0x1;
            if ((bool)uVar9) {
              ppuVar15 = &puStack_278;
              func_0x00010811e74c(*(undefined8 *)(uVar10 + 0x38));
              func_0x0001078c6010();
              func_0x0001078c6044();
              goto code_r0x0001078c1cac;
            }
            func_0x0001078c6004();
            func_0x0001078c6058(&UNK_10f433ce3);
            func_0x0001078c5d1c();
            func_0x0001078c60d0();
            func_0x0001078c6010();
            goto code_r0x0001078c1e5c;
          }
          func_0x000104bdc2c8();
          goto code_r0x0001078c1ec8;
        }
        fVar26 = **(float **)(lVar16 + 0x90);
        func_0x00010778196c();
        fVar22 = (float)NEON_ucvtf(*puVar13);
        fVar23 = (float)uVar24 / fVar26;
        uVar24 = (ulong)(uint)fVar23;
        if (lVar21 != 0x68 || (int)(fVar22 / fVar26) != (int)fVar23) goto code_r0x0001078c1c78;
        fVar22 = (float)NEON_ucvtf(puVar13[1]);
        uVar24 = (ulong)(uint)(fVar22 / fVar26);
        uVar9 = (int)(fVar22 / fVar26) == (int)((float)uVar25 / fVar26);
        if (!(bool)uVar9) goto code_r0x0001078c1c78;
        func_0x0001078c6030();
        if (puVar13 == (undefined4 *)0x0) goto code_r0x0001078c1ebc;
        func_0x000107273b60(auStack_298,1);
        puVar1 = puStack_288;
        puStack_288[2] = 0;
        *puStack_288 = &PTR_DAT_110996440;
        puStack_288[1] = 0;
        func_0x000104c2fe00(&puStack_270,auStack_2d0);
        puStack_278 = ppuVar15[8];
        puStack_280 = ppuVar15[7];
        if (ppuVar15[8] != (undefined8 *)0x0) {
          do {
            func_0x0001078c5d48();
          } while (extraout_w10_00 != 0);
        }
        func_0x00010778149c(puVar1 + 3,&puStack_270,&puStack_280);
        func_0x00010725af58(&puStack_280);
        func_0x000104c2f714(&puStack_270);
        puVar7 = puStack_288;
        puStack_288 = (undefined8 *)0x0;
        puVar1 = puVar7 + 3;
        func_0x000107273c84(auStack_298);
        puStack_270 = (undefined8 *)0x0;
        puStack_268 = (undefined8 *)0x0;
        func_0x000107272e90(&puStack_270);
        puStack_300 = puVar7;
        uStack_318 = 0;
        uStack_310 = 0;
        puStack_308 = puVar1;
        func_0x000107272e90(&uStack_318);
        puStack_268 = puVar7;
        puStack_270 = puVar1;
        if (puVar7 != (undefined8 *)0x0) {
          do {
            func_0x0001078c5d48();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001078c4538(auStack_298,*(long *)(lVar16 + 0x140) + 0x1f0);
        func_0x0001074c61ec(auStack_260,auStack_298);
        func_0x0001078c476c(extraout_x8,&puStack_270);
        func_0x000107470508(&puStack_270);
        func_0x0001074736dc(auStack_298);
        func_0x00010725af58(&puStack_308);
      }
      else {
        puStack_2f8 = (undefined4 *)((ulong)puStack_2f8 & 0xffffffffffffff00);
        bStack_2d8 = 0;
code_r0x0001078c1d1c:
        func_0x0001078c6004();
        func_0x0001078c6058(&UNK_10f433cce);
        func_0x0001078c5d1c();
        func_0x0001078c60d0();
      }
code_r0x0001078c1e5c:
      func_0x0001078c6044();
      goto code_r0x0001078c1e60;
    }
code_r0x0001078c1cac:
    uVar10 = uVar10 + 0x68;
  } while( true );
}



/* Entry: 1078c22ac; end: 1078c22b7;  */

void FUN_1078c22ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8668;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078c2c74; end: 1078c2c9b;  */

long * FUN_1078c2c74(long *param_1)

{
  func_0x0001001148fc(param_1 + 7);
  if (*param_1 != 0) {
    func_0x0001078c2bec(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1078c3230; end: 1078c3257;  */

void FUN_1078c3230(long param_1,undefined8 *param_2,long param_3)

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



/* Entry: 1078c3694; end: 1078c36ab;  */

void FUN_1078c3694(long *param_1,long param_2)

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



/* Entry: 1078c40e8; end: 1078c412b;  */

long FUN_1078c40e8(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x40 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 1078c44f4; end: 1078c451b;  */

long FUN_1078c44f4(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_90 [112];
  
  uVar5 = (undefined4)((ulong)param_3 >> 0x20);
  uVar4 = (undefined4)param_3;
  func_0x0001078c5e28();
  func_0x000104c2fe38();
  func_0x0001078c5f64();
  func_0x00010747a738();
  func_0x000107479cac();
  lVar6 = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  func_0x00010747ab64(*param_2 >> 0xc ^ CONCAT44(uVar5,uVar4) >> 7);
  uVar7 = extraout_x8;
  while( true ) {
    uVar7 = uVar7 & uVar2;
    func_0x00010747ab9c();
    for (uVar8 = extraout_x8_00 & 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar7 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar3 = (int)auStack_90;
      func_0x0001074738d0(auStack_90,uVar1 + uVar9 * 0x58);
      if (iVar3 != 0) {
        return *unaff_x19 + uVar9;
      }
    }
    func_0x00010747a1bc();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7;
  }
  return 0;
}



/* Entry: 1078c4714; end: 1078c476b;  */

void FUN_1078c4714(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 1078c4934; end: 1078c495b;  */

void FUN_1078c4934(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  func_0x0001078c57c8(param_1,&uStack_18);
  return;
}



/* Entry: 1078c5748; end: 1078c57af;  */

void FUN_1078c5748(undefined8 param_1)

{
  ulong unaff_x27;
  byte bVar1;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  
  func_0x0001078c6140();
  func_0x0001078c5dc8();
  do {
    func_0x0001078c5f98();
    for (; unaff_x27 != 0; unaff_x27 = unaff_x27 - 1 & unaff_x27) {
      func_0x0001078c5ea4();
      func_0x0001078c57b0();
      if ((int)param_1 != 0) {
        func_0x0001078c6114();
        return;
      }
    }
    bVar1 = NEON_umaxv(CONCAT17(-((char)((ulong)unaff_d10 >> 0x38) ==
                                 (char)((ulong)unaff_d9 >> 0x38)),
                                CONCAT16(-((char)((ulong)unaff_d10 >> 0x30) ==
                                          (char)((ulong)unaff_d9 >> 0x30)),
                                         CONCAT15(-((char)((ulong)unaff_d10 >> 0x28) ==
                                                   (char)((ulong)unaff_d9 >> 0x28)),
                                                  CONCAT14(-((char)((ulong)unaff_d10 >> 0x20) ==
                                                            (char)((ulong)unaff_d9 >> 0x20)),
                                                           CONCAT13(-((char)((ulong)unaff_d10 >>
                                                                            0x18) ==
                                                                     (char)((ulong)unaff_d9 >> 0x18)
                                                                     ),CONCAT12(-((char)((ulong)
                                                  unaff_d10 >> 0x10) ==
                                                  (char)((ulong)unaff_d9 >> 0x10)),
                                                  CONCAT11(-((char)((ulong)unaff_d10 >> 8) ==
                                                            (char)((ulong)unaff_d9 >> 8)),
                                                           -((char)unaff_d10 == (char)unaff_d9))))))
                                        )),1);
  } while ((bVar1 & 1) == 0);
  return;
}



/* Entry: 1078c5914; end: 1078c5947;  */

undefined8 * FUN_1078c5914(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e87a0;
  func_0x0001078c17e0(param_1 + 0x66);
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



/* Entry: 1078c6164; end: 1078c61fb;  */

void FUN_1078c6164(undefined1 *param_1,long param_2)

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
    func_0x0001078cf224(auStack_40,param_2 + 8);
    func_0x0001078d18fc(param_1,auStack_40);
    func_0x0001078d2a88();
  }
  return;
}



/* Entry: 1078cad34; end: 1078cad57;  */

void FUN_1078cad34(long param_1)

{
  func_0x0001078d2be4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1078cb68c; end: 1078cbd93;  */

/* WARNING: Possible PIC construction at 0x0001078cb7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078cb948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078cb7b4) */
/* WARNING: Removing unreachable block (ram,0x0001078cb7c4) */
/* WARNING: Removing unreachable block (ram,0x0001078cb7cc) */
/* WARNING: Removing unreachable block (ram,0x0001078cb7d0) */
/* WARNING: Removing unreachable block (ram,0x0001078cb7d8) */
/* WARNING: Removing unreachable block (ram,0x0001078cb7dc) */
/* WARNING: Removing unreachable block (ram,0x0001078cb94c) */
/* WARNING: Removing unreachable block (ram,0x0001078cb958) */
/* WARNING: Removing unreachable block (ram,0x0001078cb9a8) */
/* WARNING: Removing unreachable block (ram,0x0001078cb9b0) */
/* WARNING: Removing unreachable block (ram,0x0001078cb9b4) */
/* WARNING: Removing unreachable block (ram,0x0001078cb9bc) */
/* WARNING: Removing unreachable block (ram,0x0001078cba10) */
/* WARNING: Removing unreachable block (ram,0x0001078cb9ec) */
/* WARNING: Removing unreachable block (ram,0x0001078cba14) */
/* WARNING: Removing unreachable block (ram,0x0001078cb9f8) */
/* WARNING: Removing unreachable block (ram,0x0001078cba04) */
/* WARNING: Removing unreachable block (ram,0x0001078cba18) */
/* WARNING: Removing unreachable block (ram,0x0001078cba24) */
/* WARNING: Removing unreachable block (ram,0x0001078cba2c) */
/* WARNING: Removing unreachable block (ram,0x0001078cba4c) */
/* WARNING: Removing unreachable block (ram,0x0001078cba68) */
/* WARNING: Removing unreachable block (ram,0x0001078cba54) */
/* WARNING: Removing unreachable block (ram,0x0001078cba5c) */
/* WARNING: Removing unreachable block (ram,0x0001078cba6c) */
/* WARNING: Removing unreachable block (ram,0x0001078cba74) */
/* WARNING: Removing unreachable block (ram,0x0001078cbabc) */
/* WARNING: Removing unreachable block (ram,0x0001078cbac4) */
/* WARNING: Removing unreachable block (ram,0x0001078cbac8) */
/* WARNING: Removing unreachable block (ram,0x0001078cbacc) */
/* WARNING: Removing unreachable block (ram,0x0001078cbae4) */
/* WARNING: Removing unreachable block (ram,0x0001078cbaf8) */
/* WARNING: Removing unreachable block (ram,0x0001078cbb24) */
/* WARNING: Removing unreachable block (ram,0x0001078cbb14) */
/* WARNING: Removing unreachable block (ram,0x0001078cbb2c) */
/* WARNING: Removing unreachable block (ram,0x0001078cbb1c) */
/* WARNING: Removing unreachable block (ram,0x0001078cbb34) */
/* WARNING: Removing unreachable block (ram,0x0001078cbb50) */
/* WARNING: Removing unreachable block (ram,0x0001078cbb68) */
/* WARNING: Removing unreachable block (ram,0x0001078cbba0) */
/* WARNING: Removing unreachable block (ram,0x0001078cbb78) */
/* WARNING: Removing unreachable block (ram,0x0001078cbb80) */
/* WARNING: Removing unreachable block (ram,0x0001078cbba4) */
/* WARNING: Removing unreachable block (ram,0x0001078cbb40) */
/* WARNING: Removing unreachable block (ram,0x0001078cbba8) */
/* WARNING: Removing unreachable block (ram,0x0001078cbbe0) */
/* WARNING: Removing unreachable block (ram,0x0001078cbbe8) */
/* WARNING: Removing unreachable block (ram,0x0001078cbc20) */
/* WARNING: Removing unreachable block (ram,0x0001078cbc28) */
/* WARNING: Removing unreachable block (ram,0x0001078cbc30) */
/* WARNING: Removing unreachable block (ram,0x0001078cbc34) */
/* WARNING: Removing unreachable block (ram,0x0001078cbc40) */
/* WARNING: Removing unreachable block (ram,0x0001078cbc58) */
/* WARNING: Removing unreachable block (ram,0x0001078cbc60) */
/* WARNING: Removing unreachable block (ram,0x0001078cba38) */
/* WARNING: Removing unreachable block (ram,0x0001078cba48) */
/* WARNING: Removing unreachable block (ram,0x0001078cbb8c) */
/* WARNING: Removing unreachable block (ram,0x0001078cbc68) */
/* WARNING: Removing unreachable block (ram,0x0001078cbc80) */

undefined8 ****** FUN_1078cb68c(undefined8 ******param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined8 ******ppppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 ****ppppuVar6;
  undefined8 ****extraout_x8_00;
  undefined8 *****extraout_x8_01;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ****ppppuVar9;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *****pppppuVar10;
  long *plVar11;
  undefined8 *****pppppuVar12;
  undefined8 ***pppuStack_168;
  undefined1 uStack_160;
  undefined8 *****pppppuStack_158;
  undefined1 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 ****ppppuStack_130;
  undefined1 uStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 *puStack_118;
  undefined8 ****ppppuStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_68;
  
  ppppppuVar3 = param_1;
  func_0x0001078d2214();
  pppppuStack_158 = ppppppuVar3 + 0x14;
  uStack_150 = 1;
  uStack_68 = extraout_x8;
  func_0x0001073ae49c();
  if (param_1[0x1c] == (undefined8 *****)0x0) {
    pppppuVar10 = param_1[0x12];
    in_ZR = pppppuVar10 == (undefined8 *****)0x0;
    bVar1 = !(bool)in_ZR;
    if (pppppuVar10 == (undefined8 *****)0x0) {
      pppuStack_168 = (undefined8 ***)((ulong)pppuStack_168 & 0xffffffffffffff00);
      uStack_160 = 0;
    }
    else {
      ppppuStack_108 = pppppuVar10 + 0x37;
      uStack_100 = CONCAT71(uStack_100._1_7_,1);
      __ZNSt3__119__shared_mutex_base11lock_sharedEv();
      ppppuStack_120 = pppppuVar10 + 8;
      puStack_118 = (undefined8 *)CONCAT71(puStack_118._1_7_,1);
      __ZNSt3__119__shared_mutex_base11lock_sharedEv();
      pppppuVar4 = pppppuVar10 + 3;
      func_0x0001078cd040(pppppuVar4,param_2);
      if (pppppuVar4 != (undefined8 *****)0x0) {
        pppppuVar12 = pppppuVar10 + 0x2f;
        ppppuStack_130 = pppppuVar12;
        __ZNSt3__15mutex8try_lockEv();
        uStack_128 = SUB81(pppppuVar12,0);
        if ((int)pppppuVar12 != 0) {
          ppppuVar6 = pppppuVar4[10];
          pppuVar7 = ppppuVar6[7];
          in_ZR = pppuVar7 == (undefined8 ***)0xffffffffffffffff;
          if (!(bool)in_ZR) {
            pppuVar8 = ppppuVar6[8];
            pppuVar7[8] = pppuVar8;
            pppuVar8[7] = pppuVar7;
            ppppuVar9 = pppppuVar10[0x25];
            ppppuVar6[7] = pppppuVar10 + 0x1d;
            ppppuVar6[8] = ppppuVar9;
            ppppuVar9[7] = ppppuVar6;
            pppppuVar10[0x25] = ppppuVar6;
          }
          func_0x00010054bf64(&ppppuStack_130);
        }
        pppuStack_168 = pppppuVar4[9];
        if (((undefined8 ****)pppuStack_168 != (undefined8 ****)0x0) &&
           ((undefined8 ***)pppuStack_168[2] != (undefined8 ***)0x0)) {
          do {
            func_0x0001078d2300();
            pppuStack_168 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        uStack_160 = 1;
        func_0x0001000df5a0(&ppppuStack_130);
        func_0x0001078d292c();
        func_0x0001078d29d0();
        goto code_r0x0001078cbd94;
      }
      pppuStack_168 = (undefined8 ***)((ulong)pppuStack_168 & 0xffffffffffffff00);
      uStack_160 = 0;
      func_0x0001078d292c();
      func_0x0001078d29d0();
    }
    pppppuVar12 = param_1[0x11];
    uStack_100 = 1;
    puVar5 = (undefined8 *)0x248;
    __Znwm();
    plVar11 = puVar5 + 1;
    *plVar11 = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_1109e8930;
    pppppuVar10 = (undefined8 *****)(puVar5 + 3);
    pppppuVar4 = (undefined8 *****)0x0;
    puStack_f8 = puVar5;
    if (pppppuVar12[3] != (undefined8 ****)0x0) {
      do {
        func_0x0001078d22f0();
        pppppuVar4 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    ppppuStack_120 = pppppuVar4;
    func_0x000108122a10(pppppuVar10,&ppppuStack_120);
    func_0x000107475310(&ppppuStack_120);
    puVar5[3] = &PTR_DAT_1109e8980;
    puVar5[0x38] = param_1;
    puVar5[0x39] = pppppuVar12;
    *(bool *)(puVar5 + 0x3a) = bVar1;
    *(undefined8 *)((long)puVar5 + 0x1dc) = 0;
    *(undefined8 *)((long)puVar5 + 0x1d4) = 0;
    *(undefined1 *)((long)puVar5 + 0x224) = 0;
    *(undefined1 *)(puVar5 + 0x45) = 0;
    *(undefined1 *)((long)puVar5 + 0x22c) = 0;
    puVar5[0x46] = 0;
    puVar5[0x48] = 0;
    puVar5[0x47] = 0;
    puVar5[0x3e] = 0;
    puVar5[0x3d] = 0;
    puVar5[0x40] = 0;
    puVar5[0x3f] = 0;
    puVar5[0x42] = 0;
    puVar5[0x41] = 0;
    *(undefined8 *)((long)puVar5 + 0x219) = 0;
    *(undefined8 *)((long)puVar5 + 0x211) = 0;
    puStack_f8 = (undefined8 *)0x0;
    if ((puVar5[5] == 0) || (in_ZR = *(long *)(puVar5[5] + 8) == -1, (bool)in_ZR)) {
      do {
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar1) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      ppppuStack_120 = pppppuVar10;
      puStack_118 = puVar5;
      func_0x0001003a8180(puVar5 + 4,&ppppuStack_120);
      func_0x0001003a90c4(&ppppuStack_120);
    }
    func_0x0001078ce6f4(&ppppuStack_108);
    ppppuStack_130 = pppppuVar10;
    (*(code *)(*pppppuVar10)[4])(pppppuVar10);
  }
  else {
    param_1 = &pppppuStack_158;
    func_0x0001078cec54();
    func_0x0001078d208c(uStack_68);
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x0001078cea28(&ppppuStack_108);
    func_0x000104c305a0(auStack_140);
    func_0x000100100f40(&ppppuStack_130);
    func_0x0001078cd020(&pppuStack_168);
    func_0x0001078cec54(&pppppuStack_158);
    func_0x0001078d2494();
  }
code_r0x0001078cbd94:
  func_0x0001078d2bd8();
  if (!(bool)in_ZR) {
    func_0x0001078d2480();
    func_0x0001078cd108();
  }
  return param_1;
}



/* Entry: 1078cd114; end: 1078cd43f;  */

void FUN_1078cd114(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  undefined8 *puVar6;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
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
  
  func_0x0001078d25ec();
  FUN_1078cdff0();
  if (param_1 != 0) goto LAB_1078cd3cc;
  if ((ulong)unaff_x19[4] < 0xaa) {
    puVar8 = (undefined8 *)unaff_x19[1];
    puVar11 = (undefined8 *)unaff_x19[2];
    puVar10 = (undefined8 *)*unaff_x19;
    puVar12 = unaff_x19 + 3;
    puVar9 = (undefined8 *)*puVar12;
    if ((ulong)((long)puVar9 - (long)puVar10) <= (ulong)((long)puVar11 - (long)puVar8)) {
      lVar7 = (long)puVar9 - (long)puVar10 >> 2;
      if (puVar9 == puVar10) {
        lVar7 = 1;
      }
      func_0x0001078ce0f0(&puStack_b8,lVar7,(long)puVar11 - (long)puVar8 >> 3,puVar12);
      uVar4 = 0xff0;
      __Znwm();
      puVar8 = puStack_b0;
      puStack_c8 = unaff_x19 + 5;
      uStack_c0 = 0xaa;
      puVar11 = puStack_b8;
      puVar12 = puStack_a0;
      if (puStack_a8 == puStack_a0) {
        uStack_d0 = uVar4;
        if (puStack_b0 < puStack_b8 || (long)puStack_b0 - (long)puStack_b8 == 0) {
          uVar5 = (long)puStack_a8 - (long)puStack_b8 >> 2;
          if ((long)puStack_a8 - (long)puStack_b8 == 0) {
            uVar5 = 1;
          }
          func_0x0001078ce0f0(&puStack_90,uVar5,uVar5 >> 2,uStack_98);
          func_0x0001078ce1b0(&puStack_90,puStack_b0,puStack_a8);
          puVar12 = puStack_78;
          puVar9 = puStack_80;
          puVar11 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_90 = puStack_b8;
          puStack_88 = puVar8;
          puStack_80 = puStack_a8;
          puStack_78 = puStack_a0;
          func_0x0001078d2a20();
          puStack_a8 = puVar9;
        }
        else {
          func_0x0001078d2c40((long)puStack_b0 - (long)puStack_b8);
          puVar8 = puStack_b0 + extraout_x8 / -2;
          lVar7 = (long)puStack_a8 - (long)puStack_b0;
          if (lVar7 != 0) {
            _memmove(puVar8,puStack_b0,lVar7);
          }
          puStack_a8 = (undefined8 *)((long)puVar8 + lVar7);
          puStack_b0 = puVar8;
        }
      }
      puVar8 = puStack_a8 + 1;
      *puStack_a8 = uVar4;
      uStack_d0 = 0;
      puVar9 = (undefined8 *)unaff_x19[2];
      while (puVar10 = puStack_b0, puVar6 = (undefined8 *)unaff_x19[1], puVar9 != puVar6) {
        puVar6 = puStack_b0;
        if (puStack_b0 == puVar11) {
          if (puVar8 < puVar12) {
            func_0x0001078d2c40((long)puVar12 - (long)puVar8);
            lVar7 = (long)puVar8 - (long)puVar11;
            puVar1 = puVar8 + extraout_x8_00 / 2;
            puVar6 = (undefined8 *)((long)puVar1 - ((long)puVar8 - (long)puVar11));
            puVar8 = puVar1;
            if (lVar7 != 0) {
              _memmove(puVar6,puVar10,lVar7);
            }
          }
          else {
            lVar7 = (long)puVar12 - (long)puVar11 >> 2;
            if ((long)puVar12 - (long)puVar11 == 0) {
              lVar7 = 1;
            }
            func_0x0001078ce0f0(&puStack_90,lVar7,lVar7 + 3U >> 2,uStack_98);
            func_0x0001078ce1b0(&puStack_90,puVar11,puVar8);
            puVar3 = puStack_78;
            puVar2 = puStack_80;
            puVar6 = puStack_88;
            puVar1 = puStack_90;
            puStack_88 = puVar10;
            puStack_90 = puVar11;
            puStack_80 = puVar8;
            puStack_78 = puVar12;
            func_0x0001078d2a20();
            puVar8 = puVar2;
            puVar11 = puVar1;
            puVar12 = puVar3;
          }
        }
        puVar9 = puVar9 + -1;
        puStack_b0 = puVar6 + -1;
        *puStack_b0 = *puVar9;
      }
      puStack_b8 = (undefined8 *)*unaff_x19;
      *unaff_x19 = puVar11;
      unaff_x19[1] = puStack_b0;
      puStack_a0 = (undefined8 *)unaff_x19[3];
      puStack_a8 = (undefined8 *)unaff_x19[2];
      unaff_x19[2] = puVar8;
      unaff_x19[3] = puVar12;
      puStack_b0 = puVar6;
      func_0x0001078ce148(&uStack_d0);
      func_0x0001078ce170(&puStack_b8);
      goto LAB_1078cd3cc;
    }
    uVar4 = 0xff0;
    __Znwm();
    if (puVar9 != puVar11) {
      *puVar11 = uVar4;
      unaff_x19[2] = puVar11 + 1;
      goto LAB_1078cd3cc;
    }
    if (puVar8 == puVar10) {
      lVar7 = (long)puVar9 - (long)puVar8 >> 2;
      if (puVar11 == puVar8) {
        lVar7 = 1;
      }
      func_0x0001078ce0f0(&puStack_90,lVar7,lVar7 + 3U >> 2,puVar12);
      func_0x0001078ce1b0(&puStack_90,unaff_x19[1],unaff_x19[2]);
      puVar11 = (undefined8 *)unaff_x19[1];
      puVar8 = (undefined8 *)*unaff_x19;
      puVar9 = (undefined8 *)unaff_x19[3];
      puVar12 = (undefined8 *)unaff_x19[2];
      unaff_x19[1] = puStack_88;
      *unaff_x19 = puStack_90;
      unaff_x19[3] = puStack_78;
      unaff_x19[2] = puStack_80;
      puStack_90 = puVar8;
      puStack_88 = puVar11;
      puStack_80 = puVar12;
      puStack_78 = puVar9;
      func_0x0001078d2a20();
      puVar8 = (undefined8 *)unaff_x19[1];
    }
    puVar8[-1] = uVar4;
    unaff_x19[1] = puVar8;
  }
  else {
    func_0x0001078d2840(unaff_x19[4] - 0xaa);
  }
  func_0x0001078ce040();
LAB_1078cd3cc:
  puVar8 = unaff_x19;
  func_0x0001078ce00c();
  uVar4 = *unaff_x20;
  puVar8[1] = unaff_x20[1];
  *puVar8 = uVar4;
  lVar7 = unaff_x20[2];
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
    do {
      func_0x0001078d2300();
      lVar7 = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  puVar8[2] = lVar7;
  unaff_x19[5] = unaff_x19[5] + 1;
  return;
}



/* Entry: 1078cdc98; end: 1078cdcb7;  */

void FUN_1078cdc98(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001078ce2c8();
  }
  return;
}



/* Entry: 1078cdff0; end: 1078ce03f;  */

long FUN_1078cdff0(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0xaa + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 1078ce230; end: 1078ce27b;  */

int FUN_1078ce230(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - 1U & 0xff;
  iVar2 = 0;
  if (uVar1 < 7) {
    iVar2 = uVar1 + 1;
  }
  return iVar2;
}



/* Entry: 1078ce3e4; end: 1078ce3fb;  */

void FUN_1078ce3e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078ce51c; end: 1078ce537;  */

void FUN_1078ce51c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  int extraout_w11;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    if (param_1[1] != 0) {
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



/* Entry: 1078ce630; end: 1078ce653;  */

void FUN_1078ce630(void)

{
  func_0x0001078d26f0();
  func_0x0001078ce624();
  return;
}



/* Entry: 1078ce830; end: 1078cea27;  */

void FUN_1078ce830(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lStack_58;
  undefined1 uStack_50;
  long lStack_48;
  undefined1 uStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  lStack_48 = param_1 + 0x178;
  uStack_40 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar13 = *(long *)(param_1 + 0x168);
  if (lVar13 == param_1 + 0xe8) goto LAB_1078ce9f0;
  lVar5 = *(long *)(lVar13 + 0x38);
  lVar10 = *(long *)(lVar13 + 0x40);
  *(long *)(lVar5 + 0x40) = lVar10;
  *(long *)(lVar10 + 0x38) = lVar5;
  *(undefined8 *)(lVar13 + 0x38) = 0xffffffffffffffff;
  func_0x00010054bf64(&lStack_48);
  lStack_58 = param_1 + 0x40;
  uStack_50 = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  plVar4 = (long *)(param_1 + 0x18);
  func_0x0001078cd040(plVar4,lVar13);
  if (plVar4 != (long *)0x0) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    lVar5 = *plVar4;
    uVar6 = plVar4[1];
    uVar9 = uVar7 - 1;
    if ((uVar7 & uVar9) == 0) {
      uVar6 = uVar9 & uVar6;
    }
    else if (uVar7 <= uVar6) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar6 / uVar7;
      }
      uVar6 = uVar6 - uVar11 * uVar7;
    }
    lVar10 = *(long *)(param_1 + 0x18);
    plVar3 = *(long **)(lVar10 + uVar6 * 8);
    do {
      plVar8 = plVar3;
      plVar3 = (long *)*plVar8;
    } while ((long *)*plVar8 != plVar4);
    plStack_30 = (long *)(param_1 + 0x28);
    if (plVar8 == plStack_30) {
LAB_1078ce924:
      if (lVar5 == 0) {
LAB_1078ce958:
        *(undefined8 *)(lVar10 + uVar6 * 8) = 0;
        lVar5 = *plVar4;
        goto LAB_1078ce960;
      }
      uVar11 = *(ulong *)(lVar5 + 8);
      if ((uVar7 & uVar9) == 0) {
        uVar12 = uVar11 & uVar9;
      }
      else {
        uVar12 = uVar11;
        if (uVar7 <= uVar11) {
          uVar12 = 0;
          if (uVar7 != 0) {
            uVar12 = uVar11 / uVar7;
          }
          uVar12 = uVar11 - uVar12 * uVar7;
        }
      }
      if (uVar12 != uVar6) goto LAB_1078ce958;
LAB_1078ce968:
      if ((uVar7 & uVar9) == 0) {
        uVar11 = uVar11 & uVar9;
      }
      else if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        uVar11 = uVar11 - uVar9 * uVar7;
      }
      if (uVar11 != uVar6) {
        *(long **)(lVar10 + uVar11 * 8) = plVar8;
        lVar5 = *plVar4;
      }
    }
    else {
      uVar11 = plVar8[1];
      if ((uVar7 & uVar9) == 0) {
        uVar11 = uVar11 & uVar9;
      }
      else if (uVar7 <= uVar11) {
        uVar12 = 0;
        if (uVar7 != 0) {
          uVar12 = uVar11 / uVar7;
        }
        uVar11 = uVar11 - uVar12 * uVar7;
      }
      if (uVar11 != uVar6) goto LAB_1078ce924;
LAB_1078ce960:
      if (lVar5 != 0) {
        uVar11 = *(ulong *)(lVar5 + 8);
        goto LAB_1078ce968;
      }
    }
    *plVar8 = lVar5;
    *plVar4 = 0;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
    uStack_28 = 1;
    uStack_27 = 0;
    uStack_23 = 0;
    plStack_38 = plVar4;
    func_0x0001078cebfc(&plStack_38);
    func_0x000104c2f714(lVar13);
    func_0x0001078d29c0();
    plVar4 = (long *)(param_1 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000104c305a0(&lStack_58);
LAB_1078ce9f0:
  func_0x0001000df5a0(&lStack_48);
  return;
}



/* Entry: 1078cefc0; end: 1078cf083;  */

void FUN_1078cefc0(long param_1)

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
  
  func_0x0001078d25ec();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == (undefined8 *)*puStack_50) {
    uVar5 = *unaff_x19;
    uVar2 = unaff_x19[1];
    bVar1 = uVar2 == uVar5;
    if (uVar5 < uVar2) {
      func_0x0001078d2888();
      if (!bVar1) {
        func_0x0001078d29ac();
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
      func_0x0001078cf0ac();
      uStack_68 = uVar5 + (uVar4 >> 2) * 8;
      uStack_58 = uVar5 + uVar2 * 8;
      uStack_70 = uVar5;
      uStack_60 = uStack_68;
      func_0x0001078cf084(&uStack_70,unaff_x19[1],unaff_x19[2]);
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
      func_0x0001078cf108(&uStack_70);
      puVar3 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar3 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar3 + 1);
  return;
}



/* Entry: 1078cf360; end: 1078cf383;  */

void FUN_1078cf360(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  func_0x0001078d1814(param_1,&uStack_18);
  return;
}



/* Entry: 1078d1918; end: 1078d19b7;  */

void FUN_1078d1918(void)

{
  undefined1 in_ZR;
  
  func_0x0001078d22e0();
  if ((bool)in_ZR) {
    func_0x00010755ffd0();
  }
  return;
}



/* Entry: 1078d1ba8; end: 1078d1bab;  */

void FUN_1078d1ba8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d1ccc; end: 1078d1e8b;  */

/* WARNING: Possible PIC construction at 0x0001078d1de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078d1e78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d1dec) */
/* WARNING: Removing unreachable block (ram,0x0001078d1e38) */
/* WARNING: Removing unreachable block (ram,0x0001078d1e68) */
/* WARNING: Removing unreachable block (ram,0x0001078d1e1c) */
/* WARNING: Removing unreachable block (ram,0x0001078d1e7c) */
/* WARNING: Removing unreachable block (ram,0x0001078d1e84) */

long FUN_1078d1ccc(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  
  lVar5 = param_1;
  func_0x0001078d2214();
  lVar3 = *(long *)(*(long *)(lVar5 + 0x2b0) + 0x150);
  uVar4 = *(undefined8 *)(lVar5 + 8);
  if (*(char *)(*(long *)(lVar5 + 0x2b0) + 0x84) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x340);
    lVar5 = *(long *)(param_1 + 0x348);
    if (lVar5 != 0) {
      do {
        func_0x0001078d2394();
      } while (extraout_w10 != 0);
    }
  }
  else {
    lVar5 = 0;
    uVar6 = 0;
  }
  uStack_68 = 1;
  puVar1 = (undefined8 *)0x100;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e8af8;
  uStack_80 = uVar6;
  lStack_78 = lVar5;
  puStack_60 = puVar1;
  func_0x0001077e93cc(puVar1 + 4,lVar3 + 8);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar3 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1 + 9,lVar3 + 0x30);
  puVar1[3] = &PTR_DAT_1109dea20;
  puVar1[0xc] = *(undefined8 *)(lVar3 + 0x48);
  func_0x000104c2fe00(puVar1 + 0xd,lVar3 + 0x50);
  puVar1[0x15] = uVar6;
  puVar1[0x14] = uVar4;
  puVar1[0x16] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001078d2394();
    } while (extraout_w10_00 != 0);
  }
  __ZNSt3__115recursive_mutexC1Ev(puVar1 + 0x17);
  puVar1[0x1f] = 0;
  func_0x0001078cab50(&uStack_80);
  puStack_60 = (undefined8 *)0x0;
  puVar2 = auStack_70;
  func_0x0001078d28a0();
  if (puVar2 != (undefined1 *)0x0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078d2cb0; end: 1078d2d23;  */

void FUN_1078d2cb0(undefined8 param_1,uint *param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010778196c();
  uStack_38 = *param_2;
  uStack_34 = param_2[1];
  lStack_28 = (ulong)uStack_38 * 4;
  uStack_30 = 0x100000001;
  uStack_48 = *(undefined8 *)(param_2 + 2);
  lStack_40 = lStack_28 * (ulong)uStack_34;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x0001003adc18(&uStack_58);
  func_0x000108140d48(param_1,&uStack_38,&uStack_50,0);
  func_0x0001003adc18(&uStack_50);
  return;
}



/* Entry: 1078d37fc; end: 1078d38c3;  */

long FUN_1078d37fc(long *param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1 + param_1[1] * 0xb0;
  if (param_1[1] == param_1[2]) {
    func_0x0001078d38c4(&lStack_28,param_1,lVar1,1,0);
  }
  else {
    _bzero(lVar1,0xb0);
    func_0x0001078d3950(lVar1);
    param_1[1] = param_1[1] + 1;
    lStack_28 = lVar1;
  }
  return lStack_28;
}



/* Entry: 1078d3a54; end: 1078d3aeb;  */

/* WARNING: Possible PIC construction at 0x0001078d3b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d3b14) */
/* WARNING: Removing unreachable block (ram,0x0001078d3b1c) */
/* WARNING: Removing unreachable block (ram,0x0001078d3b2c) */

ulong FUN_1078d3a54(ulong param_1,ulong param_2)

{
  undefined1 **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar4;
  undefined *puVar5;
  undefined1 auStack_80 [32];
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if ((param_2 - uVar2) + *(long *)(param_1 + 8) <= 0xba2e8ba2e8ba2e - uVar2) {
    if (uVar2 >> 0x3d == 0) {
      uVar3 = (uVar2 << 3) / 5;
    }
    else {
      uVar3 = uVar2 << 3;
      if (4 < uVar2 >> 0x3d) {
        uVar3 = 0xffffffffffffffff;
      }
    }
    param_2 = *(long *)(param_1 + 8) + param_2;
    if (0xba2e8ba2e8ba2d < uVar3) {
      uVar3 = 0xba2e8ba2e8ba2e;
    }
    if (param_2 <= uVar3) {
      param_2 = uVar3;
    }
    return param_2;
  }
  func_0x0001078d4b2c();
  if (param_2 < 0xba2e8ba2e8ba2f) {
    if (param_2 < 0xba2e8ba2e8ba2f) {
      param_2 = param_2 * 0xb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Znwm_110352280)(param_2);
      return param_2;
    }
    ppuVar1 = &puStack_20;
    ppuVar4 = &puStack_20;
    uStack_18 = 0x1078d3ac4;
    puVar5 = &UNK_1078d3b70;
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00010772e264();
  }
  else {
    uStack_18 = 0x1078d3ac4;
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x0001078d4b2c();
    ppuVar1 = (undefined1 **)auStack_80;
    puStack_28 = &UNK_1078d3aec;
    ppuVar4 = &puStack_30;
    puStack_30 = (undefined1 *)&puStack_20;
    func_0x0001078d4a24();
    func_0x0001078d4b6c();
    puVar5 = &UNK_1078d3b14;
  }
  *(undefined8 *)((long)ppuVar1 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppuVar1 + -0x38) = unaff_x23;
  *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_x22;
  *(long *)((long)ppuVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar1 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar4;
  *(undefined **)((long)ppuVar1 + -8) = puVar5;
  func_0x0001078d4ac4();
  func_0x0001078d3c24();
  *(ulong *)((long)ppuVar1 + -0x50) = param_1;
  _bzero();
  uVar2 = param_1;
  func_0x0001078d3950(param_1);
  *(ulong *)((long)ppuVar1 + -0x50) = param_1 + unaff_x21 * 0xb0;
  func_0x0001078d4aa4();
  *(undefined8 *)((long)ppuVar1 + -0x58) = 0;
  *(undefined8 *)((long)ppuVar1 + -0x50) = 0;
  func_0x0001078d4abc();
  return uVar2;
}



/* Entry: 1078d3cf4; end: 1078d3d07;  */

void FUN_1078d3cf4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    func_0x0001078d3d24();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 1078d3ea8; end: 1078d3edb;  */

long FUN_1078d3ea8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001078d3c08(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1078d40c0; end: 1078d411f;  */

void FUN_1078d40c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_2;
  if (param_2 + 3 == puVar1) {
    func_0x0001078d4120(param_1,puVar1,puVar1 + param_2[1] * 0x16,0);
    func_0x0001078d3bd8(param_2,*param_2,param_2[1]);
    param_2[1] = 0;
  }
  else {
    *param_1 = puVar1;
    uVar2 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}



/* Entry: 1078d43e0; end: 1078d445f;  */

void FUN_1078d43e0(long param_1)

{
  long unaff_x19;
  
  func_0x0001078d4afc();
  func_0x00010090c1cc();
  func_0x0001078d440c(param_1 + 8,unaff_x19 + 8);
  return;
}



/* Entry: 1078d4590; end: 1078d45b3;  */

undefined8 FUN_1078d4590(undefined8 param_1)

{
  func_0x0001078d45b4();
  return param_1;
}



/* Entry: 1078d485c; end: 1078d4893;  */

long FUN_1078d485c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e8bf8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078d4c58; end: 1078d4c7f;  */

long FUN_1078d4c58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078d50d4; end: 1078d50e7;  */

void FUN_1078d50d4(void)

{
  func_0x0001078d50c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d5304; end: 1078d530b;  */

void FUN_1078d5304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d5458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078d5540; end: 1078d563b;  */

undefined1  [16] FUN_1078d5540(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong extraout_x8;
  int iVar4;
  ulong uVar5;
  int extraout_w10;
  undefined1 auVar6 [16];
  long alStack_60 [3];
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *param_2;
  lStack_38 = param_2[1];
  lStack_40 = lVar1;
  if (lStack_38 != 0) {
    do {
      func_0x0001078d6b20();
    } while (extraout_w10 != 0);
  }
  alStack_60[2] = lVar1 + 0x208;
  uStack_48 = 1;
  func_0x000107279a5c();
  func_0x0001078d563c(alStack_60,*(undefined8 *)(lVar1 + 0x330));
  lVar1 = alStack_60[0];
  alStack_60[0] = 0;
  alStack_60[1] = 0;
  func_0x0001078d56d0(alStack_60);
  func_0x000107279ee0(alStack_60 + 2);
  func_0x0001078d6bc4();
  uVar3 = 0;
  if (*(float *)(lVar1 + 0x310) != 0.0) {
    func_0x0001078d6bec();
    uVar3 = extraout_x8 | 0x100000000;
  }
  if (*(float *)(lVar1 + 0x314) == 0.0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)(uint)(int)(*(float *)(lVar1 + 0x314) * *(float *)(lVar1 + 0x358)) | 0x100000000;
  }
  iVar2 = (int)*(float *)(lVar1 + 0x3c0);
  if ((uVar3 & 0x100000000) != 0) {
    iVar2 = (int)uVar3;
  }
  iVar4 = (int)*(float *)(lVar1 + 0x3c4);
  if ((uVar5 & 0x100000000) != 0) {
    iVar4 = (int)uVar5;
  }
  auVar6._4_4_ = (int)*(float *)(lVar1 + 0x3c4);
  auVar6._0_4_ = (int)*(float *)(lVar1 + 0x3c0);
  func_0x0001078d6c3c();
  auVar6._12_4_ = iVar4;
  auVar6._8_4_ = iVar2;
  return auVar6;
}



/* Entry: 1078d5e34; end: 1078d5e93;  */

void FUN_1078d5e34(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    func_0x0001078d6cf0();
    func_0x00010778196c();
    func_0x000107781994();
    NEON_ucvtf(*param_2,4);
  }
  return;
}



/* Entry: 1078d5f3c; end: 1078d6023;  */

/* WARNING: Possible PIC construction at 0x0001078d5fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d5fac) */
/* WARNING: Removing unreachable block (ram,0x0001078d6000) */
/* WARNING: Removing unreachable block (ram,0x0001078d6020) */
/* WARNING: Removing unreachable block (ram,0x0001078d5fec) */

void FUN_1078d5f3c(void)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_48;
  long lStack_40;
  
  func_0x0001078d6b74();
  uStack_48 = 1;
  lVar1 = 0x3f8;
  __Znwm();
  lStack_40 = lVar1;
  func_0x0001078d6cdc();
  func_0x0001078d60d0();
  lStack_40 = 0;
  lVar2 = lVar1 + 0x18;
  if ((*(long *)(lVar1 + 0x28) != 0) && (*(long *)(*(long *)(lVar1 + 0x28) + 8) != -1)) {
    return;
  }
  uStack_68 = 0x1078d5fac;
  lStack_80 = lVar2;
  lStack_78 = lVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  do {
    func_0x0001078d6b20();
  } while (extraout_w10 != 0);
  func_0x0001003a8180(lVar2 + 8,&lStack_80);
  func_0x0001003a90c4(&lStack_80);
  return;
}



/* Entry: 1078d6538; end: 1078d654b;  */

void FUN_1078d6538(void)

{
  func_0x0001078d64c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d6e98; end: 1078d6f73;  */

/* WARNING: Possible PIC construction at 0x0001078d70cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d70d0) */
/* WARNING: Removing unreachable block (ram,0x0001078d7104) */
/* WARNING: Removing unreachable block (ram,0x0001078d70fc) */
/* WARNING: Removing unreachable block (ram,0x0001078d7108) */
/* WARNING: Removing unreachable block (ram,0x0001078d7114) */
/* WARNING: Removing unreachable block (ram,0x0001078d711c) */
/* WARNING: Removing unreachable block (ram,0x0001078d7184) */

long * FUN_1078d6e98(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined1 uStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1e0 [56];
  undefined8 uStack_1a8;
  long lStack_148;
  long lStack_140;
  undefined1 auStack_138 [56];
  undefined1 uStack_100;
  undefined1 uStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  
  func_0x0001078d7840();
  lStack_148 = *param_3;
  lStack_140 = param_3[1];
  if (lStack_140 != 0) {
    plVar7 = (long *)(lStack_140 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = extraout_x8;
  func_0x000104c2fe00(auStack_138,*(long *)(lStack_148 + 0x330) + 0x1b8);
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  func_0x000107780f3c(&lStack_c0,auStack_138);
  plVar7 = &lStack_c0;
  lVar8 = 1;
  func_0x0001077ddc48(param_1);
  func_0x0001074730f4(auStack_b8);
  func_0x000107473150(auStack_138);
  plVar6 = &lStack_148;
  func_0x0001078d6dc0();
  func_0x0001078d782c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074730f4(auStack_b8);
    func_0x000107473150(auStack_138);
    func_0x0001078d6dc0(&lStack_148);
    func_0x0001078d7860();
    plVar6 = &lStack_280;
    func_0x0001078d7840();
    lVar1 = *plVar7;
    lStack_258 = plVar7[1];
    lStack_260 = lVar1;
    uStack_1a8 = extraout_x8_01;
    if (lStack_258 != 0) {
      do {
        func_0x0001078d7850();
      } while (extraout_w10 != 0);
    }
    func_0x000104c2fe00(auStack_1e0,*(long *)(lVar1 + 0x330) + 0x1b8);
    FUN_1078c44f4(lVar8,auStack_1e0);
    uVar5 = 0;
    func_0x000104c2d614();
    uVar4 = lVar8 == 0;
    if (!(bool)uVar4) {
      uVar5 = 1;
    }
    if ((uVar5 & 1) == 0) {
      func_0x00010724ef84(&lStack_250,auStack_1e0);
      func_0x0001004c3cd0(&uStack_218,&UNK_10f433cce,&lStack_250);
      extraout_x8_00[1] = uStack_210;
      *extraout_x8_00 = uStack_218;
      extraout_x8_00[2] = uStack_208;
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_218 = 0;
      *(undefined4 *)(extraout_x8_00 + 4) = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_218);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_250);
      func_0x000104c2f714(auStack_1e0);
      plVar7 = &lStack_260;
      func_0x0001078d6dc0();
      func_0x0001078d782c(uStack_1a8);
      if ((bool)uVar4) {
        return plVar7;
      }
      ___stack_chk_fail();
      func_0x0001073c5f18(&lStack_250);
      func_0x0001078d7884();
      func_0x000104c2f714(&uStack_218);
      func_0x000104c2f714(auStack_1e0);
      plVar6 = &lStack_260;
      func_0x0001078d6dc0();
      func_0x0001078d7860();
    }
    else {
      func_0x000104c2f64c(&uStack_218);
      lStack_270 = lVar1 + 0x208;
      uStack_268 = 1;
      func_0x00010724e404();
      lVar8 = *(long *)(lVar1 + 0x330);
      if (lVar8 != 0) {
        if (*(long *)(lVar8 + 8) == 0) {
          if (*(long *)(lVar8 + 0x10) != 0) {
            do {
              func_0x0001078d7850();
            } while (extraout_w10_01 != 0);
          }
        }
        else {
          func_0x0001003ae9f0(&lStack_250);
          if (lStack_250 == 0) {
            lStack_280 = 0;
            lStack_278 = 0;
          }
          else {
            lStack_278 = lStack_248;
            lStack_280 = lVar8;
            if (lStack_248 != 0) {
              do {
                func_0x0001078d7850();
              } while (extraout_w10_00 != 0);
            }
          }
          func_0x0001003a90c4(&lStack_250);
        }
      }
      lStack_280 = 0;
      lStack_278 = 0;
    }
    if (plVar6[1] != 0) {
      func_0x0001000df548();
    }
    return plVar6;
  }
  return plVar6;
}



/* Entry: 1078d746c; end: 1078d747f;  */

void FUN_1078d746c(void)

{
  func_0x0001078d745c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


