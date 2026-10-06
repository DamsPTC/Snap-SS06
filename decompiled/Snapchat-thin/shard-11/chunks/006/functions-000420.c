/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087956c4; end: 1087956c7;  */

undefined8 * FUN_1087956c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087956c8; end: 1087956db;  */

void FUN_1087956c8(void)

{
  func_0x000107c31514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087956dc; end: 10879571b;  */

long * FUN_1087956dc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -8;
      func_0x000107c27f9c();
    }
    func_0x000108796224();
  }
  return param_1;
}



/* Entry: 10879571c; end: 10879576f;  */

void FUN_10879571c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar1 = param_2[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108796160();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return;
}



/* Entry: 108795770; end: 10879579b;  */

long FUN_108795770(long param_1)

{
  func_0x000104be3970(param_1 + 0x20);
  func_0x000107c27a04(param_1 + 8);
  return param_1;
}



/* Entry: 10879579c; end: 10879580b;  */

void FUN_10879579c(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_2b0 [656];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x000107c3141c(), (int)lVar2 != 0)) {
    FUN_108795840(auStack_2b0,*param_1);
    FUN_10879580c(param_1 + 1,auStack_2b0);
    FUN_1086cf6c4(auStack_2b0);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[0x53] == '\x01') {
    FUN_1086cf6c4();
    *(undefined1 *)(plVar1 + 0x52) = 0;
  }
  return;
}



/* Entry: 10879580c; end: 10879583f;  */

long FUN_10879580c(long param_1)

{
  if (*(char *)(param_1 + 0x290) == '\x01') {
    FUN_1086d4e60();
  }
  else {
    func_0x0001086d4f44();
  }
  return param_1;
}



/* Entry: 108795840; end: 108795acf;  */

void FUN_108795840(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  func_0x000107c313f8();
  uVar1 = param_2;
  func_0x000107c313d8();
  *param_1 = uVar1;
  func_0x000107c313e0(param_1 + 1,param_2,1);
  func_0x000107c28990(param_1 + 4,param_2,2);
  uVar1 = param_2;
  func_0x000107c313d8(param_2,3);
  *(int *)(param_1 + 8) = (int)uVar1;
  func_0x0001073a755c(param_1 + 9,param_2,4);
  uVar1 = param_2;
  func_0x000107c313d8(param_2,5);
  *(int *)(param_1 + 0xd) = (int)uVar1;
  func_0x000107c2879c(param_1 + 0xe,param_2,6);
  uVar1 = param_2;
  func_0x000107c313d8(param_2,7);
  *(int *)(param_1 + 0x11) = (int)uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,8);
  param_1[0x12] = uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,9);
  param_1[0x13] = uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,10);
  *(int *)(param_1 + 0x14) = (int)uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,0xb);
  *(int *)((long)param_1 + 0xa4) = (int)uVar1;
  FUN_10865fa68(param_1 + 0x15,param_2,0xc);
  uVar1 = param_2;
  func_0x000107c287bc(param_2,0xd);
  *(char *)(param_1 + 0x18) = (char)uVar1;
  uVar2 = 0xe;
  uVar1 = param_2;
  func_0x000107c28228();
  param_1[0x19] = uVar1;
  *(undefined1 *)(param_1 + 0x1a) = uVar2;
  func_0x0001073a755c(param_1 + 0x1b,param_2,0xf);
  func_0x0001073a755c(param_1 + 0x1f,param_2,0x10);
  func_0x0001073a755c(param_1 + 0x23,param_2,0x11);
  uVar1 = param_2;
  func_0x000107c287bc(param_2,0x12);
  *(char *)(param_1 + 0x27) = (char)uVar1;
  func_0x000107c2893c(param_1 + 0x28,param_2,0x13);
  FUN_108795ad0(param_1 + 0x2c,param_2,0x14);
  uVar1 = param_2;
  func_0x000107c287bc(param_2,0x15);
  *(char *)(param_1 + 0x45) = (char)uVar1;
  func_0x000107c2893c(param_1 + 0x46,param_2,0x16);
  func_0x0001073a755c(param_1 + 0x4a,param_2,0x17);
  uVar2 = 0x18;
  uVar1 = param_2;
  func_0x000107c28228();
  param_1[0x4e] = uVar1;
  *(undefined1 *)(param_1 + 0x4f) = uVar2;
  uVar2 = 0x19;
  func_0x000107c28228();
  param_1[0x50] = param_2;
  *(undefined1 *)(param_1 + 0x51) = uVar2;
  return;
}



/* Entry: 108795ad0; end: 108795b13;  */

void FUN_108795ad0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c313e0(auStack_38);
  FUN_108795b14(param_1,auStack_38);
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 108795b14; end: 108795b57;  */

void FUN_108795b14(undefined8 param_1,undefined8 *param_2)

{
  FUN_1086a2e08(param_1);
  func_0x000107c3034c(param_1,*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  return;
}



/* Entry: 108795b58; end: 108795c8f;  */

void FUN_108795b58(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar3;
  long lVar4;
  code *extraout_x8;
  
  func_0x000107c28834(param_1 + 0x38);
  func_0x0001087963a8();
  func_0x0001087963a0();
  plVar1 = *(long **)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x20);
  do {
    plVar3 = plVar2;
    if (((plVar3 == plVar1) || (func_0x000108796364(*plVar3), (extraout_w8 >> 5 & 1) != 0)) ||
       (func_0x000108796364(*plVar3), (extraout_w8_00 >> 1 & 1) == 0)) break;
    func_0x00010086e594(plVar3);
    plVar2 = plVar3 + 1;
  } while (*(int *)(*plVar3 + 0x98) == 6);
  plVar2 = *(long **)(**(long **)(param_1 + 0x50) + 0x30);
  (**(code **)(*plVar2 + 0x58))
            (plVar2,plVar3 == plVar1,
             (ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 3);
  lVar4 = *(long *)(param_1 + 0x48);
  if (plVar3 == plVar1) {
    if (*(char *)(lVar4 + 0x30) == '\0') {
      func_0x0001087964bc();
      func_0x00010879657c();
    }
    else {
      func_0x0001087962b4(*(undefined8 *)(lVar4 + 0x20));
      (*extraout_x8)();
    }
  }
  else if (*(char *)(lVar4 + 0x30) == '\0') {
    func_0x0001087964bc();
    func_0x000108796370();
  }
  else {
    (**(code **)(**(long **)(lVar4 + 0x20) + 0x18))(*(long **)(lVar4 + 0x20),4);
  }
  func_0x000108796598();
  func_0x0001087965b8();
  func_0x0001087961b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108795c90; end: 108795cbf;  */

void FUN_108795c90(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x38);
  func_0x0001087963a0();
  func_0x0001087965b8();
  func_0x0001087961b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108795cc0; end: 108795e2b;  */

void FUN_108795cc0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  uint extraout_w8;
  ulong uVar5;
  ulong extraout_x8;
  int extraout_w10;
  long lVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    pbVar4 = (byte *)(param_1 + 0x20);
    FUN_108794f84(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x60);
    do {
      func_0x00010879649c();
    } while (extraout_w10 != 0);
    func_0x000108796364(*(undefined8 *)(param_1 + 0x58));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar7 = *(long *)(param_1 + 0x58);
      func_0x0001087963c0();
      lVar8 = *(long *)pbVar4;
      if (lVar8 == 0) {
        func_0x000107c3a5c0();
        lVar8 = *(long *)pbVar4;
      }
      plVar1 = (long *)(lVar7 + 0x10);
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            pbVar9 = *(byte **)(lVar7 + 0x90);
            uVar5 = (ulong)pbVar9[1];
            if (pbVar9[1] == *pbVar9) {
              func_0x000108796354();
              func_0x00010879669c();
              *(byte **)(pbVar9 + 8) = pbVar4;
              *(byte **)(lVar7 + 0x90) = pbVar4;
              uVar5 = extraout_x8;
              pbVar9 = pbVar4;
            }
            uVar5 = uVar5 & 0xffffffff;
            pbVar4 = pbVar9 + uVar5 * 0x18 + 0x10;
            pbVar4[0] = 0;
            pbVar4[1] = 0;
            pbVar4[2] = 0;
            pbVar4[3] = 0;
            pbVar4[4] = 0;
            pbVar4[5] = 0;
            pbVar4[6] = 0;
            pbVar4[7] = 0;
            *(long *)(pbVar9 + uVar5 * 0x18 + 0x18) = param_1;
            *(long *)(pbVar9 + uVar5 * 0x18 + 0x20) = lVar8;
            *(char *)(*(long *)(lVar7 + 0x90) + 1) = *(char *)(*(long *)(lVar7 + 0x90) + 1) + '\x01'
            ;
            *(undefined8 *)(lVar7 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar6 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x58);
  func_0x0001087965a8();
  func_0x0001087965a0();
  func_0x000108796598();
  func_0x0001087961b0();
  func_0x0001087965b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108795e2c; end: 108795e63;  */

void FUN_108795e2c(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x0001087965a8();
    func_0x0001087965a0();
  }
  func_0x0001087961b0();
  func_0x0001087965b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108795e64; end: 1087967c3;  */

void FUN_108795e64(void)

{
  return;
}



/* Entry: 1087967c4; end: 1087971e7;  */

void FUN_1087967c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint extraout_w8;
  uint uVar7;
  uint extraout_w8_00;
  uint extraout_w8_01;
  int extraout_w8_02;
  int iVar8;
  code *extraout_x8;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_4b0 [24];
  byte bStack_498;
  undefined **ppuStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined4 uStack_470;
  undefined **ppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined1 auStack_280 [344];
  byte bStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined **appuStack_b0 [3];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar2 = param_1;
  if ((7 < *(uint *)(param_2 + 8)) ||
     (func_0x000108797850(), uVar7 = extraout_w8, (extraout_w9 & 0x72) == 0)) {
    uStack_480 = 0;
    uStack_478 = 0;
    ppuStack_490 = &PTR_FUN_110a609a8;
    uStack_488 = 0;
    uStack_470 = 0x1b5;
    func_0x0001087976f0();
    func_0x000108797770();
    func_0x0001087976b8();
    pppuVar3 = &ppuStack_490;
    func_0x000107c28824(pppuVar3,auStack_80,lVar2);
    func_0x0001087976c8();
    func_0x000108797780();
    func_0x0001087976c0();
    func_0x000108797840();
    FUN_108659af8();
    func_0x000107c2884c(&ppuStack_d8,pppuVar3);
    func_0x000108797688();
    func_0x000108797680();
    func_0x0001087976a0();
    iVar8 = *(int *)(param_2 + 4);
    func_0x000107c279d4(auStack_4b0,param_2 + 0x60);
    uVar9 = 0;
    if ((iVar8 - 3U < 2) && (((bStack_498 & 1) != 0 && ((*(uint *)(param_2 + 0x88) & 1) != 0)))) {
      FUN_108862cf0(&ppuStack_490,*(undefined8 *)(param_1 + 0x18),auStack_4b0,
                    *(undefined8 *)(param_2 + 0x80));
      func_0x000107c28998(&ppuStack_2d0,&ppuStack_490);
      func_0x000107c28948(&ppuStack_490);
      if ((bStack_128 & 1) == 0) {
        uVar10 = 0;
        uVar9 = 0;
      }
      else {
        puVar4 = auStack_280;
        func_0x000107c29e78();
        uVar9 = (ulong)puVar4 & 0xffffffff;
        uVar10 = 0x100000000;
      }
      func_0x000107c288dc(&ppuStack_2d0);
      uVar9 = uVar9 | uVar10;
    }
    func_0x000107c279dc(auStack_4b0);
    if (uVar9 >> 0x20 != 0) {
      func_0x000107c278b8(&ppuStack_2d0,"message_type");
      FUN_108841d64(appuStack_b0,uVar9);
      func_0x000107c28820(&ppuStack_d8,&ppuStack_2d0,appuStack_b0);
      func_0x0001087976a8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_2d0);
    }
    func_0x0001087977e8();
    func_0x000107c2884c(&ppuStack_490,&ppuStack_d8);
    func_0x0001087977dc();
    (*extraout_x8)(uVar9,&ppuStack_490);
    func_0x0001087976a0();
    func_0x000107c2882c(&ppuStack_d8);
    uVar7 = *(uint *)(param_2 + 8);
  }
  if (((7 < uVar7) || (uVar7 = 1 << (ulong)(uVar7 & 0x1f), (uVar7 & 0x8d) != 0)) ||
     ((uVar7 & 0x70) == 0)) {
    func_0x000108797640();
    uStack_2b0 = 0x1b7;
    func_0x0001087976f0();
    func_0x000107c278b8(&ppuStack_d8);
    func_0x0001087976b8();
    func_0x000108797808();
    func_0x0001087976c8();
    func_0x000108797778();
    func_0x0001087976c0();
    func_0x000108797840();
    FUN_1087974f8();
    func_0x0001087976d4();
    func_0x0001087976b0();
    func_0x000108797728();
    func_0x000108797660();
    func_0x0001087977e8();
    func_0x000108797674();
    func_0x0001087977dc();
    func_0x000108797668();
    func_0x000108797660();
    func_0x0001087976a0();
  }
  func_0x000108797640();
  uStack_2b0 = 0x1b6;
  func_0x0001087976f0();
  pppuVar3 = &ppuStack_d8;
  func_0x000107c278b8(pppuVar3);
  func_0x0001087976b8();
  func_0x000108797808();
  func_0x000108797690();
  func_0x000108797778();
  func_0x0001087976c0();
  func_0x000108797744();
  FUN_10879755c();
  func_0x000108797770();
  func_0x000107c28818(pppuVar3,auStack_80,*(int *)(param_2 + 8) == 2);
  func_0x000108797780();
  func_0x000108797744();
  func_0x0001087976d4();
  func_0x000108797688();
  func_0x000108797680();
  func_0x0001087976b0();
  func_0x000108797728();
  func_0x000108797660();
  func_0x0001087977e8();
  func_0x000108797674();
  func_0x0001087977dc();
  func_0x000108797668();
  func_0x000108797660();
  func_0x0001087976a0();
  if ((5 < *(uint *)(param_2 + 8)) ||
     (func_0x000108797850(), uVar7 = extraout_w8_00, (extraout_w9_00 & 0x32) == 0)) {
    if (*(char *)(param_2 + 0x40) == '\x01') {
      func_0x000108797834();
    }
    else {
      func_0x000108797790();
    }
    func_0x000108797640();
    uStack_2b0 = 0x1b8;
    func_0x0001087976f0();
    func_0x000108797778();
    func_0x0001087976b8();
    func_0x000108797710();
    func_0x000108797690();
    func_0x000108797770();
    func_0x0001087976c0();
    func_0x000108797744();
    func_0x000108797780();
    pppuVar3 = appuStack_b0;
    func_0x000108797800(pppuVar3);
    func_0x000108797848();
    func_0x0001087976d4();
    func_0x0001087976a8();
    func_0x000108797688();
    func_0x000108797680();
    func_0x0001087976b0();
    func_0x000108797660();
    func_0x0001087977e8();
    func_0x000108797674();
    func_0x0001087977dc();
    func_0x000108797668();
    func_0x000108797660();
    func_0x0001087976a0();
    func_0x000108797728();
    uVar7 = *(uint *)(param_2 + 8);
  }
  if ((5 < uVar7) || (func_0x000108797850(), uVar7 = extraout_w8_01, (extraout_w9_01 & 0x32) == 0))
  {
    if ((uVar7 == 7) && ((*(byte *)(param_2 + 0x40) & 1) != 0)) {
      func_0x000108797834();
    }
    else {
      func_0x000108797790();
    }
    func_0x000108797778();
    func_0x000108797640();
    uStack_2b0 = 0x1b9;
    func_0x0001087976f0();
    func_0x000108797770();
    func_0x0001087976b8();
    func_0x000107c28824(&ppuStack_2d0,auStack_80,pppuVar3);
    func_0x000108797690();
    func_0x000108797780();
    func_0x0001087976c0();
    func_0x000108797744();
    func_0x000107c278b8(appuStack_b0,"step");
    func_0x000108797800(auStack_f0);
    func_0x000108797848();
    func_0x000107c278b8(auStack_108,"failure_reason");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_120,auStack_4b0);
    func_0x000108797848();
    func_0x0001087976d4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    func_0x0001087976a8();
    func_0x000108797688();
    func_0x000108797680();
    func_0x000108797660();
    func_0x0001087977e8();
    func_0x000108797674();
    func_0x0001087977dc();
    func_0x000108797668();
    func_0x000108797660();
    func_0x0001087976a0();
    func_0x0001087976b0();
    func_0x000108797728();
    uVar7 = *(uint *)(param_2 + 8);
  }
  if (((7 < uVar7) || (func_0x000108797850(), (extraout_w9_02 & 0x8e) != 0)) ||
     (iVar8 = extraout_w8_02, (extraout_w9_02 & 0x70) == 0)) {
    func_0x000108797640();
    uStack_2b0 = 0x1ba;
    func_0x0001087976f0();
    func_0x000108797778();
    func_0x0001087976b8();
    func_0x000108797710();
    func_0x000108797690();
    func_0x000108797770();
    func_0x0001087976c0();
    func_0x000108797744();
    FUN_108659af8();
    func_0x0001087976d4();
    func_0x000108797680();
    func_0x0001087976b0();
    func_0x000108797660();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x0001087977b0(*(undefined8 *)(param_2 + 0x50),uVar5);
    func_0x0001087977f4();
    uStack_c8 = 0;
    uStack_c0 = 0;
    ppuStack_d8 = &PTR_FUN_110a609a8;
    uStack_d0 = 0;
    uStack_b8 = 0x1bc;
    func_0x0001087976f0();
    func_0x000108797780();
    func_0x0001087976b8();
    func_0x000107c28824(&ppuStack_d8,auStack_98,uVar5);
    func_0x000108797690();
    pppuVar3 = appuStack_b0;
    func_0x000107c278b8(pppuVar3);
    func_0x0001087976c0();
    func_0x000108797744();
    FUN_108659af8();
    func_0x000107c2884c(&ppuStack_2d0,pppuVar3);
    func_0x0001087976a8();
    func_0x000108797688();
    func_0x000107c2882c(&ppuStack_d8);
    ppuStack_d8 = (undefined **)(*(long *)(param_2 + 0x58) * 1000000);
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&ppuStack_2d0,&ppuStack_d8);
    func_0x000108797660();
    func_0x0001087976a0();
    iVar8 = *(int *)(param_2 + 8);
  }
  if (2 < iVar8 - 4U) {
    lVar1 = *(long *)(param_2 + 0x18);
    for (lVar2 = *(long *)(param_2 + 0x10); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
      FUN_1087975d8(&ppuStack_d8,lVar2);
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      ppuStack_2d0 = &PTR_FUN_110a609a8;
      uStack_2b0 = 0x1bb;
      puVar4 = auStack_4b0;
      func_0x000107c278b8(puVar4,&UNK_10f4ba7c3);
      func_0x0001087976b8();
      func_0x000108797710();
      puVar6 = auStack_80;
      func_0x000107c278b8(puVar6,&UNK_10f4ba7d1);
      func_0x0001087976c0();
      func_0x000107c28824(puVar4,auStack_80,puVar6);
      func_0x000107c278b8(auStack_98,"step");
      func_0x000108797800(appuStack_b0);
      func_0x000107c28820(puVar4,auStack_98,appuStack_b0);
      func_0x0001087976d4();
      func_0x0001087976a8();
      func_0x000108797688();
      func_0x000108797680();
      func_0x0001087976b0();
      func_0x000108797660();
      func_0x0001087977b0(uStack_c0,*(undefined8 *)(param_1 + 8));
      func_0x0001087977f4();
      func_0x0001087976a0();
      func_0x000108797728();
    }
  }
  return;
}



/* Entry: 1087971e8; end: 1087972ef;  */

void FUN_1087971e8(undefined8 param_1,uint *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long *plVar3;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  if (param_3 == 0) {
    func_0x00010879774c();
    func_0x0001087976f0();
    func_0x000107c278b8(auStack_98);
    uVar1 = (ulong)*param_2;
    func_0x000108841bf8(uVar1);
    func_0x000108797828();
    func_0x0001087976c8();
    func_0x000107c278b8(auStack_b0);
    uVar2 = (ulong)param_2[1];
    func_0x000108841c14(uVar2);
    func_0x000107c28824(uVar1,auStack_b0,uVar2);
    FUN_1087972f0();
    func_0x000107c2884c(auStack_58,uVar1);
    func_0x000108797788();
    func_0x0001087977a8();
    func_0x000107c2882c(auStack_80);
    plVar3 = *(long **)(unaff_x19 + 8);
    func_0x000107c2884c(auStack_d8,auStack_58);
    func_0x000108797814(*(undefined8 *)(*plVar3 + 0x50));
    func_0x0001087977a0();
    func_0x000107c2882c(auStack_58);
  }
  return;
}



/* Entry: 1087972f0; end: 108797353;  */

void FUN_1087972f0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x0001087976fc();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001087976dc();
  }
  func_0x000108797820();
  if (unaff_w20 < 0x2b8) {
    func_0x0001087977cc();
  }
  func_0x00010879771c();
  func_0x000108797654();
  return;
}



/* Entry: 108797354; end: 108797473;  */

void FUN_108797354(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long unaff_x19;
  long *plVar2;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  
  func_0x00010879774c();
  func_0x0001087976f0();
  func_0x000107c278b8(auStack_a8);
  func_0x000108841bf8(*param_2);
  func_0x000108797828();
  func_0x0001087976c8();
  func_0x000107c278b8(auStack_c0);
  uVar1 = (ulong)(uint)param_2[1];
  func_0x000108841c14(uVar1);
  func_0x000108797840();
  FUN_108797474(param_3,param_4);
  FUN_1087972f0(uVar1,param_3);
  func_0x000107c2884c(auStack_68,uVar1);
  func_0x000108797788();
  func_0x0001087977a8();
  func_0x000107c2882c(auStack_90);
  plVar2 = *(long **)(unaff_x19 + 8);
  func_0x000107c2884c(auStack_e8,auStack_68);
  func_0x000108797814(*(undefined8 *)(*plVar2 + 0x50));
  func_0x0001087977a0();
  func_0x000107c2882c(auStack_68);
  return;
}



/* Entry: 108797474; end: 1087974bb;  */

undefined4 FUN_108797474(uint param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x2000c;
  if ((param_1 == 7) && ((param_2[1] & 1) != 0)) {
    uVar1 = 0x2000f;
    if ((*param_2 & 0xfffffffd) != 0) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  if (param_1 < 7) {
    uVar2 = *(undefined4 *)(&UNK_10df55f94 + (ulong)param_1 * 4);
  }
  return uVar2;
}



/* Entry: 1087974bc; end: 1087974ef;  */

void FUN_1087974bc(long param_1,undefined8 param_2,long param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  func_0x000108841bf8(param_2);
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x1bf;
  func_0x00010884394c(param_1 + 8,&UNK_10f4bdac3);
  pppuVar1 = &ppuStack_80;
  func_0x000107c28824(pppuVar1,auStack_98,param_2);
  func_0x000108843930();
  func_0x000107c2881c(pppuVar1,auStack_b0,*(undefined1 *)(param_3 + 8));
  func_0x000107c2884c(auStack_58,pppuVar1);
  func_0x00010884381c();
  func_0x000108843848();
  func_0x000107c2882c(&ppuStack_80);
  func_0x000107c2884c(auStack_d8,auStack_58);
  func_0x0001088439a4();
  func_0x00010884383c();
  func_0x000107c2882c(auStack_d8);
  func_0x000107c2882c(auStack_58);
  return;
}



/* Entry: 1087974f0; end: 1087974f7;  */

void FUN_1087974f0(long param_1,int param_2,int param_3)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a6f328;
  uStack_78 = 0;
  uStack_60 = 3;
  func_0x00010884394c((undefined8 *)(param_1 + 8),&UNK_10f4bdaf0);
  pppuVar1 = &ppuStack_80;
  FUN_108791610(pppuVar1,auStack_98,(&PTR_DAT_110a7a360)[param_2]);
  func_0x000108843930();
  FUN_108791610(pppuVar1,auStack_b0,(&PTR_DAT_110a7a360)[param_3]);
  FUN_108791a34(auStack_58,pppuVar1);
  func_0x00010884381c();
  func_0x000108843848();
  FUN_108788618(&ppuStack_80);
  plVar2 = *(long **)(param_1 + 8);
  FUN_108791a34(auStack_d8,auStack_58);
  func_0x00010884383c(*(undefined8 *)(*plVar2 + 0x60));
  FUN_108788618(auStack_d8);
  FUN_108788618(auStack_58);
  return;
}



/* Entry: 1087974f8; end: 10879755b;  */

void FUN_1087974f8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x0001087976fc();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001087976dc();
  }
  func_0x000108797820();
  if (unaff_w20 < 0x2b8) {
    func_0x0001087977cc();
  }
  func_0x00010879771c();
  func_0x000108797654();
  return;
}



/* Entry: 10879755c; end: 1087975bf;  */

void FUN_10879755c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x0001087976fc();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001087976dc();
  }
  func_0x000108797820();
  if (unaff_w20 < 0x2b8) {
    func_0x0001087977cc();
  }
  func_0x00010879771c();
  func_0x000108797654();
  return;
}



/* Entry: 1087975c0; end: 1087975c3;  */

undefined8 * FUN_1087975c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6fcc8;
  func_0x000107c28808(param_1 + 3);
  func_0x000107c288a4(param_1 + 1);
  return param_1;
}



/* Entry: 1087975c4; end: 1087975d7;  */

void FUN_1087975c4(void)

{
  func_0x000108797600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087975d8; end: 10879763f;  */

void FUN_1087975d8(long param_1,long param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 108797640; end: 10879785b;  */

void FUN_108797640(void)

{
  return;
}



/* Entry: 10879785c; end: 1087978f3;  */

void FUN_10879785c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *aplStack_50 [2];
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_1087978f4(aplStack_50,lVar2);
    if (aplStack_50[0] != (long *)0x0) {
      (**(code **)(*aplStack_50[0] + 0x10))(aplStack_50[0],param_2,param_3,param_4);
    }
    func_0x000108797c54(aplStack_50);
  }
  return;
}



/* Entry: 1087978f4; end: 10879796f;  */

void FUN_1087978f4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 108797970; end: 1087979a3;  */

void FUN_108797970(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 **)(param_1 + 8) = puVar4 + 2;
  return;
}



/* Entry: 1087979a4; end: 108797a5f;  */

long FUN_1087979a4(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar3 = param_1;
  FUN_108797a60(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_108797b34(auStack_48,plVar3,param_1[1] - *param_1 >> 4,param_1 + 2);
  lVar4 = param_2[1];
  uVar5 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar5;
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puStack_38 = puStack_38 + 2;
  FUN_108797aa0(param_1,auStack_48);
  lVar4 = param_1[1];
  FUN_108797bbc(auStack_48);
  return lVar4;
}



/* Entry: 108797a60; end: 108797a9f;  */

undefined8 * FUN_108797a60(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 3);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0xfffffffffffffff;
    }
    return puVar2;
  }
  FUN_108797b20();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
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
  return puVar2;
}



/* Entry: 108797aa0; end: 108797b1f;  */

void FUN_108797aa0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
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



/* Entry: 108797b20; end: 108797b33;  */

long * FUN_108797b20(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f4bab65;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108797b7c();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x10;
  return plVar2;
}



/* Entry: 108797b34; end: 108797b9f;  */

long * FUN_108797b34(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108797b7c();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 108797ba0; end: 108797bbb;  */

long * FUN_108797ba0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_108797be8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108797bbc; end: 108797be7;  */

long * FUN_108797bbc(long *param_1)

{
  FUN_108797be8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108797be8; end: 108797bef;  */

void FUN_108797be8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    func_0x000108797c2c();
  }
  return;
}



/* Entry: 108797bf0; end: 108797c7b;  */

void FUN_108797bf0(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    func_0x000108797c2c();
  }
  return;
}



/* Entry: 108797c7c; end: 108797c83;  */

void FUN_108797c7c(void)

{
  return;
}



/* Entry: 108797c84; end: 108797e9b;  */

/* WARNING: Removing unreachable block (ram,0x000108797dcc) */
/* WARNING: Removing unreachable block (ram,0x000108797dd0) */
/* WARNING: Removing unreachable block (ram,0x000108797dd8) */
/* WARNING: Removing unreachable block (ram,0x000108797de4) */

undefined8 * FUN_108797c84(undefined8 *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  *param_1 = &PTR_FUN_110a6fed8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar2 = param_1[0xe];
  if (uVar2 != 0) {
    if (0x456c797dd49c34 < uVar2) {
      FUN_1087988dc();
      goto LAB_108797e68;
    }
    FUN_1087989d8(auStack_78,uVar2,0,&uStack_80);
    func_0x0001087990e4();
    func_0x0001087990f8();
  }
  plVar5 = param_1 + 0xd;
  while( true ) {
    while( true ) {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        for (; uStack_90 != uStack_88; uStack_90 = uStack_90 + 0x3b0) {
          FUN_108797e9c(param_1,uStack_90,3);
        }
        plVar5 = (long *)param_1[0xd];
        while (plVar5 != (long *)0x0) {
          lVar4 = *plVar5;
          func_0x000108798b18(plVar5 + 2);
          __ZdlPv(plVar5);
          plVar5 = (long *)lVar4;
        }
        lVar4 = param_1[0xb];
        param_1[0xb] = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        func_0x000107c289f8(param_1 + 5);
        func_0x000107c2814c(param_1 + 3);
        func_0x000107c286e4(param_1 + 1);
        return param_1;
      }
      if (uStack_80 <= uStack_88) break;
      FUN_108798d48(uStack_88,plVar5 + 5);
      uStack_88 = uStack_88 + 0x3b0;
    }
    uVar2 = (long)uStack_88 / 0x3b0 + 1;
    if (0x456c797dd49c34 < uVar2) break;
    uVar3 = ((long)uStack_80 / 0x3b0) * 2;
    if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
      uVar3 = uVar2;
    }
    if (0x22b63cbeea4e19 < (ulong)((long)uStack_80 / 0x3b0)) {
      uVar3 = 0x456c797dd49c34;
    }
    FUN_1087989d8(auStack_78,uVar3,(long)uStack_88 / 0x3b0,&uStack_80);
    FUN_108798d48(lStack_68,plVar5 + 5);
    lStack_68 = lStack_68 + 0x3b0;
    func_0x0001087990e4();
    func_0x0001087990f8();
  }
  FUN_1087988dc();
LAB_108797e68:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108797e6c);
  (*pcVar1)();
}



/* Entry: 108797e9c; end: 10879803b;  */

/* WARNING: Removing unreachable block (ram,0x000108797dcc) */
/* WARNING: Removing unreachable block (ram,0x000108797dd0) */
/* WARNING: Removing unreachable block (ram,0x000108797dd8) */
/* WARNING: Removing unreachable block (ram,0x000108797de4) */

long ******* FUN_108797e9c(long *******param_1,long *******param_2,long *******param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long extraout_x8;
  long *******ppppppplVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long ******pppppplVar13;
  int iVar14;
  long unaff_x22;
  long *******ppppppplVar15;
  uint uVar16;
  long lVar17;
  long *******ppppppplVar18;
  ulong uVar19;
  long *******ppppppplVar20;
  long *******ppppppplVar21;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  undefined1 auStack_4c8 [16];
  long lStack_4b8;
  long *****ppppplStack_450;
  long *****ppppplStack_448;
  code *pcStack_90;
  undefined **ppuStack_88;
  long ******pppppplStack_68;
  long ******pppppplStack_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  
  ppppppplVar18 = (long *******)&ppppplStack_450;
  ppppppplVar4 = (long *******)&ppppplStack_450;
  ppppppplVar21 = param_1;
  func_0x000108798fe8();
  FUN_108798620();
  iVar14 = (int)param_3;
  if ((int)ppppppplVar21 == 0) {
    uVar3 = iVar14 == 5;
    if ((bool)uVar3) {
      ppppplStack_448 = (long *****)param_1[2];
      ppppplStack_450 = (long *****)param_1[1];
      if (param_1[2] != (long ******)0x0) {
        do {
          func_0x000108798fc4();
        } while (extraout_w10 != 0);
      }
      func_0x000108799100();
      func_0x000107c28150();
      func_0x000108799128();
      func_0x0001087990b8();
      lVar17 = *(long *)(unaff_x22 + 0x70);
      pcStack_90 = FUN_108798ee4;
      ppuStack_88 = &PTR_FUN_110a6ff58;
      func_0x0001087990f0();
      func_0x000108798ffc();
      func_0x0001087990b0();
      func_0x0001087990c0();
      func_0x000108799034();
      func_0x000108798f84();
      func_0x000108799064();
      if (lVar17 == 0) {
        func_0x000108799010();
        if (extraout_x8 != 0) {
          do {
            func_0x000108798fc4();
          } while (extraout_w10_00 != 0);
        }
        func_0x0001087990d0();
        func_0x0001087990a8();
        func_0x00010879906c();
      }
      func_0x0001087988a0(&ppppplStack_450);
      ppppppplVar21 = ppppppplVar18;
    }
LAB_108797fa4:
    func_0x000108798fac();
    if ((bool)uVar3) {
      return ppppppplVar21;
    }
  }
  else {
    FUN_108798700();
    if ((ulong)param_3 >> 0x20 == 0) {
      uVar3 = 0;
      ppppppplVar21 = param_3;
      if (iVar14 == 4) {
        ppppppplVar21 = param_1 + 5;
        func_0x000107c289e8();
        uVar3 = 0;
        if (*(char *)ppppppplVar21 == '\x01') {
          param_3 = (long *******)0x6;
          in_ZR = 1;
          goto LAB_108797fc4;
        }
      }
      goto LAB_108797fa4;
    }
LAB_108797fc4:
    FUN_108798734(param_1,param_2,param_3);
    func_0x000108798fac();
    if ((bool)in_ZR) {
      ppppppplVar21 = param_1 + 0xb;
      ppppppplVar18 = (long *******)param_1[0xc];
      ppppppplVar4 = ppppppplVar21;
      if ((ppppppplVar18 != (long *******)0x0) && (param_1[0xe] != (long ******)0x0)) {
        ppppppplVar5 = param_2;
        FUN_108848654();
        uVar19 = (long)ppppppplVar18 - 1;
        if (((ulong)ppppppplVar18 & uVar19) == 0) {
          ppppppplVar20 = (long *******)((ulong)ppppppplVar5 & uVar19);
        }
        else {
          ppppppplVar20 = ppppppplVar5;
          if (ppppppplVar18 <= ppppppplVar5) {
            uVar1 = 0;
            uVar16 = (uint)ppppppplVar18;
            if (uVar16 != 0) {
              uVar1 = (uint)ppppppplVar5 / uVar16;
            }
            ppppppplVar20 = (long *******)(ulong)((uint)ppppppplVar5 - uVar1 * uVar16);
          }
        }
        ppppppplVar15 = (long *******)(*ppppppplVar21)[(long)ppppppplVar20];
        ppppppplVar4 = ppppppplVar5;
        if (ppppppplVar15 != (long *******)0x0) {
          do {
            while( true ) {
              ppppppplVar15 = (long *******)*ppppppplVar15;
              if (ppppppplVar15 == (long *******)0x0) {
                return ppppppplVar4;
              }
              ppppppplVar6 = (long *******)ppppppplVar15[1];
              if (ppppppplVar6 != ppppppplVar5) break;
              ppppppplVar4 = ppppppplVar15 + 2;
              func_0x000107c28078(ppppppplVar4,param_2);
              if ((int)ppppppplVar4 != 0) {
                pppppplVar10 = param_1[0xc];
                pppppplVar7 = *ppppppplVar15;
                pppppplVar8 = ppppppplVar15[1];
                uVar19 = (long)pppppplVar10 - 1;
                if (((ulong)pppppplVar10 & uVar19) == 0) {
                  pppppplVar8 = (long ******)(uVar19 & (ulong)pppppplVar8);
                }
                else if (pppppplVar10 <= pppppplVar8) {
                  uVar9 = 0;
                  if (pppppplVar10 != (long ******)0x0) {
                    uVar9 = (ulong)pppppplVar8 / (ulong)pppppplVar10;
                  }
                  pppppplVar8 = (long ******)((long)pppppplVar8 - uVar9 * (long)pppppplVar10);
                }
                pppppplVar11 = *ppppppplVar21;
                ppppppplVar21 = (long *******)pppppplVar11[(long)pppppplVar8];
                do {
                  ppppppplVar4 = ppppppplVar21;
                  ppppppplVar21 = (long *******)*ppppppplVar4;
                } while ((long *******)*ppppppplVar4 != ppppppplVar15);
                pppppplStack_60 = (long ******)(param_1 + 0xd);
                if (ppppppplVar4 == (long *******)pppppplStack_60) {
LAB_108798c88:
                  if (pppppplVar7 == (long ******)0x0) {
LAB_108798cbc:
                    pppppplVar11[(long)pppppplVar8] = (long *****)0x0;
                    pppppplVar7 = *ppppppplVar15;
                    goto LAB_108798cc4;
                  }
                  pppppplVar12 = (long ******)pppppplVar7[1];
                  if (((ulong)pppppplVar10 & uVar19) == 0) {
                    pppppplVar13 = (long ******)((ulong)pppppplVar12 & uVar19);
                  }
                  else {
                    pppppplVar13 = pppppplVar12;
                    if (pppppplVar10 <= pppppplVar12) {
                      uVar9 = 0;
                      if (pppppplVar10 != (long ******)0x0) {
                        uVar9 = (ulong)pppppplVar12 / (ulong)pppppplVar10;
                      }
                      pppppplVar13 = (long ******)((long)pppppplVar12 - uVar9 * (long)pppppplVar10);
                    }
                  }
                  if (pppppplVar13 != pppppplVar8) goto LAB_108798cbc;
                }
                else {
                  pppppplVar12 = ppppppplVar4[1];
                  if (((ulong)pppppplVar10 & uVar19) == 0) {
                    pppppplVar12 = (long ******)((ulong)pppppplVar12 & uVar19);
                  }
                  else if (pppppplVar10 <= pppppplVar12) {
                    uVar9 = 0;
                    if (pppppplVar10 != (long ******)0x0) {
                      uVar9 = (ulong)pppppplVar12 / (ulong)pppppplVar10;
                    }
                    pppppplVar12 = (long ******)((long)pppppplVar12 - uVar9 * (long)pppppplVar10);
                  }
                  if (pppppplVar12 != pppppplVar8) goto LAB_108798c88;
LAB_108798cc4:
                  if (pppppplVar7 == (long ******)0x0) goto LAB_108798cfc;
                  pppppplVar12 = (long ******)pppppplVar7[1];
                }
                if (((ulong)pppppplVar10 & uVar19) == 0) {
                  pppppplVar12 = (long ******)((ulong)pppppplVar12 & uVar19);
                }
                else if (pppppplVar10 <= pppppplVar12) {
                  uVar19 = 0;
                  if (pppppplVar10 != (long ******)0x0) {
                    uVar19 = (ulong)pppppplVar12 / (ulong)pppppplVar10;
                  }
                  pppppplVar12 = (long ******)((long)pppppplVar12 - uVar19 * (long)pppppplVar10);
                }
                if (pppppplVar12 != pppppplVar8) {
                  pppppplVar11[(long)pppppplVar12] = (long *****)ppppppplVar4;
                  pppppplVar7 = *ppppppplVar15;
                }
LAB_108798cfc:
                *ppppppplVar4 = pppppplVar7;
                *ppppppplVar15 = (long ******)0x0;
                param_1[0xe] = (long ******)((long)param_1[0xe] + -1);
                uStack_58 = 1;
                uStack_57 = 0;
                uStack_53 = 0;
                ppppppplVar21 = &pppppplStack_68;
                pppppplStack_68 = (long ******)ppppppplVar15;
                FUN_108798ad4(ppppppplVar21);
                return ppppppplVar21;
              }
            }
            if (((ulong)ppppppplVar18 & uVar19) == 0) {
              ppppppplVar6 = (long *******)((ulong)ppppppplVar6 & uVar19);
            }
            else if (ppppppplVar18 <= ppppppplVar6) {
              uVar9 = 0;
              if (ppppppplVar18 != (long *******)0x0) {
                uVar9 = (ulong)ppppppplVar6 / (ulong)ppppppplVar18;
              }
              ppppppplVar6 = (long *******)((long)ppppppplVar6 - uVar9 * (long)ppppppplVar18);
            }
          } while (ppppppplVar6 == ppppppplVar20);
        }
      }
      return ppppppplVar4;
    }
  }
  ___stack_chk_fail();
  func_0x000108799058();
  func_0x0001087988a0();
  func_0x00010879907c();
  *ppppppplVar4 = (long ******)&PTR_FUN_110a6fed8;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  pppppplVar7 = ppppppplVar4[0xe];
  if (pppppplVar7 != (long ******)0x0) {
    if ((long ******)0x456c797dd49c34 < pppppplVar7) {
      FUN_1087988dc();
      goto LAB_108797e68;
    }
    FUN_1087989d8(auStack_4c8,pppppplVar7,0,&uStack_4d0);
    func_0x0001087990e4();
    func_0x0001087990f8();
  }
  ppppppplVar21 = ppppppplVar4 + 0xd;
  while( true ) {
    while( true ) {
      ppppppplVar21 = (long *******)*ppppppplVar21;
      if (ppppppplVar21 == (long *******)0x0) {
        for (; uStack_4e0 != uStack_4d8; uStack_4e0 = uStack_4e0 + 0x3b0) {
          FUN_108797e9c(ppppppplVar4,uStack_4e0,3);
        }
        pppppplVar7 = ppppppplVar4[0xd];
        while (pppppplVar7 != (long ******)0x0) {
          pppppplVar8 = (long ******)*pppppplVar7;
          func_0x000108798b18(pppppplVar7 + 2);
          __ZdlPv(pppppplVar7);
          pppppplVar7 = pppppplVar8;
        }
        pppppplVar7 = ppppppplVar4[0xb];
        ppppppplVar4[0xb] = (long ******)0x0;
        if (pppppplVar7 != (long ******)0x0) {
          __ZdlPv();
        }
        func_0x000107c289f8(ppppppplVar4 + 5);
        func_0x000107c2814c(ppppppplVar4 + 3);
        func_0x000107c286e4(ppppppplVar4 + 1);
        return ppppppplVar4;
      }
      if (uStack_4d0 <= uStack_4d8) break;
      FUN_108798d48(uStack_4d8,ppppppplVar21 + 5);
      uStack_4d8 = uStack_4d8 + 0x3b0;
    }
    uVar19 = (long)uStack_4d8 / 0x3b0 + 1;
    if (0x456c797dd49c34 < uVar19) break;
    uVar9 = ((long)uStack_4d0 / 0x3b0) * 2;
    if (uVar9 < uVar19 || uVar9 - uVar19 == 0) {
      uVar9 = uVar19;
    }
    if (0x22b63cbeea4e19 < (ulong)((long)uStack_4d0 / 0x3b0)) {
      uVar9 = 0x456c797dd49c34;
    }
    FUN_1087989d8(auStack_4c8,uVar9,(long)uStack_4d8 / 0x3b0,&uStack_4d0);
    FUN_108798d48(lStack_4b8,ppppppplVar21 + 5);
    lStack_4b8 = lStack_4b8 + 0x3b0;
    func_0x0001087990e4();
    func_0x0001087990f8();
  }
  FUN_1087988dc();
LAB_108797e68:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108797e6c);
  (*pcVar2)();
}



/* Entry: 10879803c; end: 10879803f;  */

/* WARNING: Removing unreachable block (ram,0x000108797dcc) */
/* WARNING: Removing unreachable block (ram,0x000108797dd0) */
/* WARNING: Removing unreachable block (ram,0x000108797dd8) */
/* WARNING: Removing unreachable block (ram,0x000108797de4) */

undefined8 * FUN_10879803c(undefined8 *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  *param_1 = &PTR_FUN_110a6fed8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar2 = param_1[0xe];
  if (uVar2 != 0) {
    if (0x456c797dd49c34 < uVar2) {
      FUN_1087988dc();
      goto LAB_108797e68;
    }
    FUN_1087989d8(auStack_78,uVar2,0,&uStack_80);
    func_0x0001087990e4();
    func_0x0001087990f8();
  }
  plVar5 = param_1 + 0xd;
  while( true ) {
    while( true ) {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        for (; uStack_90 != uStack_88; uStack_90 = uStack_90 + 0x3b0) {
          FUN_108797e9c(param_1,uStack_90,3);
        }
        plVar5 = (long *)param_1[0xd];
        while (plVar5 != (long *)0x0) {
          lVar4 = *plVar5;
          func_0x000108798b18(plVar5 + 2);
          __ZdlPv(plVar5);
          plVar5 = (long *)lVar4;
        }
        lVar4 = param_1[0xb];
        param_1[0xb] = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        func_0x000107c289f8(param_1 + 5);
        func_0x000107c2814c(param_1 + 3);
        func_0x000107c286e4(param_1 + 1);
        return param_1;
      }
      if (uStack_80 <= uStack_88) break;
      FUN_108798d48(uStack_88,plVar5 + 5);
      uStack_88 = uStack_88 + 0x3b0;
    }
    uVar2 = (long)uStack_88 / 0x3b0 + 1;
    if (0x456c797dd49c34 < uVar2) break;
    uVar3 = ((long)uStack_80 / 0x3b0) * 2;
    if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
      uVar3 = uVar2;
    }
    if (0x22b63cbeea4e19 < (ulong)((long)uStack_80 / 0x3b0)) {
      uVar3 = 0x456c797dd49c34;
    }
    FUN_1087989d8(auStack_78,uVar3,(long)uStack_88 / 0x3b0,&uStack_80);
    FUN_108798d48(lStack_68,plVar5 + 5);
    lStack_68 = lStack_68 + 0x3b0;
    func_0x0001087990e4();
    func_0x0001087990f8();
  }
  FUN_1087988dc();
LAB_108797e68:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108797e6c);
  (*pcVar1)();
}



/* Entry: 108798040; end: 108798053;  */

void FUN_108798040(void)

{
  FUN_108797c84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108798054; end: 108798163;  */

void FUN_108798054(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x8_00;
  ulong uVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x22;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  long *plStack_8a0;
  long *plStack_898;
  undefined8 uStack_890;
  code *pcStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 auStack_440 [944];
  code *pcStack_90;
  undefined **ppuStack_88;
  
  puVar3 = &uStack_450;
  func_0x000108798fe8();
  uStack_448 = *(undefined8 *)(param_1 + 0x10);
  uStack_450 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000108798fc4();
    } while (extraout_w10 != 0);
  }
  FUN_108798d48(auStack_440);
  func_0x000107c28150();
  func_0x000108799128();
  func_0x0001087990b8();
  uVar13 = *(ulong *)(unaff_x22 + 0x70);
  pcStack_90 = FUN_108798de8;
  ppuStack_88 = &PTR_FUN_110a6ff28;
  func_0x0001087990f0();
  func_0x000108798ffc();
  func_0x0001087990b0();
  func_0x0001087990c0();
  func_0x000108799034();
  func_0x000108798f84();
  func_0x000108799064();
  if (uVar13 == 0) {
    func_0x000108799010();
    if (extraout_x8 != 0) {
      do {
        func_0x000108798fc4();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001087990d0();
    func_0x0001087990a8();
    func_0x00010879906c();
  }
  FUN_108798868(&uStack_450);
  func_0x000108798fac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108799058();
  FUN_108798868();
  func_0x00010879907c();
  puVar4 = (undefined1 *)puVar3;
  func_0x000108798fe8();
  FUN_108798620();
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = param_2;
    FUN_108848654();
    uVar17 = *(ulong *)((long)puVar3 + 0x60);
    if (uVar17 != 0) {
      plVar12 = (long *)(uVar17 - 1);
      uVar16 = (uint)uVar17;
      if ((uVar17 & (ulong)plVar12) == 0) {
        uVar13 = uVar16 - 1 & uVar5;
      }
      else {
        uVar13 = uVar5;
        if (uVar17 <= uVar5) {
          uVar1 = 0;
          if (uVar16 != 0) {
            uVar1 = (uint)uVar5 / uVar16;
          }
          uVar13 = (ulong)((uint)uVar5 - uVar1 * uVar16);
        }
      }
      plVar15 = *(long **)(*(long *)((long)puVar3 + 0x58) + uVar13 * 8);
      if (plVar15 != (long *)0x0) {
        do {
          while( true ) {
            plVar15 = (long *)*plVar15;
            if (plVar15 == (long *)0x0) goto LAB_108798234;
            uVar6 = plVar15[1];
            in_ZR = uVar6 == uVar5;
            if (!(bool)in_ZR) break;
            uVar6 = (ulong)(plVar15 + 2);
            func_0x000107c28078(uVar6,param_2);
            if ((uVar6 & 1) != 0) goto LAB_1087984f8;
          }
          if ((uVar17 & (ulong)plVar12) == 0) {
            uVar6 = uVar6 & (ulong)plVar12;
          }
          else if (uVar17 <= uVar6) {
            uVar7 = 0;
            if (uVar17 != 0) {
              uVar7 = uVar6 / uVar17;
            }
            uVar6 = uVar6 - uVar7 * uVar17;
          }
        } while (uVar6 == uVar13);
      }
    }
LAB_108798234:
    plVar15 = (long *)((long)puVar3 + 0x68);
    plVar12 = (long *)0x3d8;
    __Znwm();
    uStack_890 = 0;
    *plVar12 = 0;
    plVar12[1] = uVar5;
    plStack_8a0 = plVar12;
    plStack_898 = plVar15;
    func_0x000107c27994(plVar12 + 2,param_2);
    FUN_108798d48(plVar12 + 5,param_2);
    uStack_890 = CONCAT71(uStack_890._1_7_,1);
    fVar18 = (float)(*(long *)((long)puVar3 + 0x70) + 1);
    if ((uVar17 == 0) ||
       (fVar19 = *(float *)((long)puVar3 + 0x78) * (float)uVar17, in_ZR = fVar19 == fVar18,
       fVar19 < fVar18)) {
      uVar13 = 1;
      if (2 < uVar17) {
        uVar13 = (ulong)((uVar17 & uVar17 - 1) != 0);
      }
      uVar13 = uVar13 | uVar17 << 1;
      uVar17 = (ulong)(fVar18 / *(float *)((long)puVar3 + 0x78));
      if (uVar13 <= uVar17) {
        uVar13 = uVar17;
      }
      if (uVar13 - 1 == 0) {
        uVar13 = 2;
      }
      else if ((uVar13 & uVar13 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      uVar17 = *(ulong *)((long)puVar3 + 0x60);
      if (uVar17 < uVar13) {
LAB_1087982f0:
        if (uVar13 >> 0x3d != 0) goto LAB_1087985b0;
        lVar14 = uVar13 << 3;
        __Znwm(lVar14);
        FUN_108798abc((undefined1 *)((long)puVar3 + 0x58),lVar14);
        *(ulong *)((long)puVar3 + 0x60) = uVar13;
        lVar14 = *(long *)((long)puVar3 + 0x58);
        for (uVar17 = 0; uVar13 != uVar17; uVar17 = uVar17 + 1) {
          *(undefined8 *)(lVar14 + uVar17 * 8) = 0;
        }
        plVar8 = (long *)*plVar15;
        uVar17 = uVar13;
        if (plVar8 != (long *)0x0) {
          uVar10 = plVar8[1];
          uVar7 = uVar13 - 1;
          uVar6 = 0;
          if (uVar13 != 0) {
            uVar6 = uVar10 / uVar13;
          }
          uVar11 = uVar10;
          if (uVar13 <= uVar10) {
            uVar11 = uVar10 - uVar6 * uVar13;
          }
          if ((uVar13 & uVar7) == 0) {
            uVar11 = uVar10 & uVar7;
          }
          *(long **)(lVar14 + uVar11 * 8) = plVar15;
          while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
            uVar6 = plVar8[1];
            if ((uVar13 & uVar7) == 0) {
              uVar6 = uVar6 & uVar7;
            }
            else if (uVar13 <= uVar6) {
              uVar10 = 0;
              if (uVar13 != 0) {
                uVar10 = uVar6 / uVar13;
              }
              uVar6 = uVar6 - uVar10 * uVar13;
            }
            if (uVar6 != uVar11) {
              if (*(long *)(lVar14 + uVar6 * 8) == 0) {
                *(long **)(lVar14 + uVar6 * 8) = plVar9;
                uVar11 = uVar6;
              }
              else {
                *plVar9 = *plVar8;
                *plVar8 = **(undefined8 **)(lVar14 + uVar6 * 8);
                **(long **)(lVar14 + uVar6 * 8) = (long)plVar8;
                plVar8 = plVar9;
              }
            }
          }
        }
      }
      else if (uVar13 < uVar17) {
        uVar6 = (ulong)((float)*(ulong *)((long)puVar3 + 0x70) / *(float *)((long)puVar3 + 0x78));
        if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar6) {
          uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
        }
        if (uVar13 <= uVar6) {
          uVar13 = uVar6;
        }
        if (uVar13 < uVar17) {
          if (uVar13 != 0) goto LAB_1087982f0;
          FUN_108798abc((undefined1 *)((long)puVar3 + 0x58),0);
          *(undefined8 *)((long)puVar3 + 0x60) = 0;
          uVar17 = 0;
        }
        else {
          uVar17 = *(ulong *)((long)puVar3 + 0x60);
        }
      }
      if ((uVar17 & uVar17 - 1) == 0) {
        in_ZR = true;
        uVar13 = (int)uVar17 - 1 & uVar5;
      }
      else {
        in_ZR = uVar5 == uVar17;
        uVar13 = uVar5;
        if (uVar17 <= uVar5) {
          uVar13 = 0;
          if (uVar17 != 0) {
            uVar13 = uVar5 / uVar17;
          }
          uVar13 = uVar5 - uVar13 * uVar17;
        }
      }
    }
    lVar14 = *(long *)((long)puVar3 + 0x58);
    plVar8 = *(long **)(lVar14 + uVar13 * 8);
    if (plVar8 == (long *)0x0) {
      *plVar12 = *plVar15;
      *plVar15 = (long)plVar12;
      *(long **)(lVar14 + uVar13 * 8) = plVar15;
      if (*plVar12 != 0) {
        uVar13 = *(ulong *)(*plVar12 + 8);
        if ((uVar17 & uVar17 - 1) == 0) {
          uVar13 = uVar13 & uVar17 - 1;
          in_ZR = true;
        }
        else {
          in_ZR = uVar13 == uVar17;
          if (uVar17 <= uVar13) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar13 / uVar17;
            }
            uVar13 = uVar13 - uVar5 * uVar17;
          }
        }
        *(long **)(lVar14 + uVar13 * 8) = plVar12;
      }
    }
    else {
      *plVar12 = *plVar8;
      *plVar8 = (long)plVar12;
    }
    plStack_8a0 = (long *)0x0;
    *(long *)((long)puVar3 + 0x70) = *(long *)((long)puVar3 + 0x70) + 1;
    FUN_108798ad4(&plStack_8a0);
LAB_1087984f8:
    plStack_898 = *(long **)((long)puVar3 + 0x10);
    plStack_8a0 = *(long **)((long)puVar3 + 8);
    if (*(long *)((long)puVar3 + 0x10) != 0) {
      do {
        func_0x000108798fc4();
      } while (extraout_w10_01 != 0);
    }
    func_0x000108799100();
    func_0x000107c28150();
    func_0x000108799128();
    func_0x0001087990b8();
    lVar14 = plVar12[0xe];
    pcStack_4e0 = FUN_108798e84;
    ppuStack_4d8 = &PTR_FUN_110a6ff40;
    func_0x0001087990f0();
    func_0x000108798ffc();
    func_0x0001087990b0();
    func_0x0001087990c0();
    func_0x000108799034();
    func_0x000108798f84();
    func_0x000108799064();
    if (lVar14 == 0) {
      func_0x000108799010();
      if (extraout_x8_00 != 0) {
        do {
          func_0x000108798fc4();
        } while (extraout_w10_02 != 0);
      }
      func_0x0001087990d0();
      func_0x0001087990a8();
      func_0x00010879906c();
    }
    func_0x000108798884(&plStack_8a0);
  }
  func_0x000108798fac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1087985b0:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1087985b8);
  (*pcVar2)();
}



/* Entry: 108798164; end: 10879861f;  */

void FUN_108798164(ulong param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  ulong uVar3;
  long extraout_x8;
  ulong uVar4;
  ulong uVar5;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong unaff_x23;
  long lVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  long *plStack_450;
  long *plStack_448;
  undefined8 uStack_440;
  code *pcStack_90;
  undefined **ppuStack_88;
  
  uVar5 = param_1;
  func_0x000108798fe8();
  FUN_108798620();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_2;
    FUN_108848654();
    uVar15 = *(ulong *)(param_1 + 0x60);
    if (uVar15 != 0) {
      plVar11 = (long *)(uVar15 - 1);
      uVar14 = (uint)uVar15;
      if ((uVar15 & (ulong)plVar11) == 0) {
        unaff_x23 = uVar14 - 1 & uVar5;
      }
      else {
        unaff_x23 = uVar5;
        if (uVar15 <= uVar5) {
          uVar1 = 0;
          if (uVar14 != 0) {
            uVar1 = (uint)uVar5 / uVar14;
          }
          unaff_x23 = (ulong)((uint)uVar5 - uVar1 * uVar14);
        }
      }
      plVar13 = *(long **)(*(long *)(param_1 + 0x58) + unaff_x23 * 8);
      if (plVar13 != (long *)0x0) {
        do {
          while( true ) {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_108798234;
            uVar3 = plVar13[1];
            in_ZR = uVar3 == uVar5;
            if (!(bool)in_ZR) break;
            uVar3 = (ulong)(plVar13 + 2);
            func_0x000107c28078(uVar3,param_2);
            if ((uVar3 & 1) != 0) goto LAB_1087984f8;
          }
          if ((uVar15 & (ulong)plVar11) == 0) {
            uVar3 = uVar3 & (ulong)plVar11;
          }
          else if (uVar15 <= uVar3) {
            uVar10 = 0;
            if (uVar15 != 0) {
              uVar10 = uVar3 / uVar15;
            }
            uVar3 = uVar3 - uVar10 * uVar15;
          }
        } while (uVar3 == unaff_x23);
      }
    }
LAB_108798234:
    plVar13 = (long *)(param_1 + 0x68);
    plVar11 = (long *)0x3d8;
    __Znwm();
    uStack_440 = 0;
    *plVar11 = 0;
    plVar11[1] = uVar5;
    plStack_450 = plVar11;
    plStack_448 = plVar13;
    func_0x000107c27994(plVar11 + 2,param_2);
    FUN_108798d48(plVar11 + 5,param_2);
    uStack_440 = CONCAT71(uStack_440._1_7_,1);
    fVar16 = (float)(*(long *)(param_1 + 0x70) + 1);
    if ((uVar15 == 0) ||
       (fVar17 = *(float *)(param_1 + 0x78) * (float)uVar15, in_ZR = fVar17 == fVar16,
       fVar17 < fVar16)) {
      uVar3 = 1;
      if (2 < uVar15) {
        uVar3 = (ulong)((uVar15 & uVar15 - 1) != 0);
      }
      uVar3 = uVar3 | uVar15 << 1;
      uVar15 = (ulong)(fVar16 / *(float *)(param_1 + 0x78));
      if (uVar3 <= uVar15) {
        uVar3 = uVar15;
      }
      if (uVar3 - 1 == 0) {
        uVar3 = 2;
      }
      else if ((uVar3 & uVar3 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      uVar15 = *(ulong *)(param_1 + 0x60);
      if (uVar15 < uVar3) {
LAB_1087982f0:
        if (uVar3 >> 0x3d != 0) goto LAB_1087985b0;
        lVar12 = uVar3 << 3;
        __Znwm(lVar12);
        FUN_108798abc(param_1 + 0x58,lVar12);
        *(ulong *)(param_1 + 0x60) = uVar3;
        lVar12 = *(long *)(param_1 + 0x58);
        for (uVar15 = 0; uVar3 != uVar15; uVar15 = uVar15 + 1) {
          *(undefined8 *)(lVar12 + uVar15 * 8) = 0;
        }
        plVar6 = (long *)*plVar13;
        uVar15 = uVar3;
        if (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          uVar4 = uVar3 - 1;
          uVar10 = 0;
          if (uVar3 != 0) {
            uVar10 = uVar8 / uVar3;
          }
          uVar9 = uVar8;
          if (uVar3 <= uVar8) {
            uVar9 = uVar8 - uVar10 * uVar3;
          }
          if ((uVar3 & uVar4) == 0) {
            uVar9 = uVar8 & uVar4;
          }
          *(long **)(lVar12 + uVar9 * 8) = plVar13;
          while (plVar7 = plVar6, plVar6 = (long *)*plVar7, plVar6 != (long *)0x0) {
            uVar10 = plVar6[1];
            if ((uVar3 & uVar4) == 0) {
              uVar10 = uVar10 & uVar4;
            }
            else if (uVar3 <= uVar10) {
              uVar8 = 0;
              if (uVar3 != 0) {
                uVar8 = uVar10 / uVar3;
              }
              uVar10 = uVar10 - uVar8 * uVar3;
            }
            if (uVar10 != uVar9) {
              if (*(long *)(lVar12 + uVar10 * 8) == 0) {
                *(long **)(lVar12 + uVar10 * 8) = plVar7;
                uVar9 = uVar10;
              }
              else {
                *plVar7 = *plVar6;
                *plVar6 = **(undefined8 **)(lVar12 + uVar10 * 8);
                **(long **)(lVar12 + uVar10 * 8) = (long)plVar6;
                plVar6 = plVar7;
              }
            }
          }
        }
      }
      else if (uVar3 < uVar15) {
        uVar10 = (ulong)((float)*(ulong *)(param_1 + 0x70) / *(float *)(param_1 + 0x78));
        if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
        if (uVar3 <= uVar10) {
          uVar3 = uVar10;
        }
        if (uVar3 < uVar15) {
          if (uVar3 != 0) goto LAB_1087982f0;
          FUN_108798abc(param_1 + 0x58,0);
          *(undefined8 *)(param_1 + 0x60) = 0;
          uVar15 = 0;
        }
        else {
          uVar15 = *(ulong *)(param_1 + 0x60);
        }
      }
      if ((uVar15 & uVar15 - 1) == 0) {
        in_ZR = true;
        unaff_x23 = (int)uVar15 - 1 & uVar5;
      }
      else {
        in_ZR = uVar5 == uVar15;
        unaff_x23 = uVar5;
        if (uVar15 <= uVar5) {
          uVar3 = 0;
          if (uVar15 != 0) {
            uVar3 = uVar5 / uVar15;
          }
          unaff_x23 = uVar5 - uVar3 * uVar15;
        }
      }
    }
    lVar12 = *(long *)(param_1 + 0x58);
    plVar6 = *(long **)(lVar12 + unaff_x23 * 8);
    if (plVar6 == (long *)0x0) {
      *plVar11 = *plVar13;
      *plVar13 = (long)plVar11;
      *(long **)(lVar12 + unaff_x23 * 8) = plVar13;
      if (*plVar11 != 0) {
        uVar5 = *(ulong *)(*plVar11 + 8);
        if ((uVar15 & uVar15 - 1) == 0) {
          uVar5 = uVar5 & uVar15 - 1;
          in_ZR = true;
        }
        else {
          in_ZR = uVar5 == uVar15;
          if (uVar15 <= uVar5) {
            uVar3 = 0;
            if (uVar15 != 0) {
              uVar3 = uVar5 / uVar15;
            }
            uVar5 = uVar5 - uVar3 * uVar15;
          }
        }
        *(long **)(lVar12 + uVar5 * 8) = plVar11;
      }
    }
    else {
      *plVar11 = *plVar6;
      *plVar6 = (long)plVar11;
    }
    plStack_450 = (long *)0x0;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
    FUN_108798ad4(&plStack_450);
LAB_1087984f8:
    plStack_448 = *(long **)(param_1 + 0x10);
    plStack_450 = *(long **)(param_1 + 8);
    if (*(long *)(param_1 + 0x10) != 0) {
      do {
        func_0x000108798fc4();
      } while (extraout_w10 != 0);
    }
    func_0x000108799100();
    func_0x000107c28150();
    func_0x000108799128();
    func_0x0001087990b8();
    lVar12 = plVar11[0xe];
    pcStack_90 = FUN_108798e84;
    ppuStack_88 = &PTR_FUN_110a6ff40;
    func_0x0001087990f0();
    func_0x000108798ffc();
    func_0x0001087990b0();
    func_0x0001087990c0();
    func_0x000108799034();
    func_0x000108798f84();
    func_0x000108799064();
    if (lVar12 == 0) {
      func_0x000108799010();
      if (extraout_x8 != 0) {
        do {
          func_0x000108798fc4();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001087990d0();
      func_0x0001087990a8();
      func_0x00010879906c();
    }
    func_0x000108798884(&plStack_450);
  }
  func_0x000108798fac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1087985b0:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1087985b8);
  (*pcVar2)();
}



/* Entry: 108798620; end: 1087986ff;  */

undefined8 FUN_108798620(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = *(ulong *)(param_1 + 0x60);
  if ((uVar8 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    uVar3 = param_2;
    FUN_108848654();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x58) + uVar10 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          uVar5 = plVar6[1];
          if (uVar3 != uVar5) break;
          lVar4 = (long)(plVar6 + 2);
          func_0x000107c28078(lVar4,param_2);
          if ((int)lVar4 != 0) {
            return 1;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar5 = uVar5 & uVar9;
        }
        else if (uVar8 <= uVar5) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar5 / uVar8;
          }
          uVar5 = uVar5 - uVar2 * uVar8;
        }
      } while (uVar5 == uVar10);
    }
  }
  return 0;
}



/* Entry: 108798700; end: 108798733;  */

ulong FUN_108798700(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 < 7) {
    return *(ulong *)(&UNK_10df56048 + (ulong)uVar1 * 8) |
           *(ulong *)(&UNK_10df56010 + (ulong)uVar1 * 8);
  }
  return 0x100000000;
}



/* Entry: 108798734; end: 108798867;  */

undefined8 * FUN_108798734(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long unaff_x22;
  long lVar2;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_450 [944];
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  
  puVar1 = &uStack_460;
  func_0x000108798fe8();
  uStack_458 = *(undefined8 *)(param_1 + 0x10);
  uStack_460 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000108798fc4();
    } while (extraout_w10 != 0);
  }
  FUN_108798d48(auStack_450);
  uStack_a0 = SUB84(param_3,0);
  func_0x000107c28150();
  func_0x000108799128();
  func_0x0001087990b8();
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uStack_90 = 0x108798f44;
  ppuStack_88 = &PTR_FUN_110a6ff70;
  __Znwm(0x3c8);
  func_0x000108798ffc();
  func_0x0001087990b0();
  *(undefined4 *)(unaff_x20 + 0x3c0) = uStack_a0;
  func_0x000108799034();
  func_0x000108798f84();
  func_0x000108799064();
  if (lVar2 == 0) {
    func_0x000108799010();
    if (extraout_x8 != 0) {
      do {
        func_0x000108798fc4();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001087990d0();
    func_0x0001087990a8();
    func_0x00010879906c();
  }
  func_0x0001087988bc(&uStack_460);
  func_0x000108798fac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108799058();
    func_0x0001087988bc(&uStack_460);
    func_0x00010879907c();
    func_0x000108799040();
    if (*(long *)(param_3 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return (undefined8 *)param_3;
  }
  return puVar1;
}



/* Entry: 108798868; end: 1087988db;  */

void FUN_108798868(void)

{
  long unaff_x19;
  
  func_0x000108799040();
  if (*(long *)(unaff_x19 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1087988dc; end: 1087988ef;  */

void FUN_1087988dc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  puVar4 = (undefined8 *)*plVar2;
  puVar1 = (undefined8 *)plVar2[1];
  lVar5 = param_2[1] + (((long)puVar1 - (long)puVar4) / -0x3b0) * 0x3b0;
  lVar3 = lVar5 + 0x20;
  for (puVar6 = puVar4; puVar6 != puVar1; puVar6 = puVar6 + 0x76) {
    *(undefined8 *)(lVar3 + -0x20) = 0;
    *(undefined8 *)(lVar3 + -0x18) = 0;
    *(undefined8 *)(lVar3 + -0x10) = 0;
    uVar7 = *puVar6;
    *(undefined8 *)(lVar3 + -0x18) = puVar6[1];
    *(undefined8 *)(lVar3 + -0x20) = uVar7;
    *(undefined8 *)(lVar3 + -0x10) = puVar6[2];
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(puVar6 + 3);
    FUN_10863f728(lVar3,puVar6 + 4);
    lVar3 = lVar3 + 0x3b0;
  }
  for (; puVar4 != puVar1; puVar4 = puVar4 + 0x76) {
    FUN_108798a4c(puVar4);
  }
  param_2[1] = lVar5;
  lVar3 = *plVar2;
  *plVar2 = lVar5;
  plVar2[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = plVar2[1];
  plVar2[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = plVar2[2];
  plVar2[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1087988f0; end: 1087989d7;  */

void FUN_1087988f0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar4 = param_2[1] + (((long)puVar1 - (long)puVar3) / -0x3b0) * 0x3b0;
  lVar2 = lVar4 + 0x20;
  for (puVar5 = puVar3; puVar5 != puVar1; puVar5 = puVar5 + 0x76) {
    *(undefined8 *)(lVar2 + -0x20) = 0;
    *(undefined8 *)(lVar2 + -0x18) = 0;
    *(undefined8 *)(lVar2 + -0x10) = 0;
    uVar6 = *puVar5;
    *(undefined8 *)(lVar2 + -0x18) = puVar5[1];
    *(undefined8 *)(lVar2 + -0x20) = uVar6;
    *(undefined8 *)(lVar2 + -0x10) = puVar5[2];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar5 + 3);
    FUN_10863f728(lVar2,puVar5 + 4);
    lVar2 = lVar2 + 0x3b0;
  }
  for (; puVar3 != puVar1; puVar3 = puVar3 + 0x76) {
    FUN_108798a4c(puVar3);
  }
  param_2[1] = lVar4;
  lVar2 = *param_1;
  *param_1 = lVar4;
  param_1[1] = lVar2;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1087989d8; end: 108798a4b;  */

long * FUN_1087989d8(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  ulong uStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x456c797dd49c34 < param_2) {
      plVar2 = param_1;
      func_0x000104bd35f4();
      pcStack_38 = FUN_108798a4c;
      uStack_50 = param_2;
      plStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      func_0x00010863f788(plVar2 + 4);
      plStack_58 = plVar2;
      func_0x000100100fd4(&plStack_58);
      return plVar2;
    }
    lVar1 = param_2 * 0x3b0;
    __Znwm();
  }
  lVar3 = lVar1 + param_3 * 0x3b0;
  *param_1 = lVar1;
  param_1[1] = lVar3;
  param_1[2] = lVar3;
  param_1[3] = lVar1 + param_2 * 0x3b0;
  return param_1;
}



/* Entry: 108798a4c; end: 108798abb;  */

long FUN_108798a4c(long param_1)

{
  long lStack_28;
  
  func_0x00010863f788(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108798abc; end: 108798ad3;  */

void FUN_108798abc(long *param_1,long param_2)

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



/* Entry: 108798ad4; end: 108798b3f;  */

long * FUN_108798ad4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000108798b18(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 108798b40; end: 108798d47;  */

void FUN_108798b40(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  
  uVar12 = param_1[1];
  if ((uVar12 != 0) && (param_1[3] != 0)) {
    uVar6 = param_2;
    FUN_108848654();
    uVar13 = uVar12 - 1;
    if ((uVar12 & uVar13) == 0) {
      uVar9 = uVar6 & uVar13;
    }
    else {
      uVar9 = uVar6;
      if (uVar12 <= uVar6) {
        uVar1 = 0;
        uVar11 = (uint)uVar12;
        if (uVar11 != 0) {
          uVar1 = (uint)uVar6 / uVar11;
        }
        uVar9 = (ulong)((uint)uVar6 - uVar1 * uVar11);
      }
    }
    plVar10 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            return;
          }
          uVar4 = plVar10[1];
          if (uVar4 != uVar6) break;
          plVar3 = plVar10 + 2;
          func_0x000107c28078(plVar3,param_2);
          if ((int)plVar3 != 0) {
            uVar6 = param_1[1];
            lVar5 = *plVar10;
            uVar12 = plVar10[1];
            uVar13 = uVar6 - 1;
            if ((uVar6 & uVar13) == 0) {
              uVar12 = uVar13 & uVar12;
            }
            else if (uVar6 <= uVar12) {
              uVar9 = 0;
              if (uVar6 != 0) {
                uVar9 = uVar12 / uVar6;
              }
              uVar12 = uVar12 - uVar9 * uVar6;
            }
            lVar8 = *param_1;
            plVar3 = *(long **)(lVar8 + uVar12 * 8);
            do {
              plVar7 = plVar3;
              plVar3 = (long *)*plVar7;
            } while ((long *)*plVar7 != plVar10);
            plStack_60 = param_1 + 2;
            if (plVar7 == plStack_60) {
LAB_108798c88:
              if (lVar5 == 0) {
LAB_108798cbc:
                *(undefined8 *)(lVar8 + uVar12 * 8) = 0;
                lVar5 = *plVar10;
                goto LAB_108798cc4;
              }
              uVar9 = *(ulong *)(lVar5 + 8);
              if ((uVar6 & uVar13) == 0) {
                uVar4 = uVar9 & uVar13;
              }
              else {
                uVar4 = uVar9;
                if (uVar6 <= uVar9) {
                  uVar4 = 0;
                  if (uVar6 != 0) {
                    uVar4 = uVar9 / uVar6;
                  }
                  uVar4 = uVar9 - uVar4 * uVar6;
                }
              }
              if (uVar4 != uVar12) goto LAB_108798cbc;
            }
            else {
              uVar9 = plVar7[1];
              if ((uVar6 & uVar13) == 0) {
                uVar9 = uVar9 & uVar13;
              }
              else if (uVar6 <= uVar9) {
                uVar4 = 0;
                if (uVar6 != 0) {
                  uVar4 = uVar9 / uVar6;
                }
                uVar9 = uVar9 - uVar4 * uVar6;
              }
              if (uVar9 != uVar12) goto LAB_108798c88;
LAB_108798cc4:
              if (lVar5 == 0) goto LAB_108798cfc;
              uVar9 = *(ulong *)(lVar5 + 8);
            }
            if ((uVar6 & uVar13) == 0) {
              uVar9 = uVar9 & uVar13;
            }
            else if (uVar6 <= uVar9) {
              uVar13 = 0;
              if (uVar6 != 0) {
                uVar13 = uVar9 / uVar6;
              }
              uVar9 = uVar9 - uVar13 * uVar6;
            }
            if (uVar9 != uVar12) {
              *(long **)(lVar8 + uVar9 * 8) = plVar7;
              lVar5 = *plVar10;
            }
LAB_108798cfc:
            *plVar7 = lVar5;
            *plVar10 = 0;
            param_1[3] = param_1[3] + -1;
            uStack_58 = 1;
            uStack_57 = 0;
            uStack_53 = 0;
            plStack_68 = plVar10;
            FUN_108798ad4(&plStack_68);
            return;
          }
        }
        if ((uVar12 & uVar13) == 0) {
          uVar4 = uVar4 & uVar13;
        }
        else if (uVar12 <= uVar4) {
          uVar2 = 0;
          if (uVar12 != 0) {
            uVar2 = uVar4 / uVar12;
          }
          uVar4 = uVar4 - uVar2 * uVar12;
        }
      } while (uVar4 == uVar9);
    }
  }
  return;
}



/* Entry: 108798d48; end: 108798dbf;  */

long FUN_108798d48(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c27994();
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined4 *)(lVar2 + 0x18) = uVar1;
  *(undefined1 *)(lVar2 + 0x3a8) = 0;
  if (*(char *)(param_2 + 0x3a8) == '\x01') {
    FUN_108685044((undefined1 *)(lVar2 + 0x20),param_2 + 0x20);
    *(undefined1 *)(param_1 + 0x3a8) = 1;
  }
  return param_1;
}



/* Entry: 108798dc0; end: 108798de7;  */

long FUN_108798dc0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 108798de8; end: 108798e1f;  */

void FUN_108798de8(void)

{
  undefined8 uStack_30;
  
  func_0x000108799024();
  if (uStack_30 != 0) {
    func_0x0001087990d0();
    func_0x0001087990dc();
  }
  func_0x000108799074();
  return;
}



/* Entry: 108798e20; end: 108798e5f;  */

void FUN_108798e20(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 108798e60; end: 108798e7f;  */

void FUN_108798e60(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108798868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108798e80; end: 108798e83;  */

void FUN_108798e80(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108798e84; end: 108798ebf;  */

void FUN_108798e84(void)

{
  undefined8 uStack_30;
  
  func_0x000108799024();
  if (uStack_30 != (long *)0x0) {
    func_0x0001087990dc(*(undefined8 *)(*uStack_30 + 0x20));
  }
  func_0x000108799074();
  return;
}



/* Entry: 108798ec0; end: 108798edf;  */

void FUN_108798ec0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108798884();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108798ee0; end: 108798ee3;  */

void FUN_108798ee0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108798ee4; end: 108798f1f;  */

void FUN_108798ee4(void)

{
  undefined8 uStack_30;
  
  func_0x000108799024();
  if (uStack_30 != (long *)0x0) {
    func_0x0001087990dc(*(undefined8 *)(*uStack_30 + 0x18));
  }
  func_0x000108799074();
  return;
}



/* Entry: 108798f20; end: 108798f3f;  */

void FUN_108798f20(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001087988a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108798f40; end: 108798f5f;  */

void FUN_108798f40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108798f60; end: 108798f7f;  */

void FUN_108798f60(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001087988bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108798f80; end: 108799133;  */

void FUN_108798f80(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108799134; end: 108799537;  */

void FUN_108799134(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 *puStack_868;
  undefined8 *puStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined1 auStack_838 [32];
  undefined4 uStack_818;
  undefined1 auStack_810 [32];
  undefined4 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined1 auStack_7d0 [24];
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined1 uStack_788;
  undefined8 uStack_780;
  undefined1 uStack_778;
  undefined1 auStack_770 [32];
  undefined1 auStack_750 [32];
  undefined1 auStack_730 [32];
  undefined1 uStack_710;
  undefined1 auStack_708 [32];
  undefined1 auStack_6e8 [200];
  undefined1 uStack_620;
  undefined1 auStack_618 [32];
  undefined1 auStack_5f8 [32];
  undefined8 uStack_5d8;
  undefined1 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 uStack_5c0;
  undefined1 auStack_5b8 [24];
  undefined1 auStack_5a0 [680];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [32];
  undefined4 uStack_2b8;
  undefined1 auStack_2b0 [32];
  undefined4 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  int iStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 uStack_1c0;
  undefined1 auStack_1b8 [32];
  undefined1 auStack_198 [200];
  undefined1 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  byte bStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_1088691f8(auStack_5a0,*(undefined8 *)(param_1 + 8));
  FUN_1086c2d80(&uStack_2f8,auStack_5a0);
  FUN_1086d4da0(auStack_5a0);
  if (((bStack_68 & 1) == 0) || (iStack_270 != 3)) {
    func_0x000108799cf4();
    FUN_108799538();
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
    func_0x000107c278b8(auStack_5b8,&UNK_10f4bab6c);
    func_0x000107c31420(auStack_5a0,uVar2,auStack_5b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5b8);
    plVar3 = *(long **)(param_1 + 0x28);
    uStack_858 = uStack_2f8;
    uStack_848 = uStack_2e8;
    uStack_850 = uStack_2f0;
    uStack_840 = uStack_2e0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x000107c28978(auStack_838,auStack_2d8);
    uStack_818 = uStack_2b8;
    func_0x000107c27b7c(auStack_810,auStack_2b0);
    uStack_7f0 = uStack_290;
    uStack_7e0 = uStack_280;
    uStack_7e8 = uStack_288;
    uStack_7d8 = uStack_278;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    func_0x000107c278b8(auStack_7d0,&DAT_10f4bdff0);
    uStack_7b0 = uStack_260;
    uStack_7b8 = uStack_268;
    uStack_7a8 = uStack_258;
    uStack_798 = uStack_248;
    uStack_7a0 = uStack_250;
    uStack_790 = uStack_240;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_788 = uStack_238;
    uStack_780 = uStack_230;
    uStack_778 = uStack_228;
    func_0x000104be0ccc(auStack_770,auStack_220);
    func_0x000107c27b7c(auStack_750,auStack_200);
    func_0x000107c27b7c(auStack_730,auStack_1e0);
    uStack_710 = uStack_1c0;
    func_0x000107c279d4(auStack_708,auStack_1b8);
    FUN_108656428(auStack_6e8,auStack_198);
    uStack_620 = uStack_d0;
    func_0x000107c279d4(auStack_618,auStack_c8);
    func_0x000104be0ccc(auStack_5f8,auStack_a8);
    uStack_5d8 = uStack_88;
    uStack_5d0 = uStack_80;
    uStack_5c8 = uStack_78;
    uStack_5c0 = uStack_70;
    lVar4 = param_3[1];
    uVar5 = param_3[1];
    uVar2 = *param_3;
    puVar1 = (undefined8 *)0x30;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110a6fff0;
    if (lVar4 != 0) {
      do {
        func_0x000108799ca4();
      } while (extraout_w10 != 0);
    }
    puVar1[3] = &PTR_DAT_110a70040;
    puVar1[5] = uVar5;
    puVar1[4] = uVar2;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x000104be3970(&uStack_60);
    uStack_878 = 0;
    uStack_870 = 0;
    puStack_868 = puVar1 + 3;
    puStack_860 = puVar1;
    (**(code **)(*plVar3 + 0x10))(plVar3,&uStack_858,&puStack_868,auStack_5a0);
    func_0x000104be36f0(&puStack_868);
    FUN_108799be8(&uStack_878);
    func_0x000108788648(&uStack_858);
    func_0x000107c31428(auStack_5a0);
    func_0x000107c31424(auStack_5a0);
  }
  FUN_1086cf6a4(&uStack_2f8);
  return;
}



/* Entry: 108799538; end: 10879967f;  */

void FUN_108799538(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_760;
  long lStack_758;
  undefined8 uStack_750;
  undefined1 auStack_748 [24];
  long lStack_730;
  long lStack_728;
  undefined1 auStack_6d0 [24];
  undefined1 auStack_6b8 [64];
  undefined8 auStack_678 [14];
  undefined1 auStack_608 [24];
  int iStack_5f0;
  byte bStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long alStack_3b8 [4];
  undefined **ppuStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_370;
  char cStack_1f8;
  undefined8 uStack_f8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_90 = (undefined4)param_4;
  puVar4 = &uStack_a0;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  uStack_a0 = param_2;
  puStack_98 = param_3;
  if (param_3 != (undefined8 *)0x0) {
    do {
      func_0x000108799ca4();
      uStack_90 = (undefined4)param_4;
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  lVar5 = param_1[2];
  __ZNSt3__15mutex4lockEv(lVar5 + 8);
  puVar7 = *(undefined8 **)(lVar5 + 0x70);
  uStack_80 = 0x108799c54;
  ppuStack_78 = &PTR_DAT_110a70098;
  puStack_68 = puStack_98;
  uStack_70 = uStack_a0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_60 = uStack_90;
  puStack_50 = puVar2;
  func_0x000107c28154(lVar5 + 0x48,&uStack_80);
  func_0x000108799cc8();
  __ZNSt3__15mutex6unlockEv(lVar5 + 8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar3 = (long *)*param_1;
    ppuStack_78 = (undefined **)param_1[3];
    uStack_80 = param_1[2];
    if (param_1[3] != 0) {
      do {
        func_0x000108799ca4();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar3 + 0x10))();
    func_0x000107c27e74(&uStack_80);
  }
  func_0x000104be3970();
  func_0x000108799d00(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&uStack_80);
    func_0x000104be3970(&uStack_a0);
    __Unwind_Resume();
    uStack_f8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_1088691f8(alStack_3b8 + 3,*(undefined8 *)((long)puVar4 + 8));
    FUN_1086c2d80(auStack_678,alStack_3b8 + 3);
    FUN_1086d4da0(alStack_3b8 + 3);
    if (((bStack_3e8 & 1) == 0) || (in_ZR = 1, iStack_5f0 == 1)) {
      func_0x000108799cf4();
      FUN_108799538();
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)((long)puVar4 + 8) + 0x18);
      func_0x000107c278b8(auStack_6d0,&UNK_10f4bab7e);
      func_0x000107c31420(auStack_6b8,uVar6,auStack_6d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_6d0);
      uVar6 = auStack_678[0];
      FUN_10879d0a0(&lStack_730,*(undefined8 *)((long)puVar4 + 8),auStack_678[0]);
      FUN_108869aa4(alStack_3b8 + 3,*(undefined8 *)((long)puVar4 + 8),uVar6);
      in_ZR = cStack_1f8 == '\x01';
      if ((bool)in_ZR) {
        FUN_108869c18(*(undefined8 *)((long)puVar4 + 8),uVar6,alStack_3b8 + 3);
        (**(code **)(**(long **)((long)puVar4 + 0x38) + 0x148))
                  (*(long **)((long)puVar4 + 0x38),alStack_3b8 + 3,uVar6);
        plVar3 = *(long **)((long)puVar4 + 0x48);
        alStack_3b8[1] = 0;
        alStack_3b8[0] = 0;
        alStack_3b8[2] = 0;
        func_0x000107c27994(&uStack_760,alStack_3b8 + 3);
        uStack_3d0 = uStack_750;
        lStack_3d8 = lStack_758;
        uStack_3e0 = uStack_760;
        lStack_758 = 0;
        uStack_750 = 0;
        uStack_760 = 0;
        lStack_3c8 = lStack_388;
        FUN_1086ce96c(auStack_748,&uStack_3e0,1);
        (**(code **)(*plVar3 + 8))(plVar3,alStack_3b8 + 3,alStack_3b8,auStack_748);
        func_0x000104be1274(auStack_748);
        func_0x000107c27914(&uStack_3e0);
        func_0x000107c27914(&uStack_760);
        func_0x00010867b9fc(alStack_3b8);
        uVar6 = *(undefined8 *)((long)puVar4 + 8);
        alStack_3b8[0] = lStack_388;
        FUN_1086afdec(&uStack_3e0,alStack_3b8,1);
        FUN_10886488c(uVar6,alStack_3b8 + 3,&uStack_3e0);
        func_0x00010867bb84(&uStack_3e0);
      }
      else {
        uVar1 = (lStack_728 - lStack_730) / 0x18;
        in_ZR = uVar1 == 2;
        if (1 < uVar1) {
          (**(code **)(**(long **)((long)puVar4 + 0x38) + 0xf8))
                    (*(long **)((long)puVar4 + 0x38),&lStack_730);
        }
      }
      func_0x000107c288dc(alStack_3b8 + 3);
      FUN_108869b70(*(undefined8 *)((long)puVar4 + 8),auStack_678[0]);
      lVar5 = *(long *)((long)puVar4 + 8);
      FUN_1088606d0(lVar5,auStack_608);
      puVar7 = *(undefined8 **)((long)puVar4 + 0x18);
      lStack_3d8 = param_3[1];
      uStack_3e0 = *param_3;
      if (param_3[1] != 0) {
        do {
          func_0x000108799ca4();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c28150();
      lVar8 = puVar7[2];
      __ZNSt3__15mutex4lockEv(lVar8 + 8);
      lVar9 = *(long *)(lVar8 + 0x70);
      alStack_3b8[3] = 0x108799c10;
      ppuStack_398 = &PTR_DAT_110a70080;
      lStack_388 = lStack_3d8;
      uStack_390 = uStack_3e0;
      if (lStack_3d8 != 0) {
        do {
          func_0x000108799ca4();
        } while (extraout_w10_02 != 0);
      }
      lStack_370 = lVar5;
      func_0x000107c28154(lVar8 + 0x48,alStack_3b8 + 3);
      func_0x000108799cd8();
      __ZNSt3__15mutex6unlockEv(lVar8 + 8);
      if (lVar9 == 0) {
        plVar3 = (long *)*puVar7;
        ppuStack_398 = (undefined **)puVar7[3];
        alStack_3b8[3] = puVar7[2];
        if (puVar7[3] != 0) {
          do {
            func_0x000108799ca4();
          } while (extraout_w10_03 != 0);
        }
        (**(code **)(*plVar3 + 0x10))();
        func_0x000107c27e74(alStack_3b8 + 3);
      }
      func_0x000104be3970(&uStack_3e0);
      func_0x000107c31428(auStack_6b8);
      func_0x000104bee768(&lStack_730);
      func_0x000107c31424(auStack_6b8);
    }
    FUN_1086cf6a4(auStack_678);
    while (func_0x000108799d00(uStack_f8), !(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108799c98();
      func_0x000107c27e74(alStack_3b8 + 3);
      func_0x000104be3970(&uStack_3e0);
      func_0x000104bee768(&lStack_730);
      func_0x000107c31424(auStack_6b8);
      FUN_1086cf6a4(auStack_678);
      while (in_ZR = (int)puVar7 == 1, !(bool)in_ZR) {
        __Unwind_Resume(lVar5);
        func_0x000104bd46a0(lVar5);
        func_0x000108799c98();
        FUN_1086d4da0(alStack_3b8 + 3);
      }
      ___cxa_begin_catch(lVar5);
      func_0x000108848514();
      func_0x000108799cf4();
      FUN_108799538();
      ___cxa_end_catch();
    }
    return;
  }
  return;
}



/* Entry: 108799680; end: 108799ae3;  */

void FUN_108799680(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined1 in_ZR;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 unaff_x21;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x22;
  long lVar4;
  long lVar5;
  undefined8 uStack_6c0;
  long lStack_6b8;
  undefined8 uStack_6b0;
  undefined1 auStack_6a8 [24];
  long lStack_690;
  long lStack_688;
  undefined1 auStack_630 [24];
  undefined1 auStack_618 [64];
  undefined8 auStack_5d8 [14];
  undefined1 auStack_568 [24];
  int iStack_550;
  byte bStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long alStack_318 [4];
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2d0;
  char cStack_158;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1088691f8(alStack_318 + 3,*(undefined8 *)(param_1 + 8));
  FUN_1086c2d80(auStack_5d8,alStack_318 + 3);
  FUN_1086d4da0(alStack_318 + 3);
  if (((bStack_348 & 1) == 0) || (in_ZR = 1, iStack_550 == 1)) {
    func_0x000108799cf4();
    FUN_108799538();
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
    func_0x000107c278b8(auStack_630,&UNK_10f4bab7e);
    func_0x000107c31420(auStack_618,uVar2,auStack_630);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_630);
    uVar2 = auStack_5d8[0];
    FUN_10879d0a0(&lStack_690,*(undefined8 *)(param_1 + 8),auStack_5d8[0]);
    FUN_108869aa4(alStack_318 + 3,*(undefined8 *)(param_1 + 8),uVar2);
    in_ZR = cStack_158 == '\x01';
    if ((bool)in_ZR) {
      FUN_108869c18(*(undefined8 *)(param_1 + 8),uVar2,alStack_318 + 3);
      (**(code **)(**(long **)(param_1 + 0x38) + 0x148))
                (*(long **)(param_1 + 0x38),alStack_318 + 3,uVar2);
      plVar3 = *(long **)(param_1 + 0x48);
      alStack_318[1] = 0;
      alStack_318[0] = 0;
      alStack_318[2] = 0;
      func_0x000107c27994(&uStack_6c0,alStack_318 + 3);
      uStack_330 = uStack_6b0;
      lStack_338 = lStack_6b8;
      uStack_340 = uStack_6c0;
      lStack_6b8 = 0;
      uStack_6b0 = 0;
      uStack_6c0 = 0;
      lStack_328 = lStack_2e8;
      FUN_1086ce96c(auStack_6a8,&uStack_340,1);
      (**(code **)(*plVar3 + 8))(plVar3,alStack_318 + 3,alStack_318,auStack_6a8);
      func_0x000104be1274(auStack_6a8);
      func_0x000107c27914(&uStack_340);
      func_0x000107c27914(&uStack_6c0);
      func_0x00010867b9fc(alStack_318);
      uVar2 = *(undefined8 *)(param_1 + 8);
      alStack_318[0] = lStack_2e8;
      FUN_1086afdec(&uStack_340,alStack_318,1);
      FUN_10886488c(uVar2,alStack_318 + 3,&uStack_340);
      func_0x00010867bb84(&uStack_340);
    }
    else {
      uVar1 = (lStack_688 - lStack_690) / 0x18;
      in_ZR = uVar1 == 2;
      if (1 < uVar1) {
        (**(code **)(**(long **)(param_1 + 0x38) + 0xf8))(*(long **)(param_1 + 0x38),&lStack_690);
      }
    }
    func_0x000107c288dc(alStack_318 + 3);
    FUN_108869b70(*(undefined8 *)(param_1 + 8),auStack_5d8[0]);
    unaff_x21 = *(undefined8 *)(param_1 + 8);
    FUN_1088606d0(unaff_x21,auStack_568);
    unaff_x22 = *(undefined8 **)(param_1 + 0x18);
    lStack_338 = param_3[1];
    uStack_340 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000108799ca4();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    lVar4 = unaff_x22[2];
    __ZNSt3__15mutex4lockEv(lVar4 + 8);
    lVar5 = *(long *)(lVar4 + 0x70);
    alStack_318[3] = 0x108799c10;
    ppuStack_2f8 = &PTR_DAT_110a70080;
    lStack_2e8 = lStack_338;
    uStack_2f0 = uStack_340;
    if (lStack_338 != 0) {
      do {
        func_0x000108799ca4();
      } while (extraout_w10_00 != 0);
    }
    uStack_2d0 = unaff_x21;
    func_0x000107c28154(lVar4 + 0x48,alStack_318 + 3);
    func_0x000108799cd8();
    __ZNSt3__15mutex6unlockEv(lVar4 + 8);
    if (lVar5 == 0) {
      plVar3 = (long *)*unaff_x22;
      ppuStack_2f8 = (undefined **)unaff_x22[3];
      alStack_318[3] = unaff_x22[2];
      if (unaff_x22[3] != 0) {
        do {
          func_0x000108799ca4();
        } while (extraout_w10_01 != 0);
      }
      (**(code **)(*plVar3 + 0x10))();
      func_0x000107c27e74(alStack_318 + 3);
    }
    func_0x000104be3970(&uStack_340);
    func_0x000107c31428(auStack_618);
    func_0x000104bee768(&lStack_690);
    func_0x000107c31424(auStack_618);
  }
  FUN_1086cf6a4(auStack_5d8);
  while (func_0x000108799d00(uStack_58), !(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108799c98();
    func_0x000107c27e74(alStack_318 + 3);
    func_0x000104be3970(&uStack_340);
    func_0x000104bee768(&lStack_690);
    func_0x000107c31424(auStack_618);
    FUN_1086cf6a4(auStack_5d8);
    while (in_ZR = (int)unaff_x22 == 1, !(bool)in_ZR) {
      __Unwind_Resume(unaff_x21);
      func_0x000104bd46a0(unaff_x21);
      func_0x000108799c98();
      FUN_1086d4da0(alStack_318 + 3);
    }
    ___cxa_begin_catch(unaff_x21);
    func_0x000108848514();
    func_0x000108799cf4();
    FUN_108799538();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 108799ae4; end: 108799ae7;  */

undefined8 * FUN_108799ae4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ff98;
  func_0x000107c28ab8(param_1 + 9);
  func_0x000107c28ab4(param_1 + 7);
  func_0x000107c29904(param_1 + 5);
  func_0x000107c2814c(param_1 + 3);
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 108799ae8; end: 108799afb;  */

void FUN_108799ae8(void)

{
  FUN_108799afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108799afc; end: 108799b4f;  */

undefined8 * FUN_108799afc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ff98;
  func_0x000107c28ab8(param_1 + 9);
  func_0x000107c28ab4(param_1 + 7);
  func_0x000107c29904(param_1 + 5);
  func_0x000107c2814c(param_1 + 3);
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 108799b50; end: 108799b53;  */

void FUN_108799b50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6fff0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108799b54; end: 108799b67;  */

void FUN_108799b54(void)

{
  FUN_108799bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108799b68; end: 108799b7b;  */

void FUN_108799b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108799b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108799b7c; end: 108799b8f;  */

void FUN_108799b7c(void)

{
  FUN_108799bac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108799b90; end: 108799bab;  */

void FUN_108799b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108799b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 108799bac; end: 108799bd7;  */

undefined8 * FUN_108799bac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a70040;
  func_0x000104be3970(param_1 + 1);
  return param_1;
}



/* Entry: 108799bd8; end: 108799be7;  */

void FUN_108799bd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6fff0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108799be8; end: 108799c0f;  */

long FUN_108799be8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108799c10; end: 108799db3;  */

void FUN_108799c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108799cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 108799db4; end: 108799ed7;  */

void FUN_108799db4(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined1 uStack_38;
  
  plVar2 = (long *)*param_1;
  (**(code **)(*plVar2 + 0x50))(plVar2,0xa0044);
  func_0x000107c31338();
  bVar1 = *(byte *)(param_3 + 1);
  (**(code **)(*param_3 + 0x10))(param_3);
  func_0x000107c278b8(&uStack_98,param_3);
  func_0x00010bd3f128(&uStack_b0,3);
  plVar3 = (long *)*param_2;
  (**(code **)(*plVar3 + 0x10))();
  uStack_48 = uStack_a0;
  auStack_80[0] = 2;
  uStack_68 = uStack_90;
  uStack_70 = uStack_98;
  uStack_60 = uStack_88;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_50 = uStack_a8;
  uStack_58 = uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_38 = 0;
  uStack_78 = (ulong)bVar1;
  plStack_40 = plVar3;
  func_0x00010bcc46f8(plVar2,auStack_80);
  func_0x00010786e114(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
  return;
}



/* Entry: 108799ed8; end: 10879a2a7;  */

void FUN_108799ed8(undefined8 *param_1,long *param_2,long param_3)

{
  char *pcVar1;
  ulong *puVar2;
  byte bVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  undefined ***pppuVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_170;
  long lStack_168;
  byte bStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  uint auStack_108 [6];
  int iStack_f0;
  ulong uStack_c8;
  int iStack_c0;
  byte bStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined4 uStack_80;
  
  lVar12 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0x3f800000;
  lVar13 = 0x114;
  *(undefined1 *)(param_1 + 0xb) = 0;
  while( true ) {
    piVar10 = (int *)*param_2;
    piVar11 = (int *)param_2[1];
    if (lVar12 == ((long)piVar11 - (long)piVar10) / 0x118) break;
    pcVar1 = (char *)((long)piVar10 + lVar13);
    if ((*(int *)(pcVar1 + -0x114) == 7) && (*pcVar1 == '\x01' && *(int *)(pcVar1 + -4) == 1)) {
      auStack_108[0] = (uint)lVar12;
      FUN_10879b884(&uStack_a0,auStack_108,auStack_108);
    }
    lVar12 = lVar12 + 1;
    lVar13 = lVar13 + 0x118;
  }
  piVar9 = piVar10;
  if (param_1 != &uStack_a0) {
    *(undefined4 *)(param_1 + 4) = uStack_80;
    FUN_10879ba80(param_1,uStack_90,0);
    piVar10 = (int *)*param_2;
    piVar11 = (int *)param_2[1];
    piVar9 = piVar10;
  }
  do {
    piVar8 = piVar9;
    piVar4 = piVar10;
    if (piVar8 == piVar11) break;
    piVar9 = piVar8 + 0x46;
  } while (*piVar8 != 0);
  do {
    piVar9 = piVar4;
    if (piVar9 == piVar11) break;
    piVar4 = piVar9 + 0x46;
  } while (*piVar9 != 7);
  for (; (piVar10 != piVar11 && (*piVar10 == 7 || *piVar10 == 0)); piVar10 = piVar10 + 0x46) {
  }
  puVar15 = *(undefined8 **)(param_3 + 0x218);
  for (puVar14 = *(undefined8 **)(param_3 + 0x210); puVar14 != puVar15; puVar14 = puVar14 + 3) {
    ppuStack_198 = &PTR_DAT_110a93b98;
    uStack_190 = 0;
    uStack_180 = 0;
    pppuVar7 = &ppuStack_198;
    func_0x000107c3034c(pppuVar7,*puVar14,*(int *)(puVar14 + 1) - (int)*puVar14);
    uVar6 = 0;
    if (uStack_180._4_4_ == 0xf) {
      uVar6 = (uint)pppuVar7;
    }
    if ((uVar6 & 1) != 0) {
      FUN_108914e64(auStack_108,0,uStack_188);
      bStack_a8 = 1;
      func_0x00010879c0c0();
      goto LAB_10879a0a0;
    }
    func_0x00010879c0c0();
  }
  auStack_108[0] = auStack_108[0] & 0xffffff00;
  bStack_a8 = 0;
LAB_10879a0a0:
  if ((((piVar8 == piVar11 || piVar9 == piVar11) || piVar10 != piVar11) || ((bStack_a8 & 1) == 0))
     || (iStack_c0 == 0)) {
    if ((lStack_88 != 0 & bStack_a8) == 1) {
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_110 = 0x3f800000;
      func_0x00010879bfcc();
      func_0x00010879c0f4();
      if (((bStack_140 & 1) == 0 && uStack_180 == 0) || (lStack_170 != lStack_168)) {
        func_0x0001074b2c74(param_1);
      }
      else {
        func_0x00010879c0e8();
      }
      FUN_10879b7ac(&ppuStack_198);
    }
  }
  else {
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0x3f800000;
    puVar2 = &uStack_c8;
    if ((uStack_c8 & 1) != 0) {
      puVar2 = (ulong *)(uStack_c8 + 7);
    }
    for (lVar12 = (long)iStack_c0 << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
      func_0x000107c29ee0(&ppuStack_198,*puVar2);
      FUN_108770764(&uStack_130,&ppuStack_198);
      func_0x000107c27914(&ppuStack_198);
      puVar2 = puVar2 + 1;
    }
    func_0x00010879bfcc();
    func_0x00010879c0e8();
    FUN_10879b7ac(&ppuStack_198);
    bVar3 = *(byte *)(param_1 + 0xb);
    func_0x00010879c0f4();
    if ((bVar3 & 1) != 0) goto LAB_10879a204;
  }
  bVar5 = true;
  if (((*(byte *)(param_1 + 0xb) & 1) == 0) && (param_1[3] == 0)) {
    bVar5 = param_1[5] != param_1[6];
  }
  if ((bVar5) && ((bStack_a8 & 1) != 0)) {
    if (iStack_f0 == 0) {
      ppuStack_198 = (undefined **)((ulong)ppuStack_198 & 0xffffffffffffff00);
      uStack_138 = 0;
      FUN_10879aecc(param_3,&ppuStack_198);
      FUN_10879b864(&ppuStack_198);
    }
    else {
      FUN_10879aecc(param_3,auStack_108);
    }
  }
LAB_10879a204:
  FUN_10879b864(auStack_108);
  func_0x00010726f2e4(&uStack_a0);
  return;
}



/* Entry: 10879a2a8; end: 10879ae53;  */

void FUN_10879a2a8(undefined8 *param_1,long *param_2,long param_3,long param_4,long *param_5,
                  long param_6)

{
  undefined **ppuVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  long **pplVar13;
  ulong *puVar14;
  undefined **ppuVar15;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar16;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *extraout_x10;
  long *plVar17;
  ulong uVar18;
  ulong extraout_x11;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  long **pplStack_268;
  long lStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long **pplStack_208;
  long lStack_200;
  long *plStack_1f0;
  long **pplStack_1e8;
  long lStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined2 uStack_1cc;
  undefined2 uStack_1ca;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long **pplStack_1a0;
  long lStack_198;
  long *plStack_190;
  long **pplStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  char cStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  long *plStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  long lStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  float fStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  uVar25 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0x3f800000;
  uStack_a0 = 0;
  uStack_a8 = 0;
  lStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  lStack_88 = 0;
  uStack_78 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  uStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  fStack_e0 = 1.0;
  puVar14 = (ulong *)(param_3 + 0x10);
  puVar30 = puVar14;
  if ((*puVar14 & 1) != 0) {
    puVar30 = (ulong *)(*puVar14 + 7);
  }
  puVar12 = puVar30 + *(int *)(param_3 + 0x18);
  for (; puVar30 != puVar12; puVar30 = puVar30 + 1) {
    uVar28 = *puVar30;
    uVar2 = *(uint *)(uVar28 + 0x20);
    uVar29 = (ulong)uVar2;
    ppuVar15 = *(undefined ***)(uVar28 + 0x18);
    uVar6 = (long)ppuVar15 < 0;
    ppuVar1 = &PTR_PTR_11326cb58;
    if (ppuVar15 != (undefined **)0x0) {
      ppuVar1 = ppuVar15;
    }
    func_0x000107c29ee0(&plStack_1f0,ppuVar1);
    uStack_1d8 = (undefined4)uVar28;
    uStack_1d4 = (undefined4)(uVar28 >> 0x20);
    plVar9 = (long *)0x38;
    __Znwm();
    uVar11 = uStack_f8;
    lVar10 = lStack_1e0;
    lStack_180 = 1;
    *(uint *)(plVar9 + 2) = uVar2;
    plVar9[4] = (long)pplStack_1e8;
    plVar9[3] = (long)plStack_1f0;
    plStack_1f0 = (long *)0x0;
    pplStack_1e8 = (long **)0x0;
    lStack_1e0 = 0;
    plVar9[5] = lVar10;
    plVar9[6] = uVar28;
    *plVar9 = 0;
    plVar9[1] = uVar29;
    plStack_190 = plVar9;
    pplStack_188 = &plStack_f0;
    if ((uStack_f8 == 0) ||
       (func_0x00010879c12c((float)(uStack_e8 + 1),fStack_e0,(float)uStack_f8), (bool)uVar6)) {
      bVar5 = 2 < uVar11;
      bVar7 = uVar11 == 3;
      uVar28 = 1;
      if (bVar5) {
        uVar28 = (ulong)((uVar11 & uVar11 - 1) != 0);
      }
      func_0x00010879c004(uVar28 | uVar11 << 1);
      uVar28 = extraout_x8;
      if (!bVar5 || bVar7) {
        uVar28 = extraout_x9;
      }
      uVar18 = uVar11;
      if (uVar28 - 1 == 0) {
        uVar28 = 2;
      }
      else if ((uVar28 & uVar28 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar18 = uStack_f8;
      }
      uVar11 = uVar28;
      if (uVar18 < uVar28) {
LAB_10879a414:
        if (uVar11 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10879ad54);
          (*pcVar4)();
        }
        lVar10 = uVar11 << 3;
        __Znwm(lVar10);
        FUN_10879b558(&lStack_100,lVar10);
        for (uVar28 = 0; uVar11 != uVar28; uVar28 = uVar28 + 1) {
          *(undefined8 *)(lStack_100 + uVar28 * 8) = 0;
        }
        uStack_f8 = uVar11;
        if (plStack_f0 != (long *)0x0) {
          uVar18 = plStack_f0[1];
          uVar28 = uVar11 - 1;
          if ((uVar11 & uVar28) == 0) {
            uVar18 = uVar18 & uVar28;
          }
          else if (uVar11 <= uVar18) {
            uVar22 = 0;
            if (uVar11 != 0) {
              uVar22 = uVar18 / uVar11;
            }
            uVar18 = uVar18 - uVar22 * uVar11;
          }
          *(long ***)(lStack_100 + uVar18 * 8) = &plStack_f0;
          lVar10 = lStack_100;
          plVar20 = plStack_f0;
          while (plVar17 = plVar20, plVar20 = (long *)*plVar17, plVar20 != (long *)0x0) {
            uVar22 = plVar20[1];
            if ((uVar11 & uVar28) == 0) {
              uVar22 = uVar22 & uVar28;
            }
            else if (uVar11 <= uVar22) {
              uVar24 = 0;
              if (uVar11 != 0) {
                uVar24 = uVar22 / uVar11;
              }
              uVar22 = uVar22 - uVar24 * uVar11;
            }
            if (uVar22 != uVar18) {
              plVar23 = plVar20;
              if (*(long *)(lVar10 + uVar22 * 8) == 0) {
                *(long **)(lVar10 + uVar22 * 8) = plVar17;
                uVar18 = uVar22;
              }
              else {
                do {
                  plVar23 = (long *)*plVar23;
                  if (plVar23 == (long *)0x0) break;
                } while ((int)plVar20[2] == (int)plVar23[2]);
                *plVar17 = (long)plVar23;
                func_0x00010879c09c();
                lVar10 = extraout_x8_00;
                uVar28 = extraout_x9_00;
                plVar20 = extraout_x10;
                uVar18 = extraout_x11;
              }
            }
          }
        }
      }
      else {
        uVar11 = uVar18;
        if (uVar28 < uVar18) {
          uVar11 = (ulong)((float)uStack_e8 / fStack_e0);
          if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if (1 < uVar11) {
            uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
          }
          if (uVar28 <= uVar11) {
            uVar28 = uVar11;
          }
          uVar11 = uStack_f8;
          if (uVar28 < uVar18) {
            uVar11 = uVar28;
            if (uVar28 != 0) goto LAB_10879a414;
            FUN_10879b558(&lStack_100,0);
            uStack_f8 = 0;
            uVar11 = 0;
          }
        }
      }
    }
    uVar28 = uVar11 - 1;
    if ((uVar11 & uVar28) == 0) {
      uVar18 = (ulong)((int)uVar11 - 1U & uVar2);
    }
    else {
      uVar18 = uVar29;
      if (uVar11 <= uVar29) {
        uVar18 = 0;
        if (uVar11 != 0) {
          uVar18 = uVar29 / uVar11;
        }
        uVar18 = uVar29 - uVar18 * uVar11;
      }
    }
    plVar20 = *(long **)(lStack_100 + uVar18 * 8);
    if (plVar20 == (long *)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      bVar7 = false;
      bVar3 = 0;
      do {
        plVar17 = plVar20;
        plVar20 = (long *)*plVar17;
        if (plVar20 == (long *)0x0) break;
        uVar22 = plVar20[1];
        if ((uVar11 & uVar28) == 0) {
          uVar24 = uVar22 & uVar28;
        }
        else {
          uVar24 = uVar22;
          if (uVar11 <= uVar22) {
            uVar24 = 0;
            if (uVar11 != 0) {
              uVar24 = uVar22 / uVar11;
            }
            uVar24 = uVar22 - uVar24 * uVar11;
          }
        }
        if (uVar24 != uVar18) break;
        if (uVar22 == uVar29) {
          bVar5 = (int)plVar20[2] == (int)plVar9[2];
        }
        else {
          bVar5 = false;
        }
        bVar8 = bVar5 != bVar7;
        bVar5 = (bool)(bVar3 & bVar8);
        bVar7 = (bool)(bVar7 | bVar8);
        bVar3 = bVar3 | bVar8;
      } while (!bVar5);
    }
    uVar29 = plVar9[1];
    if ((uVar11 & uVar28) == 0) {
      uVar29 = uVar29 & uVar28;
      if (plVar17 == (long *)0x0) goto LAB_10879a660;
LAB_10879a624:
      *plVar9 = *plVar17;
      *plVar17 = (long)plVar9;
      if (*plVar9 != 0) {
        uVar18 = *(ulong *)(*plVar9 + 8);
        if ((uVar11 & uVar28) == 0) {
          uVar18 = uVar18 & uVar28;
        }
        else if (uVar11 <= uVar18) {
          uVar28 = 0;
          if (uVar11 != 0) {
            uVar28 = uVar18 / uVar11;
          }
          uVar18 = uVar18 - uVar28 * uVar11;
        }
        if (uVar18 != uVar29) {
LAB_10879a6ac:
          *(long **)(lStack_100 + uVar18 * 8) = plVar9;
        }
      }
    }
    else {
      if (uVar11 <= uVar29) {
        uVar18 = 0;
        if (uVar11 != 0) {
          uVar18 = uVar29 / uVar11;
        }
        uVar29 = uVar29 - uVar18 * uVar11;
      }
      if (plVar17 != (long *)0x0) goto LAB_10879a624;
LAB_10879a660:
      *plVar9 = (long)plStack_f0;
      *(long ***)(lStack_100 + uVar29 * 8) = &plStack_f0;
      plStack_f0 = plVar9;
      if (*plVar9 != 0) {
        uVar18 = *(ulong *)(*plVar9 + 8);
        if ((uVar11 & uVar28) == 0) {
          uVar18 = uVar18 & uVar28;
        }
        else if (uVar11 <= uVar18) {
          uVar28 = 0;
          if (uVar11 != 0) {
            uVar28 = uVar18 / uVar11;
          }
          uVar18 = uVar18 - uVar28 * uVar11;
        }
        goto LAB_10879a6ac;
      }
    }
    uStack_e8 = uStack_e8 + 1;
    plStack_190 = (long *)0x0;
    FUN_10879b518(&plStack_190);
    func_0x00010879c0fc();
    if (uVar25 <= uVar2) {
      uVar25 = uVar2;
    }
  }
  if ((uStack_e8 == 0) || ((ulong)uVar25 < (ulong)((param_2[1] - *param_2) / 0x118))) {
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    lStack_120 = 0;
    uStack_110 = 0x3f800000;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_140 = 0x3f800000;
    for (lVar10 = 0; lVar10 != (param_2[1] - *param_2) / 0x118; lVar10 = lVar10 + 1) {
      if (*(int *)(*param_2 + lVar10 * 0x118) == 7) {
        uStack_240 = CONCAT44(uStack_240._4_4_,(int)lVar10);
        lVar16 = param_6;
        func_0x0001077f9fe4(param_6,&uStack_240);
        if (lVar16 == 0) {
          plVar20 = (long *)(uStack_240 & 0xffffffff);
          plVar9 = &lStack_100;
          FUN_10879b07c();
          if (plVar9 == plVar20) {
            param_1[1] = 0;
            *param_1 = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            *(undefined4 *)(param_1 + 4) = 0x3f800000;
            param_1[6] = 0;
            param_1[5] = 0;
            param_1[8] = 0;
            param_1[7] = 0;
            param_1[10] = 0;
            param_1[9] = 0;
            *(undefined1 *)(param_1 + 0xb) = 0;
            goto LAB_10879ad0c;
          }
          func_0x00010879c0dc();
          plStack_190 = (long *)((ulong)plStack_190 & 0xffffffffffffff00);
          cStack_168 = '\0';
          if ((uStack_240 & 0xffffffff) < (ulong)((param_5[1] - *param_5) / 0x18)) {
            func_0x000107c27994(&plStack_1a8,*param_5 + (uStack_240 & 0xffffffff) * 0x18);
            lStack_1e0 = lStack_198;
            pplVar13 = pplStack_1a0;
            plVar17 = plStack_1a8;
            lVar16 = *param_2 + lVar10 * 0x118;
            uVar19 = *(undefined8 *)(lVar16 + 4);
            uVar21 = *(undefined8 *)(lVar16 + 0x50);
            plStack_1f0 = plStack_1a8;
            pplStack_1e8 = pplStack_1a0;
            pplStack_1a0 = (long **)0x0;
            lStack_198 = 0;
            plStack_1a8 = (long *)0x0;
            uStack_1d8 = (undefined4)uVar19;
            uStack_1d4 = (undefined4)((ulong)uVar19 >> 0x20);
            uStack_1d0 = (undefined4)uVar21;
            uStack_1cc = (undefined2)((ulong)uVar21 >> 0x20);
            uStack_1ca = (undefined2)((ulong)uVar21 >> 0x30);
            if (cStack_168 == '\x01') {
              func_0x000107c3194c(&plStack_190,&plStack_1f0);
              func_0x00010879c084();
            }
            else {
              plStack_190 = plVar17;
              pplStack_188 = pplVar13;
              lStack_180 = lStack_1e0;
              pplStack_1e8 = (long **)0x0;
              lStack_1e0 = 0;
              plStack_1f0 = (long *)0x0;
              func_0x00010879c084();
              cStack_168 = '\x01';
            }
            func_0x00010879c0fc();
            func_0x000107c27914(&plStack_1a8);
          }
          for (; plVar9 != plVar20; plVar9 = (long *)*plVar9) {
            lVar16 = param_4;
            FUN_1086d2be0(param_4,plVar9 + 3);
            if (lVar16 != 0) {
              uStack_78 = 1;
              func_0x00010879bff8();
              func_0x00010879c104();
              goto LAB_10879ad0c;
            }
            pplVar13 = &plStack_130;
            plVar17 = plVar9 + 3;
            FUN_1086995ac();
            lVar26 = lStack_88;
            lVar16 = lStack_90;
            if (((ulong)plVar17 & 1) != 0) {
              func_0x00010879c0b4();
              *pplVar13 = (long *)((lVar26 - lVar16) / 0x48);
              func_0x000107c27994(&plStack_210,plVar9 + 3);
              pplStack_1e8 = pplStack_208;
              plStack_1f0 = plStack_210;
              lStack_1e0 = lStack_200;
              pplStack_208 = (long **)0x0;
              lStack_200 = 0;
              uStack_218 = 0;
              plStack_210 = (long *)0x0;
              uStack_1d8 = 1;
              uStack_1d4 = 0;
              uStack_1d0 = 0;
              uStack_1cc = 0x100;
              uStack_1c8 = 8;
              uStack_1b8 = 0;
              uStack_1b0 = 0;
              uStack_1c0 = 0;
              uStack_228 = 0;
              uStack_220 = 0;
              func_0x00010879c034();
              func_0x00010879c064();
              FUN_10861b4fc(&uStack_228);
              pplVar13 = &plStack_210;
              func_0x000107c27914();
            }
            if (cStack_168 == '\x01') {
              func_0x00010879c0b4();
              lVar16 = lStack_90 + (long)*pplVar13 * 0x48;
              plVar17 = (long *)(lVar16 + 0x30);
              uVar28 = *(ulong *)(lVar16 + 0x38);
              if (uVar28 < *(ulong *)(lVar16 + 0x40)) {
                FUN_10868626c(uVar28,&plStack_190);
                lVar26 = uVar28 + 0x28;
                *(long *)(lVar16 + 0x38) = lVar26;
              }
              else {
                plVar23 = plVar17;
                FUN_10861b924(plVar17,(long)(uVar28 - *plVar17) / 0x28 + 1);
                FUN_10861b694(&plStack_1f0,plVar23,(*(long *)(lVar16 + 0x38) - *plVar17) / 0x28,
                              (ulong *)(lVar16 + 0x40));
                FUN_10868626c(lStack_1e0,&plStack_190);
                lStack_1e0 = lStack_1e0 + 0x28;
                FUN_10861b608(plVar17,&plStack_1f0);
                lVar26 = *(long *)(lVar16 + 0x38);
                func_0x00010861b8b8(&plStack_1f0);
              }
              *(long *)(lVar16 + 0x38) = lVar26;
            }
          }
          func_0x00010879c104();
        }
        else {
          func_0x00010879c0dc();
        }
      }
    }
    func_0x000107c27ab0(&uStack_a8,uStack_118);
    for (plVar9 = (long *)lStack_120; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      func_0x000107c28840(&uStack_a8,plVar9 + 2);
    }
    iVar27 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    lStack_230 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    lStack_248 = 0;
    pplStack_188 = (long **)0x0;
    plStack_190 = (long *)0x0;
    uStack_178 = 0;
    lStack_180 = 0;
    uStack_170 = 0x3f800000;
    puVar30 = (ulong *)(param_3 + 0x28);
    for (plVar9 = (long *)0x0; plVar20 = plStack_f0,
        plVar9 != (long *)((param_2[1] - *param_2) / 0x118); plVar9 = (long *)((long)plVar9 + 1)) {
      if (*(int *)(*param_2 + (long)plVar9 * 0x118) != 7) {
        plVar17 = &lStack_100;
        plVar20 = plVar9;
        FUN_10879b07c();
        for (; plVar17 != plVar20; plVar17 = (long *)*plVar17) {
          pplVar13 = &plStack_130;
          FUN_1086d2be0(pplVar13,plVar17 + 3);
          if (pplVar13 == (long **)0x0) {
            puVar12 = &uStack_240;
            func_0x000107c303b0(puVar12,FUN_10879b64c);
            FUN_108914e08();
            *(int *)(puVar12 + 4) = iVar27;
            FUN_1086995ac(&plStack_190,plVar17 + 3);
          }
        }
        if ((uint)plVar9 < *(uint *)(param_3 + 0x30)) {
          func_0x000107c303b0(&uStack_258,0x10879b698);
          func_0x00010b5c4f58();
        }
        iVar27 = iVar27 + 1;
      }
    }
    for (; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
      pplVar13 = &plStack_130;
      FUN_1086d2be0(pplVar13,plVar20 + 3);
      if (pplVar13 == (long **)0x0) {
        pplVar13 = &plStack_190;
        FUN_1086d2be0(pplVar13,plVar20 + 3);
        if (pplVar13 == (long **)0x0) {
          lVar10 = param_4;
          FUN_1086d2be0(param_4,plVar20 + 3);
          if (lVar10 != 0) {
            uStack_78 = 1;
            goto LAB_10879acf0;
          }
          FUN_1086995ac(&plStack_130,plVar20 + 3);
          func_0x000107c28840(&uStack_a8,plVar20 + 3);
          func_0x000107c27994(&plStack_270,plVar20 + 3);
          pplStack_1e8 = pplStack_268;
          plStack_1f0 = plStack_270;
          lStack_1e0 = lStack_260;
          pplStack_268 = (long **)0x0;
          lStack_260 = 0;
          uStack_278 = 0;
          plStack_270 = (long *)0x0;
          uStack_1d8 = 1;
          uStack_1d4 = 0;
          uStack_1d0 = 0;
          uStack_1cc = 0x100;
          uStack_1c8 = 8;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          uStack_1c0 = 0;
          uStack_288 = 0;
          uStack_280 = 0;
          func_0x00010879c034();
          func_0x00010879c064();
          FUN_10861b4fc(&uStack_288);
          func_0x000107c27914(&plStack_270);
        }
      }
    }
    if (puVar14 != &uStack_240) {
      if (*(long *)(param_3 + 0x20) == lStack_230) {
        func_0x000107c303a4(puVar14,&uStack_240);
      }
      else {
        FUN_10879b6d4(puVar14);
        if ((int)uStack_238 != 0) {
          func_0x000107c303c4(puVar14,&uStack_240);
        }
      }
    }
    if (puVar30 != &uStack_258) {
      if (*(long *)(param_3 + 0x38) == lStack_248) {
        func_0x000107c303a4(puVar30,&uStack_258);
      }
      else {
        func_0x00010879b6e8(puVar30);
        if ((int)uStack_250 != 0) {
          func_0x000107c303c4(puVar30,&uStack_258);
        }
      }
    }
LAB_10879acf0:
    func_0x00010879bff8();
    func_0x000100864b68(&plStack_190);
    FUN_10879b6fc(&uStack_258);
    FUN_10879b72c(&uStack_240);
LAB_10879ad0c:
    FUN_10879b75c(&uStack_160);
    func_0x000100864b68(&plStack_130);
  }
  else {
    func_0x00010879bff8();
  }
  FUN_10879b4c8(&lStack_100);
  FUN_10879b7ac(&uStack_d0);
  return;
}



/* Entry: 10879ae54; end: 10879aecb;  */

long FUN_10879ae54(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  func_0x0001074b2c18();
  func_0x000107c28904(param_1 + 0x28,param_2 + 0x28);
  plVar1 = (long *)(param_1 + 0x40);
  if (*plVar1 != 0) {
    FUN_10863a0e8(plVar1);
    __ZdlPv(*plVar1);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  return param_1;
}



/* Entry: 10879aecc; end: 10879b07b;  */

void FUN_10879aecc(long param_1,long param_2)

{
  uint uVar1;
  undefined8 ******ppppppuVar2;
  uint uVar3;
  undefined ***pppuVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_b0 [24];
  undefined8 *****pppppuStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined **ppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  uVar6 = 0;
  while( true ) {
    if ((ulong)((*(long *)(param_1 + 0x218) - *(long *)(param_1 + 0x210)) / 0x18) <= uVar6) {
      return;
    }
    ppuStack_80 = &PTR_DAT_110a93b98;
    uStack_78 = 0;
    uStack_68 = 0;
    func_0x00010879c118();
    uVar3 = 0;
    func_0x000107c3034c();
    uVar1 = 0;
    if (uStack_68._4_4_ == 0xf) {
      uVar1 = uVar3;
    }
    func_0x00010879c0c8();
    if ((uVar1 & 1) != 0) break;
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 0x18;
  }
  if ((*(byte *)(param_2 + 0x60) & 1) != 0) {
    ppuStack_80 = &PTR_DAT_110a93b98;
    uStack_78 = 0;
    uStack_68 = 0;
    func_0x00010879c118(*(long *)(param_1 + 0x210));
    func_0x000107c3034c(&ppuStack_80);
    if (uStack_68._4_4_ != 0xf) {
      FUN_108912b84(&ppuStack_80);
      uStack_68 = CONCAT44(0xf,(undefined4)uStack_68);
      uStack_70 = uStack_78;
      if ((uStack_78 & 1) != 0) {
        uStack_70 = *(ulong *)(uStack_78 & 0xfffffffffffffffe);
      }
      FUN_10879b828();
    }
    FUN_108915128();
    pppppuStack_98 = (undefined8 ******)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    pppuVar4 = &ppuStack_80;
    func_0x000107c30364(pppuVar4,&pppppuStack_98);
    if (((ulong)pppuVar4 & 1) == 0) {
      func_0x00010879c044();
    }
    else {
      uVar6 = uStack_90;
      ppppppuVar2 = (undefined8 ******)pppppuStack_98;
      if (-1 < (long)uStack_88) {
        uVar6 = uStack_88 >> 0x38;
        ppppppuVar2 = &pppppuStack_98;
      }
      func_0x00010866e7d8(auStack_b0,ppppppuVar2,(long)ppppppuVar2 + uVar6);
      func_0x000107c3194c(*(long *)(param_1 + 0x210) + lVar5,auStack_b0);
      func_0x000107c27914(auStack_b0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_98);
    func_0x00010879c0c8();
    return;
  }
  func_0x00010879c044();
  return;
}



/* Entry: 10879b07c; end: 10879b147;  */

undefined1  [16] FUN_10879b07c(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar6 = param_1[1];
  if (uVar6 == 0) {
    plVar4 = (long *)0x0;
    plVar3 = (long *)0x0;
    goto LAB_10879b124;
  }
  if (param_1[3] == 0) {
LAB_10879b11c:
    plVar4 = (long *)0x0;
  }
  else {
    uVar7 = (ulong)param_2;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & param_2);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = param_2 / uVar5;
        }
        uVar9 = (ulong)(param_2 - uVar1 * uVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + uVar9 * 8);
    plVar4 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar3;
          if (plVar4 == (long *)0x0) goto LAB_10879b120;
          uVar10 = plVar4[1];
          plVar3 = plVar4;
          if (uVar10 != uVar7) break;
          if (*(uint *)(plVar4 + 2) == param_2) goto LAB_10879b130;
        }
        if ((uVar6 & uVar8) == 0) {
          uVar10 = uVar10 & uVar8;
        }
        else if (uVar6 <= uVar10) {
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar2 * uVar6;
        }
      } while (uVar10 == uVar9);
      goto LAB_10879b11c;
    }
  }
LAB_10879b120:
  plVar3 = (long *)0x0;
LAB_10879b124:
  auVar11._8_8_ = plVar3;
  auVar11._0_8_ = plVar4;
  return auVar11;
  while (*(uint *)(plVar3 + 2) == param_2) {
LAB_10879b130:
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) break;
  }
  goto LAB_10879b124;
}



/* Entry: 10879b148; end: 10879b4c7;  */

long * FUN_10879b148(long *param_1,long *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  long *unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar8 = param_2;
  FUN_108848654();
  plVar17 = (long *)param_1[1];
  if (plVar17 != (long *)0x0) {
    uVar15 = (long)plVar17 - 1;
    uVar16 = (uint)plVar17;
    if (((ulong)plVar17 & uVar15) == 0) {
      unaff_x25 = (long *)((ulong)(uVar16 - 1) & (ulong)plVar8);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar8 - (long)plVar17 < 0;
      unaff_x25 = plVar8;
      if (plVar17 <= plVar8) {
        uVar1 = 0;
        if (uVar16 != 0) {
          uVar1 = (uint)plVar8 / uVar16;
        }
        unaff_x25 = (long *)(ulong)((uint)plVar8 - uVar1 * uVar16);
      }
    }
    plVar13 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10879b20c;
          plVar6 = (long *)plVar13[1];
          in_NG = (long)plVar6 - (long)plVar8 < 0;
          if (plVar6 != plVar8) break;
          plVar6 = plVar13 + 2;
          func_0x000107c28078(plVar6,param_2);
          if (((ulong)plVar6 & 1) != 0) goto LAB_10879b48c;
        }
        if (((ulong)plVar17 & uVar15) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar15);
        }
        else if (plVar17 <= plVar6) {
          uVar7 = 0;
          if (plVar17 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar17;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar17);
        }
        in_NG = (long)plVar6 - (long)unaff_x25 < 0;
      } while (plVar6 == unaff_x25);
    }
  }
LAB_10879b20c:
  plVar6 = param_1 + 2;
  plVar13 = (long *)0x30;
  __Znwm();
  uStack_58 = 0;
  plVar9 = plVar13 + 2;
  *plVar13 = 0;
  plVar13[1] = (long)plVar8;
  plStack_68 = plVar13;
  plStack_60 = plVar6;
  func_0x000107c27994(plVar9,param_2);
  plVar13[5] = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  func_0x00010879c10c();
  if ((plVar17 != (long *)0x0) &&
     (func_0x00010879c12c((float)extraout_x8,(int)param_1[4],(float)plVar17), !(bool)in_NG))
  goto LAB_10879b418;
  bVar3 = (long *)0x2 < plVar17;
  bVar4 = plVar17 == (long *)0x3;
  uVar15 = 1;
  if (bVar3) {
    uVar15 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
  }
  func_0x00010879c004(uVar15 | (long)plVar17 << 1);
  plVar14 = extraout_x8_00;
  if (!bVar3 || bVar4) {
    plVar14 = extraout_x9;
  }
  if ((long)plVar14 - 1U == 0) {
    plVar14 = (long *)0x2;
  }
  else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar9 = plVar14;
  }
  plVar17 = (long *)param_1[1];
  if (plVar17 < plVar14) {
LAB_10879b2b0:
    if ((ulong)plVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10879b4b4);
      (*pcVar2)();
    }
    lVar5 = (long)plVar14 << 3;
    __Znwm(lVar5);
    FUN_10879b5d4(param_1,lVar5);
    param_1[1] = (long)plVar14;
    lVar5 = *param_1;
    for (plVar17 = (long *)0x0; plVar14 != plVar17; plVar17 = (long *)((long)plVar17 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar17 * 8) = 0;
    }
    plVar9 = (long *)*plVar6;
    plVar17 = plVar14;
    if (plVar9 != (long *)0x0) {
      plVar10 = (long *)plVar9[1];
      uVar7 = (long)plVar14 - 1;
      uVar15 = 0;
      if (plVar14 != (long *)0x0) {
        uVar15 = (ulong)plVar10 / (ulong)plVar14;
      }
      plVar11 = plVar10;
      if (plVar14 <= plVar10) {
        plVar11 = (long *)((long)plVar10 - uVar15 * (long)plVar14);
      }
      if (((ulong)plVar14 & uVar7) == 0) {
        plVar11 = (long *)((ulong)plVar10 & uVar7);
      }
      *(long **)(lVar5 + (long)plVar11 * 8) = plVar6;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        plVar12 = (long *)plVar9[1];
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar7);
        }
        else if (plVar14 <= plVar12) {
          uVar15 = 0;
          if (plVar14 != (long *)0x0) {
            uVar15 = (ulong)plVar12 / (ulong)plVar14;
          }
          plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar14);
        }
        if (plVar12 != plVar11) {
          if (*(long *)(lVar5 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar12 * 8) = plVar10;
            plVar11 = plVar12;
          }
          else {
            *plVar10 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar5 + (long)plVar12 * 8);
            **(long **)(lVar5 + (long)plVar12 * 8) = (long)plVar9;
            plVar9 = plVar10;
          }
        }
      }
    }
  }
  else if (plVar14 < plVar17) {
    func_0x00010879c06c();
    if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010879c014();
    }
    if (plVar14 <= plVar9) {
      plVar14 = plVar9;
    }
    if (plVar14 < plVar17) {
      if (plVar14 != (long *)0x0) goto LAB_10879b2b0;
      FUN_10879b5d4(param_1,0);
      param_1[1] = 0;
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
    unaff_x25 = (long *)((ulong)((int)plVar17 - 1) & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar17 <= plVar8) {
      uVar15 = 0;
      if (plVar17 != (long *)0x0) {
        uVar15 = (ulong)plVar8 / (ulong)plVar17;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
    }
  }
LAB_10879b418:
  lVar5 = *param_1;
  plVar8 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar13 = *plVar6;
    *plVar6 = (long)plVar13;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar6;
    if (*plVar13 != 0) {
      plVar8 = *(long **)(*plVar13 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar8) {
        uVar15 = 0;
        if (plVar17 != (long *)0x0) {
          uVar15 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar8 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
      }
      *(long **)(lVar5 + (long)plVar8 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar8;
    *plVar8 = (long)plVar13;
  }
  plStack_68 = (long *)0x0;
  func_0x00010879c10c();
  param_1[3] = extraout_x8_01;
  FUN_10879b5ec(&plStack_68);
LAB_10879b48c:
  return plVar13 + 5;
}



/* Entry: 10879b4c8; end: 10879b517;  */

long * FUN_10879b4c8(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x000107c27914(lVar1);
    func_0x00010879c05c();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10879b518; end: 10879b557;  */

long * FUN_10879b518(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x18);
    }
    func_0x00010879c05c();
  }
  return param_1;
}



/* Entry: 10879b558; end: 10879b56f;  */

void FUN_10879b558(long *param_1,long param_2)

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



/* Entry: 10879b570; end: 10879b5d3;  */

void FUN_10879b570(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001074b2b38();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  return;
}



/* Entry: 10879b5d4; end: 10879b5eb;  */

void FUN_10879b5d4(long *param_1,long param_2)

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



/* Entry: 10879b5ec; end: 10879b62b;  */

long * FUN_10879b5ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x10);
    }
    func_0x00010879c05c();
  }
  return param_1;
}


